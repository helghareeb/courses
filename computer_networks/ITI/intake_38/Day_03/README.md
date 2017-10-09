# بسم الله الرحمن الرحيم

## Networking Labs
- Ubuntu 16.04
- To use terminal behind proxy, at terminal execute

```Shell
export http_proxy='http://proxyserveraddress:3128'    
export https_proxy='http://proxyserveraddress:3128'
```

## Network Configuration

### Network Configuration Files
```Shell
cat /etc/network/interfaces
cat /etc/resolv.conf
cat /etc/hosts
```

### net-tools
- Try the following command
```Shell
ifconfig
```
- If you get an output similar to the following
```Shell
The program 'ifconfig' is not installed. You can install it by typing:
sudo apt install net-tools
```
Follow the command
```Shell
sudo apt install net-tools
```

### Ethernet Interfaces
- Identified by the system
- Using name convention of ethX

- Identify Ethernet Interfaces
```Shell
ifconfig -a | grep eth
```
- Another application can be used: lshw
```Shell
sudo lshw -class network
```
- Ethernet Interface Settings
```Shell
sudo apt install ethtool
sudo ethtool eth0
```
- ethtool output depends on network card capabilities
- Changes made by ethtool is temporary (will be lost after reboot)
```Shell
sudo ethtool eth0 | grep Speed
sudo ethtool -s eth0 speed 100
sudo ethtool eth0 | grep Speed
sudo ethtool -s eth0 speed 1000
```
- To make them permenant, add them to
```Shell
/etc/network/interfaces
```
- Example of /etc/network/interfaces file
```Shell
auto eth0
iface eth0 inet static
pre-up /sbin/ethtool -s eth0 speed 1000 duplex full
```
- Check current assigned IP Address
```Shell
ifconfig
```

- Temporary IP Address Assignmet
```Shell
sudo ifconfig eth0 10.0.0.100 netmask 255.255.255.0
```
- Confirm the new IP Address
```Shell
ifconfig
```

- Manipulate IP routing table
```Shell
man route
```

- Display current routing table
```Shell
route -n
```

- Configure a default gateway
```Shell
sudo route add default gw 10.0.0.1 eth0
```
- DNS Temporary servers
```Shell
cat /etc/resolv.conf
```
```Shell
systemd-resolve --status
```
```Shell
man systemd-resolve
```
```Shell
systemd-resolve google.com
```
- You can copy the IP v4 shown above, paste it into the browser. Now what?

- To add temporary DNS entries, add the following lines to /etc/resolv.conf
```Shell
nameserver 8.8.8.8
nameserver 8.8.4.4
```

- Finally, Do not forge the following command:
```Shell
ip addr flush eth0
```

### DHCP Client
- Edit /etc/network/interfaces
```Shell
auto eth0
iface eth0 inet dhcp
```

- By adding interface configuration as shown above, we can manually enable interface
```Shell
sudo ifup eth0
```

- To manually disable the interface, run the following command
```Shell
sudo ifdown eth0
```

### Static IP Address Assignment
- Edit /etc/network/interfaces
```Shell
auto eth0
iface eth0 inet static
address 10.0.0.100
netmask 255.255.255.0
gateway 10.0.0.1
```
- Note: You must Reboot OS for changes to take effect
- Check the interface settings after reboot using ifconfig
- Can you use ?!
```Shell
ping google.com
```
- Meaning of "Name or service not known

- Loopback interface
```Shell
ifconfig lo
```

### Name Resolution
- /etc/resolv.conf # History
- To configure the resolver, add IP addresses of nameservers in /etc/network/interfaces

```Shell
iface eth0 inet static
    address 192.168.3.3
    netmask 255.255.255.0
    gateway 192.168.3.1
    dns-search example.com
    dns-nameservers 192.168.3.45 192.168.8.10
```
- dns-serch option 
  - can also be used with multiple domain names
  - DNS queries will be appended with dns-search entries in the order defined

### Static Hostnames
```Shell
cat /etc/hosts
```
- Has priority over DNS

### Bridging
- Using bridge on a system with one interface to allow virtual machines direct access to the outside network
- install the bridge-utils package

```Shell
sudo apt install bridge-utils
```
- Most probably, you will find it already installed if you are using any sort of virtualization technology

- Then, configure /etc/network/interfaces
```Shell
auto lo
iface lo inet loopback

auto br0
iface br0 inet static
        address 192.168.0.10
        network 192.168.0.0
        netmask 255.255.255.0
        broadcast 192.168.0.255
        gateway 192.168.0.1
        bridge_ports eth0
        bridge_fd 9
        bridge_hello 2
        bridge_maxage 12
        bridge_stp off
```

- Restarting Network Service
```Shell
sudo service network-manager restart
```

- Setting MAC Address
```Shell
ifconfig eth0 | grep ether
ifconfig eth0 hw ether 00:42:42:42:42:42
ifconfig eth0 | grep ether
```

- hostname
  - Get the hostname
```Shell
hostname
```
  - Source of hostname
```Shell
cat /etc/hostname
```
  - Temporarily change the hostname
```Shell
sudo hostname test
```
  - Get the hostname
  - This effect is permenant / temporary?
  - How can we make it permenant?

- arp
  - Display arp table
```Shell
arp -a
```
  - Add arp entry
```Shell
arp -s 192.168.1.200 00:42:42:42:42:42
```
  - Remove arp entry
```Shell
arp -d 192.168.1.200
```

  - Display arp table (incomplete status)
  - Try restarting network services !

  - arpsend - send ARP requests
```Shell
man arpsend
```
- route
```Shell
netstat -r
```

- ping
```Shell
man ping
```

- binding: more than one IP address on the same NIC
  - /etc/network/interfaces
```Shell
# This file describes the network interfaces available on your system
# and how to activate them. For more information, see interfaces(5).
# The loopback network interface
auto lo
iface lo inet loopback
# The primary network interface
iface eth0 inet static
address 192.168.1.34
network 192.168.1.0
netmask 255.255.255.0
gateway 192.168.1.1
auto eth0
auto eth0:0
iface eth0:0 inet static
address 192.168.1.233
netmask 255.255.255.0
auto eth0:1
iface eth0:1 inet static
address 192.168.1.242
netmask 255.255.255.0
```
  - enable extra IP-addresses
```Shell
sudo ifup eth0:0
sudo ifup eth0:1
```

  - Verify extra IP-addresses
```Shell
ifconfig | grep 'inet '
```

- bonding: multipe NICs behind the same IP

### Network Sniffing
- wireshark
- tcpdump

#### wireshark
```Shell
sudo apt install wireshark
```
- Should non-superuses be able to capture packets? -> yes
- Otherwise, run wireshark as super user

- wireshark filters
  - icmp
  - icmp or dns
  - ip.addr==192.168.1.1
  - frame.number>90 and frame.number<100
  - arp or bootp
  - dns and ip.addr==192.168.1.1

#### tcpdump
```Shell
man tcpdump
```

```Shell
sudo tcpdump host 192.168.1.1
# My interface IP
```

```Shell
sudo tcpdump tcp port 22
# SSH port
```

```Shell
sudo tcpdump -w tmp.tcpdump tcp port 22
# Write output to file
```

```Shell
sudo tcpdump -r tmp.tcpdump
# Display previously created file
```

## Security

### User Management

#### Root
- to enable root account, give it a password
```Shell
sudo passwd
```

- to access using root
```Shell
sudo -i
```

- to disable root account
```Shell
sudo passwd -l root
```

- to add user
```Shell
sudo adduser username
```

- to delete user
```Shell
sudo deluser username
```

- deleted user files' are not deleted. If new user added with same UID/GID, they will have access to files. So, after deleting a user, change ownership of their files to root
```Shell
sudo chown -R root:root home/username
sudo mkdir /home/archived_users/
sudo mv /home/username /home/archived_users
```

- to temporarily lock or unlock a user account
```Shell
sudo passwd -l username
sudo passwd -u username
```

- to add or delete a personalized group
```Shell
sudo addgroup groupname
sudo delgroup groupname
```

- to add user to a group
```Shell
sudo adduser username groupname
```

### Console Security
### Firewall

### Remote Administration

#### openssh
- Install Client
- Mostly, already included
- ssh configurations can be found at /etc/ssh/sshd_config

```Shell
sudo apt install openssh-client
```
- ssh version
```Shell
grep Protocol /etc/ssh/ssh_config
```

- Install Server
```Shell
sudo apt install openssh-server
```

- Now, ssh your neighbor using his IP
- You need to enter password

- SSH Keys
  - allow authentication between two hosts without the need of a password
  - Practical for large deployments

- Generate the key (at client)
```Shell
ssh-keygen -t rsa
```

- Move to the directory where public key exists
```Shell
sudo -i
cd /root/.ssh
```

- Start ssh service on server, to securily copy public key from server to client
```Shell
service sshd status
```
- If sshd is inactive, run the command
```Shell
service sshd start
```

- Copy id to remote host (server)
```Shell
ssh-copy-id username@remotehost
```

- Now try logging-in using
```Shell
ssh username@server
```

- scp
  - secure copy: like cp, but two machines behind ssh
  - to copy from remote host to our local host:
```Shell
scp username@remote_ip:/PATH /Local/Path
```
  - to copy from local host to remote host
```Shell
scp /Local/Path username@remote_ip:/PATH
```
  - Note: If you are logged remotely, then you will run the command of copying as if you are copying from local to remoate, not viceversa - Think about it

- Execute command on remote server using ssh
```Shell
ssh username@remote_ip "ls -l .ssh"
```

- X forwarding via ssh
```Shell
ssh -X username@remote_ip -p 55555
```

- To stop ssh
```Shell
service sshd stop
```


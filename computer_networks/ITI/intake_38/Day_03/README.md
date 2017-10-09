# بسم الله الرحمن الرحيم

## Networking Labs
- Ubuntu 16.04

## Network Configuration

### Network Configuration Files
```Shell
cat /etc/network/interfaces
cat /etc/resolv.conf
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
- Changes made by ethtool is temporary (will be lost after reboot)
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

- Loopback interface
```Shell
ifconfig lo
```

### Name Resolution












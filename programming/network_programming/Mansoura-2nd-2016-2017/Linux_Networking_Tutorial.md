# Linux Networking Tutorial

## From Last Lecture
Q: Why do I get the same value in TTL field at $ping Command?
Q: The value I get as a response in $ping command, is it the starting TTL value
or the decremented one? If so, what is the starting TTL value for my OS?

A: From < $man ping > or from < http://manpages.ubuntu.com/manpages/trusty/man8/ping.8.html >
answer is:
The TCP/IP specification states that the TTL field for TCP packets should
     be set to 60, but many systems use smaller values (4.3 BSD uses 30, 4.2
     used 15).

     The maximum possible value of this field is 255, and most Unix systems
     set the TTL field of ICMP ECHO_REQUEST packets to 255.  

So, the value we get at the ping response is not the starting TTL, however it
is the result after decrementing the TTL values at each hop.

## Basic Network Management Commands

### Ubuntu
$ vagrant init ubuntu/trusty64; vagrant up --provider virtualbox
$ vagrant ssh
$ sudo su

### Protocols
From http://www.iana.org/assignments/protocol-numbers/protocol-numbers.xhtml
In the Internet Protocol version 4 (IPv4) [RFC791] there is a field
called "Protocol" to identify the next level protocol.  This is an 8
bit field.  In Internet Protocol version 6 (IPv6) [RFC2460], this field
is called the "Next Header" field.

$ more /etc/protocols
$ grep tcp /etc/protocols

### Network Services
From https://en.wikibooks.org/wiki/Communication_Networks/TCP_and_UDP_Protocols/UDP
Image: https://en.wikibooks.org/wiki/Communication_Networks/TCP_and_UDP_Protocols/UDP#/media/File:Port.jpg

$ more /etc/services
$ grep ssh /etc/services

### Network Interfaces

$ cat /etc/network/interfaces

Configuring network cards for dhcp is good practice for clients, but servers usually require a fixed ip address.
### This file describes the network interfaces available on your system
### and how to activate them. For more information, see interfaces(5).
### The loopback network interface
auto lo
iface lo inet loopback
auto eth0
iface eth0 inet dhcp

Example of fixed IP
auto lo
iface lo inet loopback
auto eth0
iface eth0 inet static
address 10.42.189.198
broadcast 10.42.189.207
netmask 255.255.255.240
gateway 10.42.189.193

### interface up and interface down
Verify either interface is up or down using [ $ ip address ] and check assigned
ip address. More information about [ $ ip address ] vs. $ ifconfig can be found
here https://linuxconfig.org/how-to-install-missing-ifconfig-command-on-debian-linux

Using ifdown and ifup here effect only is limited, and does not
propagate to the restart

$ sudo su
$ ifdown eth0
$ ifup eth0
$ ip address
$ ip address | grep inet

### hostname
$ grep HOSTNAME /etc/hostname
$ hostname
$ hostname haitham

### arp
$ arp -a
$ arp
$ arp -d <any_entry>
$ arp
$ ping <any_entry>
$ arp

### route
$ netstat -r
$ route

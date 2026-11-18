## Router Zein
en
conf t

int g0/0
ip add 10.0.0.2 255.0.0.0
standby ver 2
standby ip 10.0.0.1
ip nat inside
no shut
exit

int s0/0/0
ip add 61.0.0.1 255.255.255.252
ip nat outside
no shut
exit

int tunnel 0
ip add 172.16.0.2 255.255.0.0
tunnel source s0/0/0
tunnel dest 51.0.0.1
exit


router rip
ver 2
no auto-sum
net 10.0.0.0
net 172.16.0.0
exit


access-list 1 permit 10.0.0.0 0.255.255.255
ip nat inside source list 1 interface s0/0/0 overload

ip route 0.0.0.0 0.0.0.0 s0/0/0
## Router STC
en
conf t

int g0/0
ip add 10.0.0.3 255.0.0.0
standby ver 2
standby ip 10.0.0.1
ip nat inside
no shut
exit

int s0/0/0
ip add 71.0.0.1 255.255.255.252
ip nat outside
no shut
exit

int tunnel 1
ip add 172.20.0.2 255.255.0.0
tunnel source s0/0/0
tunnel dest 41.0.0.1
exit


router rip
ver 2
no auto-sum
net 10.0.0.0
net 172.20.0.0
exit


access-list 1 permit 10.0.0.0 0.255.255.255
ip nat inside source list 1 interface s0/0/0 overload

ip route 0.0.0.0 0.0.0.0 s0/0/0

## Router Tedata
en
conf t

int g0/0
ip add 192.168.1.2 255.0.0.0
standby ver 2
standby ip 192.168.1.1
standby prio 200
ip nat inside
no shut
exit

int s0/0/0
ip add 51.0.0.1 255.255.255.252
ip nat outside
no shut
exit

int tunnel 0
ip add 172.16.0.1 255.255.0.0
tunnel source s0/0/0
tunnel dest 61.0.0.1
exit

router rip
ver 2
no auto-sum
net 192.168.1.0
net 172.16.0.0
exit


access-list 1 permit 192.168.1.0 0.0.0.255
ip nat inside source list 1 interface s0/0/0 overload


ip route 0.0.0.0 0.0.0.0 s0/0/0
## Router Orange
en
conf t

int g0/0
ip add 192.168.1.3 255.0.0.0
standby ver 2
standby ip 192.168.1.1
ip nat inside
no shut
exit

int s0/0/0
ip add 41.0.0.1 255.255.255.252
ip nat outside
no shut
exit

int tunnel 1
ip add 172.20.0.1 255.255.0.0
tunnel source s0/0/0
tunnel dest 71.0.0.1
exit

router rip
ver 2
no auto-sum
net 192.168.1.0
net 172.20.0.0
exit


access-list 1 permit 192.168.1.0 0.0.0.255
ip nat inside source list 1 interface s0/0/0 overload

ip route 0.0.0.0 0.0.0.0 s0/0/0

## Router Internet 1
en
conf t

int s0/0/0
ip add 51.0.0.2 255.255.255.252
no shut
exit

int s0/0/1
ip add 41.0.0.2 255.255.255.252
no shut
exit

int s0/1/0
ip add 96.0.0.1 255.255.255.252
no shut
exit


int g0/0
ip add 200.150.100.1 255.255.255.0
no shut
exit

router ospf 1
net 51.0.0.0 0.0.0.3 area 0
net 41.0.0.0 0.0.0.3 area 0
net 96.0.0.0 0.0.0.3 area 0
net 200.150.100.0 0.0.0.255 area 0
exit


## Router Internet 2
en
conf t

int s0/0/0
ip add 61.0.0.2 255.255.255.252
no shut
exit

int s0/0/1
ip add 71.0.0.2 255.255.255.252
no shut
exit

int s0/1/0
ip add 96.0.0.2 255.255.255.252
no shut
exit


int g0/0
ip add 180.18.0.1 255.255.0.0
no shut
exit

router ospf 1
net 61.0.0.0 0.0.0.3 area 0
net 71.0.0.0 0.0.0.3 area 0
net 96.0.0.0 0.0.0.3 area 0
net 180.18.0.0 0.0.255.255 area 0
exit



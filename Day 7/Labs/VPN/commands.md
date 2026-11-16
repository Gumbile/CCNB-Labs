## Router UK
en
conf t

int g0/0
ip add 172.16.0.1 255.255.0.0
no shut
ip nat inside
exit

int s0/0/0
ip add 71.0.0.1 255.255.255.252
no shut
ip nat outside
exit

ip route 0.0.0.0 0.0.0.0 s 0/0/0

access-list 1 per 172.16.0.0 0.0.255.255
ip nat inside source list 1 interface Serial0/0/0 overload


int tunnel 1
ip add 10.0.0.2 255.0.0.0
tunnel sou s 0/0/0
tunnel dest 41.0.0.1
tunnel mode gre ip
exit

ip route 192.168.1.0 255.255.255.0 10.0.0.1



## Router Cairo
en
conf t


int g0/0
ip add 192.168.1.1 255.255.255.0
no shut
ip nat inside
exit

int s0/0/0
ip add 41.0.0.1 255.255.255.252
no shut
ip nat outside
exit

ip route 0.0.0.0 0.0.0.0 s 0/0/0

access-list 1 per 192.168.1.0 0.0.0.255
ip nat inside source list 1 interface Serial0/0/0 overload

int tunnel 1
ip add 10.0.0.1 255.0.0.0
tunnel sou s 0/0/0
tunnel dest 71.0.0.1
tunnel mode gre ip
exit

ip route 172.16.0.0 255.255.0.0 10.0.0.2



## Router 2
en
conf t

int s0/0/0
ip add 41.0.0.2 255.255.255.252
no shut
exit

int s0/1/1
ip add 51.0.0.2 255.255.255.252
no shut
exit

router ospf 1
router 2.2.2.2
exit

int s0/0/0
ip ospf 1 area 0
exit

int s0/1/1
ip ospf 1 area 0
exit


## Router 4
en
conf t

int s0/0/0
ip add 71.0.0.2 255.255.255.252
no shut
exit

int s0/1/0
ip add 61.0.0.2 255.255.255.252
no shut
exit

router ospf 1
router 4.4.4.4
exit

int s0/0/0
ip ospf 1 area 0
exit

int s0/1/0
ip ospf 1 area 0
exit




## Router 3
en
conf t

int s0/1/0
ip add 61.0.0.1 255.255.255.252
no shut
exit

int s0/1/1
ip add 51.0.0.1 255.255.255.252
no shut
exit

router ospf 1
router 3.3.3.3
exit

int s0/1/1
ip ospf 1 area 0
exit

int s0/1/0
ip ospf 1 area 0
exit




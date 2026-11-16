## Router 1
en
conf t

int g0/0
ip add 172.16.0.1 255.255.0.0
no shut
exit


int g0/1
ip add 20.0.0.1 255.0.0.0
no shut
exit


router ospf 1
net 172.16.0.0 0.0.255.255 area 0
net 20.0.0.0 0.255.255.255 area 0
exit

en
conf t

int loopba 1
ip add 3.3.3.3 255.255.255.255
no shut 
exit

router ospf 1
router 3.3.3.3
net 3.3.3.3 0.0.0.0 area 0
exit

do write
do reload



en
conf t

int g0/1
ip ospf pri 12
exit










## Router 2
en
conf t

int g0/0
ip add 192.168.1.1 255.255.255.0
no shut
exit


int g0/1
ip add 20.0.0.2 255.0.0.0
no shut
exit


router ospf 1
net 192.168.1.0 0.0.0.255 area 0
net 20.0.0.0 0.255.255.255 area 0
exit




en
conf t

int loopba 1
ip add 2.2.2.2 255.255.255.255
no shut 
exit

router ospf 1
router 2.2.2.2
net 2.2.2.2 0.0.0.0 area 0
exit

do write
do reload





en
conf t

int g0/1
ip ospf pri 20
exit







## Router 3
en
conf t

int g0/0
ip add 10.0.0.1 255.0.0.0
no shut
exit


int g0/1
ip add 20.0.0.3 255.0.0.0
no shut
exit


router ospf 1
net 10.0.0.0 0.255.255.255 area 0
net 20.0.0.0 0.255.255.255 area 0
exit



en
conf t

int loopba 1
ip add 8.8.8.8 255.255.255.255
no shut 
exit

router ospf 1
router 8.8.8.8
net 8.8.8.8 0.0.0.0 area 0
exit

do write
do reload






en
conf t

int g0/1
ip ospf pri 5
exit







## Router 4
en
conf t

int g0/0
ip add 200.150.100.1 255.255.255.0
no shut
exit


int g0/1
ip add 20.0.0.4 255.0.0.0
no shut
exit


router ospf 1
net 200.150.100.0 0.0.0.255 area 0
net 20.0.0.0 0.255.255.255 area 0
exit



en
conf t

int loopba 1
ip add 4.4.4.4 255.255.255.255
no shut 
exit

router ospf 1
router 4.4.4.4
net 4.4.4.4 0.0.0.0 area 0
exit

do write
do reload



en
conf t

int g0/1
ip ospf pri 10
exit





## Router 5
en
conf t

int g0/0
ip add 180.18.0.1 255.255.0.0
no shut
exit


int g0/1
ip add 20.0.0.5 255.0.0.0
no shut
exit


router ospf 1
net 180.18.0.0 0.0.255.255 area 0
net 20.0.0.0 0.255.255.255 area 0
exit

en
conf t

int loopba 1
ip add 5.5.5.5 255.255.255.255
no shut 
exit

router ospf 1
router 5.5.5.5
net 5.5.5.5 0.0.0.0 area 0
exit

do write
do reload






en
conf t

int g0/1
ip ospf pri 15
exit







## Router 6
en
conf t

int g0/0
ip add 30.0.0.1 255.0.0.0
no shut
exit


int g0/1
ip add 20.0.0.6 255.0.0.0
no shut
exit


router ospf 1
net 30.0.0.0 0.255.255.255 area 0
net 20.0.0.0 0.255.255.255 area 0
exit



en
conf t

int loopba 1
ip add 9.9.9.9 255.255.255.255
no shut 
exit

router ospf 1
router 9.9.9.9
net 9.9.9.9 0.0.0.0 area 0
exit

do write
do reload



en
conf t

int g0/1
ip ospf pri 3
exit

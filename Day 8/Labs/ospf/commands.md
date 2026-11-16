en
erase start
reload
no



## Router 1
en
conf t

int s0/1/0
ip add 192.168.11.6 255.255.255.252
no shut
exit

int s0/1/1
ip add 192.168.11.9 255.255.255.252
no shut
exit

router ospf 1
router 1.1.1.1
exit

int s0/1/0
ip ospf 1 area 0
exit

int s0/1/1
ip ospf 1 area 0
exit



## Router 2
en
conf t

int s0/0/0
ip add 192.168.11.13 255.255.255.252
no shut
exit


int s0/1/1
ip add 192.168.11.10 255.255.255.252
no shut
exit

int s0/1/0
ip add 192.168.11.21 255.255.255.252
no shut
exit


router ospf 1
no router 1.1.1.1
router 2.2.2.2
exit

int s0/0/0
ip ospf 1 area 0
exit

int s0/1/0
ip ospf 1 area 0
exit

int s0/1/1
ip ospf 1 area 0
exit



## Router 3
en
conf t

int s0/0/0
ip add 192.168.11.2 255.255.255.252
no shut
exit


int s0/1/0
ip add 192.168.11.5 255.255.255.252
no shut
exit

int s0/0/1
ip add 192.168.11.17 255.255.255.252
no shut
exit


router ospf 1
router 3.3.3.3
exit

int s0/0/0
ip ospf 1 area 0
exit

int s0/1/0
ip ospf 1 area 0
exit

int s0/0/1
ip ospf 1 area 0
exit




## Router 4
en
conf t

int s0/0/0
ip add 192.168.11.26 255.255.255.252
no shut
exit


int s0/1/0
ip add 192.168.11.33 255.255.255.252
no shut
exit

int s0/0/1
no ip add 192.168.11.16 255.255.255.252
ip add 192.168.11.18 255.255.255.252
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

int s0/0/1
ip ospf 1 area 0
exit



## Router 5
conf t

int s0/0/0
ip add 192.168.11.29 255.255.255.252
no shut
exit


int s0/1/0
ip add 192.168.11.22 255.255.255.252
no shut
exit

int s0/0/1
ip add 192.168.11.37 255.255.255.252
no shut
exit


router ospf 1
router 5.5.5.5
exit

int s0/0/0
ip ospf 1 area 0
exit

int s0/1/0
ip ospf 1 area 0
exit

int s0/0/1
ip ospf 1 area 0
exit

## Router 6
conf t

int g0/0
ip add 192.168.10.249 255.255.255.248
no shut
exit

int s0/1/0
ip add 192.168.11.34 255.255.255.252
no shut
exit



router ospf 1
router 6.6.6.6
exit

int g0/0
ip ospf 1 area 0
exit

int s0/1/0
ip ospf 1 area 0
exit


## Router 7
conf t

int g0/0
ip add 192.168.10.241 255.255.255.248
no shut
exit

int s0/0/1
ip add 192.168.11.38 255.255.255.252
no shut
exit



router ospf 1
router 7.7.7.7
exit

int g0/0
ip ospf 1 area 0
exit

int s0/0/1
ip ospf 1 area 0
exit

## Router 8
En
Conf t

int g0/0
ip add 192.168.10.1 255.255.255.128
no shut
exit

int s0/0/0
ip add 192.168.11.1 255.255.255.252
no shut
exit



router ospf 1
router 8.8.8.8
exit

int g0/0
ip ospf 1 area 0
exit

int s0/0/0
ip ospf 1 area 0
exit

## Router 9
En
Conf t

int g0/0
ip add 192.168.10.193 255.255.255.224
no shut
exit

int s0/0/0
no ip add 192.168.11.24 255.255.255.252
ip add 192.168.11.25 255.255.255.252
no shut
exit



router ospf 1
router 9.9.9.9
exit

int g0/0
ip ospf 1 area 0
exit

int s0/0/0
ip ospf 1 area 0
exit

## Router 10
En
Conf t


int g0/0
no ip add 192.168.10.127 255.255.255.192
ip add 192.168.10.129 255.255.255.192
no shut
exit

int s0/0/0
ip add 192.168.11.14 255.255.255.252
no shut
exit



router ospf 1
router 10.10.10.10
exit

int g0/0
ip ospf 1 area 0
exit

int s0/0/0
ip ospf 1 area 0
exit


## Router 11
En
Conf t

int g0/0
no ip add 192.168.10.225 255.255.255.192
ip add 192.168.10.225 255.255.255.240
no shut
exit

int s0/0/0
ip add 192.168.11.30 255.255.255.252
no shut
exit



router ospf 1
router 11.11.11.11
exit

int g0/0
ip ospf 1 area 0
exit

int s0/0/0
ip ospf 1 area 0
exit


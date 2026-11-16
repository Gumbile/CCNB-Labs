## Router 1
en
conf t

int s0/0/0
ip add 51.0.0.6 255.255.255.252
no shut
exit

int s0/0/1
ip add 51.0.0.10 255.255.255.252
no shut
exit

int s0/1/0
ip add 41.0.0.6 255.255.255.252
no shut
exit

int s0/1/1
ip add 41.0.0.10 255.255.255.252
no shut
exit

router rip
net 51.0.0.0
no auto-sum
exit


router ospf 1
net 41.0.0.4 0.0.0.3 area 0
net 41.0.0.8 0.0.0.3 area 0
exit


en
conf t

router ospf 1
re rip metric-type 1 subnets
exit


router rip
re ospf 1 metric 5
exit


-----------------------------------------------------------------------------


## Router 2
en
conf t

int s0/0/0
ip add 41.0.0.13 255.255.255.252
no shut
exit


router ospf 1
net 41.0.0.12 0.0.0.3 area 0
exit



en
conf t

int loopback 1
ip add 172.30.31.1 255.255.255.0
no shut
exit

int loopback 2
ip add 172.30.32.1 255.255.255.0
no shut
exit

int loopback 3
ip add 172.30.33.1 255.255.255.0
no shut
exit

int loopback 4
ip add 172.30.34.1 255.255.255.0
no shut
exit


en
conf t


router ospf 1
net 172.30.31.0 0.0.0.255 area 0
net 172.30.32.0 0.0.0.255 area 0
net 172.30.33.0 0.0.0.255 area 0
net 172.30.34.0 0.0.0.255 area 0
exit


-----------------------------------------------------------------------------

## Router 3
en
conf t

int s0/0/0
ip add 41.0.0.2 255.255.255.252
no shut
exit

int s0/0/1
ip add 41.0.0.5 255.255.255.252
no shut
exit


router ospf 1
net 41.0.0.0 0.0.0.3 area 0
net 41.0.0.4 0.0.0.3 area 0
exit

-----------------------------------------------------------------------------

## Router 4
en
conf t

int s0/0/0
ip add 41.0.0.14 255.255.255.252
no shut
exit

int s0/0/1
ip add 41.0.0.9 255.255.255.252
no shut
exit


router ospf 1
net 41.0.0.8 0.0.0.3 area 0
net 41.0.0.12 0.0.0.3 area 0
exit

-----------------------------------------------------------------------------


## Router 5
en
conf t

int s0/0/0
ip add 41.0.0.1 255.255.255.252
no shut
exit


router ospf 1
net 41.0.0.0 0.0.0.3 area 0
exit

en
conf t

int loopback 1
ip add 172.20.21.1 255.255.255.0
no shut
exit

int loopback 2
ip add 172.20.22.1 255.255.255.0
no shut
exit

int loopback 3
ip add 172.20.23.1 255.255.255.0
no shut
exit

int loopback 4
ip add 172.20.24.1 255.255.255.0
no shut
exit


en
conf t


router ospf 1
net 172.20.21.0 0.0.0.255 area 0
net 172.20.22.0 0.0.0.255 area 0
net 172.20.23.0 0.0.0.255 area 0
net 172.20.24.0 0.0.0.255 area 0
exit



-----------------------------------------------------------------------------

## Router 6
en
conf t

int s0/0/0
ip add 51.0.0.14 255.255.255.252
no shut
exit

int s0/0/1
ip add 51.0.0.9 255.255.255.252
no shut
exit


router rip
net 51.0.0.0
no auto-sum
exit

-----------------------------------------------------------------------------
## Router 7
en
conf t

int s0/0/0
ip add 51.0.0.2 255.255.255.252
no shut
exit

int s0/0/1
ip add 51.0.0.5 255.255.255.252
no shut
exit


router rip
net 51.0.0.0
no auto-sum
exit

-----------------------------------------------------------------------------
## Router 8
en
conf t

int s0/0/0
ip add 51.0.0.1 255.255.255.252
no shut
exit


router rip
net 51.0.0.0
no auto-sum
exit


en
conf t

int loopback 1
ip add 192.168.10.1 255.255.255.0
no shut
exit

int loopback 2
ip add 192.168.20.1 255.255.255.0
no shut
exit

int loopback 3
ip add 192.168.30.1 255.255.255.0
no shut
exit

int loopback 4
ip add 192.168.40.1 255.255.255.0
no shut
exit

router rip
net 192.168.10.0
net 192.168.20.0
net 192.168.30.0
net 192.168.40.0
no auto-sum
exit




-----------------------------------------------------------------------------



## Router 9
en
conf t

int s0/0/0
ip add 51.0.0.13 255.255.255.252
no shut
exit


router rip
net 51.0.0.0
no auto-sum
exit

en
conf t


int loopback 1
ip add 192.168.70.1 255.255.255.0
no shut
exit

int loopback 2
ip add 192.168.80.1 255.255.255.0
no shut
exit

int loopback 3
ip add 192.168.90.1 255.255.255.0
no shut
exit

int loopback 4
ip add 192.168.100.1 255.255.255.0
no shut
exit

router rip
net 192.168.70.0
net 192.168.80.0
net 192.168.90.0
net 192.168.100.0
no auto-sum
exit


-----------------------------------------------------------------------------


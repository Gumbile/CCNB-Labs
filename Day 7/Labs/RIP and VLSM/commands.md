## Router 1
en
conf t

int s0/1/0
ip add 192.168.10.166 255.255.255.252
no shut
exit

int s0/1/1
ip add 192.168.10.169 255.255.255.252
no shut
exit

router rip
ver 2
no auto-sum

net 192.168.10.164
net 192.168.10.168
exit

## Router 2
en
conf t

int s0/0/0
ip add 192.168.10.173 255.255.255.252
no shut
exit

int s0/1/0
ip add 192.168.10.193 255.255.255.252
no shut
exit

int s0/1/1
ip add 192.168.10.170 255.255.255.252
no shut
exit

router rip
ver 2
no auto-sum

net 192.168.10.168
net 192.168.10.192
net 192.168.10.172
exit


## Router 3
en
conf t

int s0/0/0
ip add 192.168.10.162 255.255.255.252
no shut
exit

int s0/0/1
ip add 192.168.10.185 255.255.255.252
no shut
exit

int s0/1/0
ip add 192.168.10.165 255.255.255.252
no shut
exit

router rip
ver 2
no auto-sum

net 192.168.10.160
net 192.168.10.184
net 192.168.10.164
exit


## Router 4
en
conf t

int s0/0/0
ip add 192.168.10.178 255.255.255.252
no shut
exit

int s0/0/1
ip add 192.168.10.186 255.255.255.252
no shut
exit

int s0/1/0
ip add 192.168.10.189 255.255.255.252
no shut
exit

router rip
ver 2
no auto-sum

net 192.168.10.184
net 192.168.10.176
net 192.168.10.188
exit



## Router 5
en
conf t

int s0/0/0
ip add 192.168.10.181 255.255.255.252
no shut
exit

int s0/0/1
ip add 192.168.10.197 255.255.255.252
no shut
exit

int s0/1/0
ip add 192.168.10.194 255.255.255.252
no shut
exit

router rip
ver 2
no auto-sum

net 192.168.10.192
net 192.168.10.180
net 192.168.10.196
exit


## Router 6
en
conf t

int g0/0
ip add 192.168.10.145 255.255.255.248
no shut
exit


int s0/1/0
ip add 192.168.10.190 255.255.255.252
no shut
exit

router rip
ver 2
no auto-sum

net 192.168.10.144
net 192.168.10.188
passive-int g0/0
exit

## Router 7
en
conf t

int g0/0
ip add 192.168.10.153 255.255.255.248

int s0/0/1
ip add 192.168.10.198 255.255.255.252
no shut
exit

router rip
ver 2
no auto-sum

net 192.168.10.152
net 192.168.10.196
passive-int g0/0
exit


## Router 8
En
Conf t


Int g0/0
Ip add 192.168.10.1 255.255.255.192
No shut
Exit 

Int s0/0/0
Ip add 192.168.10.161 255.255.255.252
No shut
Exit 


Router rip 
Version 2
No auto-sum
Net 192.168.10.0
Net 192.168.10.160
Passive-int g 0/0
Exit 


## Router 9
En
Conf t


Int g0/0
Ip add 192.168.10.97 255.255.255.224
No shut
Exit 

Int s0/0/0
Ip add 192.168.10.177 255.255.255.252
No shut
Exit 


Router rip 
Version 2
No auto-sum
Net 192.168.10.96
Net 192.168.10.176
Passive-int g 0/0
Exit 

## Router 10
En
Conf t


Int g0/0
Ip add 192.168.10.65 255.255.255.224
No shut
Exit 

Int s0/0/0
Ip add 192.168.10.174 255.255.255.252
No shut
Exit 


Router rip 
Version 2
No auto-sum
Net 192.168.10.64
Net 192.168.10.172
Passive-int g 0/0
Exit 


## Router 11
En
Conf t


Int g0/0
Ip add 192.168.10.129 255.255.255.240
No shut
Exit 

Int s0/0/0
Ip add 192.168.10.182 255.255.255.252
No shut
Exit 


Router rip 
Version 2
No auto-sum
Net 192.168.10.180
Net 192.168.10.128
Passive-int g 0/0
Exit

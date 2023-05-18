import math

n = int(input())

yes = 0
l = 2
r = 2147483648

while r > l:
    mid = (l+r+1)//2

    if((mid-1)*mid*(mid+1) > n): r = mid-1
    else: l = mid

if l*(l-1)*(l+1) == n: print(str(l-1) + " " + str(l) + " " + str(l+1))
else: print(0)

n = int(input())

numpf = 0

i = 2
while(i <= n):
    while(n%i == 0):
        n = n/i
        numpf += 1
    if i == 2:
        i -= 1
    i += 2

if numpf == 2:print(1)
else: print(0)

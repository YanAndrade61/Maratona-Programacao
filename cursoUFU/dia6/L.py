def mdc(a,b):
    
    if(a < b):menor = a
    else: menor = b
    for i in range(menor,0,-1):
        if a % i == 0 and b % i == 0:
            return i
    
    return 0


fib = [1,2]
for i in range(2,41):
    fib.append(fib[i-1] + fib[i-2])

res = list()
p = 2

for i in range(2,41):
    p *= 2
    div = mdc(fib[i],p)
    res.append((int(fib[i]/div),int(p/div)))


print(res)

while True:

    try:
        n = int(input())
    except:
        break

    print(str(rec[n-2][0]) + "/" + str(rec[n-2][1]))

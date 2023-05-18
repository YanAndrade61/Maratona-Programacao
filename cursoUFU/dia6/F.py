n = int(input())

for _ in range(n):
    k,n = map(int,input().split())

    fib = [1]*k
    for i in range(k,n):
        som = 0
        for j in range(1, k+1):
            som = fib[i-j] + som
        fib.append(som)
    
    print(fib[n-1])

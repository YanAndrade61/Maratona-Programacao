def fatorial(n):
    fat = 1
    for i in range(2, n+1):
        fat *= i
    return fat

def fatorial2(n, p):
    fat = 1
    for i in range(p, n+1):
        fat *= i
    return fat

while True:
    try:
        n, p = map(int, input().split())
    except:
        break

    if p > n-p:
        fatn = fatorial2(n, p+1)
        fatp = fatorial(n-p)
    else:
        fatn = fatorial2(n, n-p+1)
        fatp = fatorial(p)

    print(fatn//fatp)

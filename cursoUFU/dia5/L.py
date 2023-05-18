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
        n, = map(int, input().split())
    except:
        break
    res = 0
    for i in range(1,n+1):
        res += pow(2,i)
    print(res)

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

n = input()

while True:
    try:
        n, p, c = map(int, input().split())
    except:
        break

    if p > n-p:
        fatn = fatorial2(n, p+1)
        fatp = fatorial(n-p)
    else:
        fatn = fatorial2(n, n-p+1)
        fatp = fatorial(p)
    
    comb = fatn//fatp
    if comb == c:
        print('Harry estah correto!')
    if comb > c:
        print('Existem mais combinacoes!')
    if comb < c:
        print('Existem menos combinacoes!')

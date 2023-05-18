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
 
n = int(input())
for i in range(n):
    nome = input().lower()
    #print(nome)
    mp = dict()
    for c in nome:
        try:
            mp[c] += 1
        except:
            mp[c] = 1
    div = 1
    for k,v in mp.items():
        div *= fatorial(v)


    print(fatorial(len(nome))//div)

import math

n = 13
a = int(math.sqrt(n))

while 1:
    
    try:
        n = int(input())
    except:
        break
    
    a = int(math.sqrt(n))
    while a > 1:
        ntemp = n - a
        if math.sqrt(ntemp) == int(math.sqrt(ntemp)):
            print(a,math.sqrt(ntemp))
            break
        a -= 1

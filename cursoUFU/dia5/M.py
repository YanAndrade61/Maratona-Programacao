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
 

nome = input().lower()
mpc = dict()
mpv = dict()

for c in nome:
	try:
	    if c in ['a','e','i','o','u']:
		    mpv[c] += 1
	    elif c != ' ':
		    mpc[c] += 1
	except:
	    if c in ['a','e','i','o','u']:
		    mpv[c] = 1
	    elif c != ' ':
		    mpc[c] = 1

divc = 1
for k,v in mpc.items():
    divc *= fatorial(v)
fatc = fatorial(len(mpc))//divc

divv = 1
for k,v in mpv.items():
    divv *= fatorial(v)
fatv = fatorial(len(mpv))//divv

print(fatc*fatv)

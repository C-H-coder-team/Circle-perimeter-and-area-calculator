n=int(input())
a=[]
m=[]
for i in range(n):
    ai=input()
    a.append(ai)
    mi=float(input())
    m.append(mi)
for i in range(n):
    if a[i]=="a":
        print(m[i]*2*3.14)
    if a[i]=="b":
        print(m[i]*3.14)
    if a[i]=="c":
        print(m[i]**2*3.14)
    if a[i]=="d":
        print((m[i]/2)**2*3.14)

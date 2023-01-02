a=int(input("Enter Number of rows:"))
b=(a-1)*2+1
print('(a)')
for i in range(a):
    s=''
    for j in range(b//2-i):
        s+=' '
    for j in range(b//2-i,b//2+i+1):
        s+='*'
    print(s)
print('(b)')
for i in range(a):
    s=''
    for j in range(i):
        s+=' '
    for j in range(i,b-i):
        s+='*'
    print(s)
print('(c)')
for i in range(a-1):
    s=''
    for j in range(b//2-i):
        s+=' '
    for j in range(b//2-i,b//2+i+1):
        s+='*'
    print(s)
for i in range(a):
    s=''
    for j in range(i):
        s+=' '
    for j in range(i,b-i):
        s+='*'
    print(s)
print('(d)')
c=a*2
for i in range (a):
    s=''
    for j in range(c//2-i):
        s+='*'
    for j in range(c//2-i,c//2+i):
        s+=' '
    for j in range(c//2+i,c):
        s+='*'
    print(s)
for i in range(1,a):
    s=''
    for j in range(i+1):
        s+='*'
    for j in range(i+1,c-i-1):
        s+=' '
    for j in range(c-i-1,c):
        s+='*'
    print(s)
print("(e)")
for i in range(a):
    s=''
    for j in range(i+1):
        s+='*'
    print(s)
print('(f)')
for i in range(a,0,-1):
    s=''
    for j in range(i):
        s+='*'
    print(s)
print("(g)")
for i in range(a):
    s=''
    for j in range(a-(i+1)):
        s+=' '
    for j in range(a-(i+1),a):
        s+='*'
    print(s)
print('(h)')
for i in range(a,0,-1):
    s=''
    for j in range(a-i):
        s+=' '
    for j in range(i):
        s+='*'
    print(s)
print('(i)')
c=2*a-1
s=''
for i in range(c//2):
    s+=' '
s+='*'
print(s)
for i in range(1,a):
    s=''
    for j in range(c//2-i):
        s+=' '
    s+='*'
    for j in range(c//2-i+1,c//2+i):
        s+=' '
    s+='*'
    print(s)
for i in range(a-1,1,-1):
    s=''
    for j in range(a-i):
        s+=' '
    s+='*'
    for j in range(a-i+1,a+i-2):
        s+=' '
    s+='*'
    print(s)
s=''
for i in range(c//2):
    s+=' '
s+='*'
for i in range(c//2):
    s+=' '
print(s)
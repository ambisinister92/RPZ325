a=input()
s=''
g=''
for i in range(len(a)):
    if a[i]!='0':
        s=s+a[i]
for i in range(len(s)-1,-1,-1):
    if s[i]!='0':
        g=g+s[i]
if g==s:
    print('YES')
else:
    print('NO')
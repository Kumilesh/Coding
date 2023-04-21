t=int(input())
for i in range(t):
    n=int(input())
    s=input()
    a=s.count('0')
    b=s.count('1')
    if(n%2!=0):
        print('NO')
    else:
    if (a==b):
        print(1,len(s))
    elif a>b:
        print(s.index('0')+1,s.index('0'))
    else:
        print(s.index('1')+1,s.index('1'))


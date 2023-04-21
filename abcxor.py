t=int(input())
for _ in range(t):
    n,x=input().split(" ")
    n=int(n)
    ans=((2**n)-1) * ((2**n)-2)
    print(ans)
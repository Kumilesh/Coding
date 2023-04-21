t=int(input())
for _ in range(t):
    n=int(input())
    li=list(map(int,input().split()))
    p=max(li)
    li.remove(p)
    q=max(li)
    print(p+q)
t=int(input())
for i in range(t):
    n=int(input())
    li=list(map(int,input().split()))
    print(li.index(min(li))+1,li.index(max(li))+1)
    
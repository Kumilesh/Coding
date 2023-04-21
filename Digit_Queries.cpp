n=int(input())
for i in range(n):
    li=list(map(int,input().split()))
    li.sort()
    sum,sub,mul,div=li
    print( sum,sub,mul,div)
    
n=int(input())
di={'A':10,'B':25,'C':20,'D':125,'E':75}
sum=0
incs=0
for i in range(n):
    a,b=input().split(",")
    if(a not in di):
        print("Invalid input")
        exit()
    b=int(b)
    sum+=(di[a]/100)*b*1000
    if(b>=2 and b<=5):
        incs+=(di[a]/100)*b*(1.01)*1000
    elif(b>=5 and b<=10):
        incs+=(di[a]/100)*b*(1.05)*1000
    elif(b>=10):
        incs+=(di[a]/100)*b*(1.10)*1000
    else:
        incs+=(di[a]/100)*b*1000
print((incs-sum))



   

t=int(input())
for _ in range(t):
    n=int(input())
    str=input()
    i=0 
    j=n-1
    ans=0
    while(i<=j):
        if(str[i]=='(' and str[j]==')'):
            i+=1
            j-=1
        else:
            if(str[i]==')'):
                ans+=1
                i+=1
            if(str[j]=='('):
                ans+=1
                j-=1
    print(ans)

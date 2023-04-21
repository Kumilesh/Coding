input1=10
#int i=1
for i in range(input1,0,-1):
    li=[]
    flag=1
    k=i
    while(True):
        if (k==1):
            break
        if(k%2!=0):
            k=3*k+1
            if k in li:
                flag=0
                #break
            li.append(k)
        else:
            k=int(k/2)
            if k in li:
                flag=0
                #break
            li.append(k)
        print(li)
    if(flag==1 and (input1 in li)):
        print(i)
        break

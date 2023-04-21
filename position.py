import math
n=int(input())
di={'a':"ab",'b':'cd','c':'cd','d':'ab'}
if(n==1 or n==2 or n==4):
    print('a')
elif(n==3 or n==5):
    print('b')
else:
    #print(math.log(n)//math.log(2))
    pre_seq=int(math.log(n+1)//math.log(2))
    bef_seq=pre_seq
    bef_seq_sum=math.pow(2,bef_seq)-1
    pre_seq_pos=int(n-bef_seq_sum)
    n=pre_seq_pos
    if n==0:
        n=math.pow(2,bef_seq-1)
    if(n==1):
        print('a')
    elif(n==2 ):  
        print('b')
    else:
        #print(n,bef_seq_sum)
        li=[]
        tr=[]

        while(n/2 != 1 and n/2>1 ):
            li.append(int(math.ceil(n/2)))
            if(n%2==0):
                tr.append(1)
            else:
                tr.append(0)
            n=int(math.ceil(n/2))
        #print(li,tr)
        p='a'
        if(li[-1]%2==0):
            p=di['a'][1]
        else:
            p=di['a'][0]
        for i in range(len(li)-1,-1,-1):
            p=di[p][tr[i]]
        print(p)








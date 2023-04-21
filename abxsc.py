def jungle(int)
input1=10
input2=11
input3=[4,1,3,7,6,8,5,2,10,9]
input2=input2%input1
#print(input2)
x=input2-1
if(input1==0):
    print( [])
id=input3[input2-1]
while(x>0):
    input3[x]=input3[x-1]
    x-=1
input3[0]=id
print(input3)

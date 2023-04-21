with open("C:/Users/kumilesh/Desktop/furniture.txt") as file:
    lines=file.readlines()
#print(lines)
d={}
furniture=[]
cost=[]
for line in lines:
    a,b=line.split(',')
    furniture.append(a)
    cost.append(float(b[1:-1]))
#print(furniture,cost)
tot_cost=0
count=0
sort_list=cost.copy()
sort_list.sort()
len=len(cost)
if(len%2==0):
    median=(sort_list[int(len/2)]+sort_list[int(len/2)-1])/2
for i in range(len):
    if(cost[i]>=median):
        print(furniture[i],cost[i])

    
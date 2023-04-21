n=input()
def binaryToDecimal(binary):
    binary1 = binary
    decimal, i, n = 0, 0, 0
    while(binary != 0):
        dec = binary % 10
        decimal = decimal + dec * pow(2, i)
        binary = binary//10
        i += 1
    #print(decimal,"12")
    return (decimal) 
if(len(n)%4==0):
    while(n!=""):
        a=n[:4]
        #print(a)
        p=binaryToDecimal(int(a))
        #print(p,end=" ")
        n=n[4:]
        if(p==12):
            print()
            print("-")
        elif(p==10):
            print()
            print("+")
        elif(p==14):
            print()
            print("*")
        elif(p==13):
            print()
            print("/")
        else:
            print(p,end="")
else:
    print("Invalid input")
    


def recursiveFactorial(num):
    if(num==0):
        return 1
    return num*recursiveFactorial(num-1);
def goodBye():
    print("Program is ended")
    print("Good Bye")
while(True):
    n=int(input())
    if(n==-1):
        goodBye()
        break 
    else:
        print("Factorial:",recursiveFactorial(n))
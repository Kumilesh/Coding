def getEncryptedNumber(numbers):
    if(len(numbers)==2):
        return ((numbers[0]*10+numbers[1]))
    else:
        li=[]
        for i in range(len(numbers)-1):
            li.append((numbers[i]+numbers[i+1])%10)
        getEncryptedNumber(li)

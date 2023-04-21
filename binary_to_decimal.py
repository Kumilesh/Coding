number=1101
number=str(number)
#Convert the length to 8 using Zfill
number=number.zfill(8)
#add all the 8 values added to respective powers of 2
def bin_to_decimal_without_using_loop(number):
    sum=int(number[0])*128+int(number[1])*64+int(number[2])*32+int(number[3])*16+int(number[4])*8+int(number[5])*4+int(number[6])*2+int(number[7])*1
    return sum
#loop through all the binary numbers and sum the result after multiplying with respective powers of 2.
def bin_to_decimal_using_loop(number):
    #declaring and initializing
    number=int(number)
    sum=0
    i=0
    #looping
    while(number!=0):
        rem=number%10
        number=number//10
        sum+=rem*(2**i)
        i+=1
    #returning
    return sum
#printing the respective outputs
print("Decimal : ",bin_to_decimal_using_loop(number))
print("Decimal : ",bin_to_decimal_without_using_loop(number))




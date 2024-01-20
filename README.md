# FIRST_CODE
this is my first code on github
small code for Addition in Python

a=input("Enter First Number: ")
b=input("Enter second Number: ")
result=a+b
print("Result :",result)

def mul(a,b):
    if a==1:
        return a;
    result=b+mul(a-1,b)

a=int(input("enter first number"))
b=int(input("enter second number"))

mul(a,b)

def add(a,b):
    return a+b
def sub(a,b):
    return a-b
def mul(a,b):
    return a*b
def div(a,b):
    return a/b
def mod(a,b):
    return a%b
def pow(a,b):
    return a**b
o=1
print("1)ADDITION.\n2)SUBTRACTION.\n3)MULTIPLICATION.\n4)DIVISION.\n5)MODULOUS.\n6)POWER.\n")
while o!=8008:
    print("CALCULTION : ")
    a, operation, b=input().split()
    a=int(a)
    b=int(b)
    if operation == "+":
       print("add : ",add(a,b))
    elif operation == "-":
      print(sub(a,b))
    elif operation == "*":
     print(mul(a,b))
    elif operation == "/":
      print(div(a,b))
    elif operation == "%":
     print(mod(a,b))
    elif operation == "^":
     print(pow(a,b)) 
    else:
     print(type(a),type(b))
    o=int(input("TO CONTINUE PRESS 0 TO END ENTER 8008"))
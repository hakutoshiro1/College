a, b = input("Enter two numbers:").split()
a = int(a)
b = int(b)
try:
    a = int(a)
    b = int(b)
    c=a/b
    print (c)
except NameError:
       pass
except TypeError:
    print("enter integer!!")
except :
    print("cant divite by zero!!")

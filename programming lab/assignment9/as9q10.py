a = 1
b = 0

try:
    print(a/b)
except:
    print("can't divide by zero")
else:
    print("division completed")
finally:
    print("Statement Executed")
a=5
b=7
print("Using temprory varible ")
temp=a
a=b
b=temp
print(a,b)
print("without using print varible ")
a=a^b
b=a^b
a=a^b
print(a,b)
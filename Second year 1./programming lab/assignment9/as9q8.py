#file handling
import os
f = open("demo.txt","x")
f = open("demo.txt", "w")
f.write("This is first line\n",)
f = open("demo.txt","a")
f.write("this is second line")
f = open("demo.txt","r")
print(f.read())
print(f.readline())
f = open("demo.txt","r")
for i in f:
    print(i)
f.close()
os.remove("demo.txt")
print("abc")

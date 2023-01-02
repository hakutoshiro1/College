xxa=input("Enter Class obtained by Student:")
b=int(input("Enter Number of subjects failed by student:"))
if a=='first' and b<=3:
    print("Grace Marks obtained:-",5*b)
elif a=='second' and b<=2:
    print("Grace Marks obtained:-",4*b)
elif a=='third' and b==1:
    print("Grace Marks obtained:-",5*b)
else:
    print("No Grace Marks.")
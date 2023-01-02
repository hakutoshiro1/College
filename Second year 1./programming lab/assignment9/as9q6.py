class sorting:
    a = []
    def __init__(self):
      for i in range(3):  
        c = (input("enter number "))
        self.a.append(c)
      sorted(self.a)

    def fun(self):
        print("largest number is ",self.a[2])
        print("second largest number is ",self.a[1])
        print("smallest number is ",self.a[0])




b = sorting()
b.fun()

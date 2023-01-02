class time:
    hr = 0
    mi = 0
    def __init__(self, hr, mi):
        self.hr = hr
        self.mi = mi
    
    def display(self):
        print("time is ",self.hr," hour and",self.mi," minutes")

    def display_min(self):
        print("minuts are ",self.hr*60+self.mi)

def add(a,b):
    c = time(0,0)
    c.hr = a.hr + b.hr
    c.mi = a.mi + b.mi
    return c.hr,c.mi

a = time(2,15)
b = time(3,42)

print("addition is ",add(a,b))
a.display()
a.display_min()
class temper:
    def __init__(self,tempe):
        self.temperature=tempe
    def convertfarhenheit(self):
        print(self.temperature*9/5+32)
    def convertcelsius(self):
        print((self.temperature-32)*5/9)
n=int(input("1.Convert celsius to fahrenheit"
+"2.convert fahrenheit to celsius"))
if n==1:
    temperature=temper(int(input("enter temperature in celsius:")))
    temperature.convertfarhenheit()
else :
    temperature=temper(int(input("enter temperature in fahrenheit:")))
    temperature.convertcelsius()
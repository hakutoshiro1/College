class Roman:
	def __init__(self,number) :
		self.numb=number
	def inttorom(self):
		# print("HELLo")
		num=[1,4,5,9,10,40,50,90,100,400,500,900,100]
		symbol=["I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"]
		i=12
		while self.numb:
			division=self.numb // num[i]
			self.numb%= num[i]
			while division:
				print(symbol[i],end="")
				division-=1
			i-=1
a=int(input("Enter number:"))
b=Roman(a)
b.inttorom()

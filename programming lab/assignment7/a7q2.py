amount=int(input("Enter Amount:"))
noOf100s=amount//100
amount=amount%100
noOf50s=amount//50
amount=amount%50
noOf10s=amount//10
amount=amount%10
print("Number of 100Rs notes:",noOf100s)
print("Number of 50Rs notes:",noOf50s)
print("Number of 10Rs notes:",noOf10s)
print("Amount that cannot be given:",amount)
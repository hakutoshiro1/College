class abc:
    def __init__(self):
        a = int (input("value of a is "))
        b = int (input("value of b is "))
        c = int (input("value of c is "))
        try:
            print (a/b-c)
        except:
            print("exception Occured")
abc()
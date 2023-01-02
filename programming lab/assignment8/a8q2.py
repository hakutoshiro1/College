dictionary=dict({1:"a",2: "b",3:"c",4:"d",5:"e"})
print("Printing Dictionary with keys and values ")
print(dictionary)
print(dictionary.get(6))
dictionary[6] = "f"
print(dictionary)
dictionary.pop(5)
print(dictionary)
new_dic = dictionary
print(new_dic)
print(len(dictionary))
dictionary= None
print(dictionary)
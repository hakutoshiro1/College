m1,n1=map(int,input("m1,n1=").split())
m2,n2=map(int,input("m2,n2=").split())
mat1=[]
mat2=[]
ans=[]
row=[]
if n1==m2:
    print("Enter Elements of Matrix 1:")
    for i in range (m1):
        for j in range(n1):
            row.append(int(input("Enter ["+str(i)+","+str(j)+"] term:")))
        mat1.append(row)
        row=[]
    print("Enter Elements of Matrix 2:")
    for i in range (m2):
        for j in range(n2):
            row.append(int(input("Enter ["+str(i)+","+str(j)+"] term:")))
        mat2.append(row)
        row=[]
    for i in range(m1):
        for j in range (n2):
            x=0
            for k in range (n1):
                x+=(mat1[i][k]*mat2[k][j])
            row.append(x)
        ans.append(row)
        row=[]
    print("ans:")
    for i in range(len(ans)):
        print(ans[i])
else:
    print("Error.")

from tkinter import *
info=Tk()
info.geometry('500x500')
Label(info,text="STUDENT REGISTRATION").place(x=170,y=10)
Label(info,text="Name:").place(x=10,y=40)
Label(info,text="Address:").place(x=10,y=70)
Label(info,text="Mobile Number:").place(x=10,y=100)
Label(info,text="Email id:").place(x=10,y=130)
Label(info,text="Gender:").place(x=10,y=160)
# def s(a):
#     print(a)
#     return a
# v=StringVar(info)
# values = {"1" : "Male",
#           "2" : "Female"}
# for (value,text) in values.items():
#     a=Radiobutton(info, text = text, variable = v,
#                 value = value, indicator = 2).place(x=100,y=130+int(value)*30)
# e1=Entry(info,width=250).place(x=100,y=40)
e1=Entry(info,width=250)
e1.place(x=100,y=40)
e2=Entry(info,width=250)
e2.place(x=100,y=70)
one=StringVar(info)
Radiobutton(info,text="Male",variable=one,value="1").place(x=100,y=160)
Radiobutton(info,text="Female",variable=one,value="2").place(x=100,y=190)
def name(): 
    global e1
    # print("hello")
    # label2=Label(info,text=f"name:{e2.get()}")
    # label=Label(info,text=e1.get())
    second=Tk()
    second.geometry("100x100")
    label=Label(second,text=e1.get())
    label.place(y=280)
    # label2.place(y=310)
    # labe=Label(info,text="male   " if one.get()=="1" else "female")
    # labe.place(y=330)
    second.mainloop()

a=Button(text="Submit",command=name).place(x=20,y=250)
info.mainloop() 
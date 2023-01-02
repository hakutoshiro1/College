from tkinter import *
root = Tk()
root.title("File Handling.")
def oc():
    t=Label(root,text="File Name:").grid(row=1,column=0)
    # e1=Text(root,width=15,height=5)
    e1=Entry(root)
    e1.grid(row=1,column=1,columnspan=2)
    def op():
        a=e1.get()
        # a=e1.get(1.0,"end-1c")
        try:
            f=open(a,'r')
            print(f.read())
        except FileNotFoundError:
            print("FileNOT")
    op_button=Button(root,text="Open",command=op)
    op_button.grid(column=1,row=2)
def ed():
    t=Label(root,text="File Name:").grid(row=1,column=0)
    e1=Entry(root)
    e2=Text(root,width=15,height=5)
    e1.grid(row=1,column=1,columnspan=2)
    def op():
        a=e1.get(1.0,"end-1c")
        f=open(a,'w')

open_button=Button(root,text="Open",command=oc)
open_button.grid(column=0,row=0)
edit_button=Button(root,text="Edit").grid(column=1,row=0,command=ed)
save_button=Button(root,text="Save").grid(column=2,row=0)
root.mainloop()
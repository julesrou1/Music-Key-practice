import tkinter as tk
import numpy as np
import random as rd

## Main menu

root = tk.Tk()

label = tk.Label(root, text="0.0.1")
label.pack()

canvas = tk.Canvas(root, height=700, width=800)
canvas.pack()

frame = tk.Frame(root, bg='#C2EAFF')
frame.place(relx=0.1,relwidth=0.8, relheight=1)

button = tk.Button(frame,  text="test", command=None )
button.pack()

menu1= tk.Menubutton(frame,activeforeground = '#FFC2C2',bg='white',text='Learn')
menu1.place(relx=0.1,rely=0.1,relwidth=0.2, relheight=0.1)

menu2= tk.Menubutton(frame,activeforeground = '#FFC2C2',bg='white',text='Practice')
menu2.place(relx=0.1,rely=0.2,relwidth=0.2, relheight=0.1)

menu2= tk.Menubutton(frame,activeforeground = '#FFC2C2',bg='white',text='Learn')
menu2.place(relx=0.1,rely=0.3,relwidth=0.2, relheight=0.1)


root.mainloop()

##Random 


##Harmonique


##Apprentissage


note=["C", "D", "E", "F", "G","A", "B"]
scale=["Major","Minor"]
mode=[]

def major():
    note=["C", "D", "E", "F", "G","A", "B"]
    scale=["Major","Minor"]
    mode=[]
    LF=[]
    L=note.copy()
    for i in range(len(L)):
        rd.randint(0,len(L)+1)
        LF.append(L[i])
        L.pop(i)
    return LF
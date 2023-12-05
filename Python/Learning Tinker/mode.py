from customtkinter import *
from tkinter import *

def on_button_click():
    print("Button clicked!")

def Close(): 
    CTk.destroy(app)



app=CTk()
app.geometry("500x400")

set_appearance_mode("dark")

but = CTkButton(master=app, text="Click Me", text_color="#000000"
                ,corner_radius=32, fg_color="#9EFF00", 
                hover_color="#FF9B00",command=on_button_click)

quitbut = CTkButton(master=app, text="quit", text_color="#000000"
                ,corner_radius=32, fg_color="#9EFF00", 
                hover_color="#FF9B00",command=Close)


but.place(relx=0.5, rely=0.5, anchor="center")
quitbut.pack(side=BOTTOM, padx=15, pady=20)

app.mainloop()
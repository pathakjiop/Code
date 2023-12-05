from customtkinter import *
import tkinter as tk

def on_button_click():
    print("Button clicked!")

app=CTk()
app.geometry("500x400")

set_appearance_mode("dark")

but = CTkButton(master=app, text="Click Me", text_color="#000000"
                ,corner_radius=32, fg_color="#9EFF00", 
                hover_color="#FF9B00",command=on_button_click)


but.place(relx=0.5, rely=0.5, anchor="center")

app.mainloop()
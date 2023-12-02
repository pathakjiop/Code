import tkinter as tk

def on_button_click():
    print("Button clicked!")

# Create the main window
root = tk.Tk()
root.title("Simple Tkinter Example")

# Create a button and pack it into the window
button = tk.Button(root, text="Click me and you will get a message in conslole", command=on_button_click)
button.pack(pady=20, padx=40)

# Run the Tkinter event loop
root.mainloop()

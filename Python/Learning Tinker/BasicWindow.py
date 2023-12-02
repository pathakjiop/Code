import tkinter as tk

class MyTinkerProject:
    def __init__(self, master):
        self.master = master
        master.title("My Tinker Project")

        self.label = tk.Label(master, text="Hello, Tkinter!")
        self.label.pack()

        self.quit_button = tk.Button(master, text="Quit", command=master.quit)
        self.quit_button.pack()

def main():
    root = tk.Tk()
    app = MyTinkerProject(root)
    root.mainloop()

if __name__ == "__main__":
    main()

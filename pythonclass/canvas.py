import tkinter as tk

def main():
    window = tk.Tk()
    window.title("Canvas Example")

    canvas = tk.Canvas(window, width=300, height=200)
    canvas.pack()

    canvas.create_oval(50, 50, 150, 150, fill='blue')  # Draw a circle with a diameter of 100 pixels

    window.mainloop()

    if __name__ == '__main__':
        main()

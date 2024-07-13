'''________________Write a python program to access environment variables________________'''

import os
import tkinter as tk
from tkinter import PhotoImage

# Function to display the PATH environment variable
def show_path():
    path = os.environ.get('PATH')
    path_label.config(text=f"PATH:\n{path}")
    root.after(3000, clear_path_label)  # Clear path_label after 3 seconds

# Function to clear the PATH label
def clear_path_label():
    path_label.config(text="PATH: ")

# Function to display the OS environment variable
def show_os():
    os_name = os.environ.get('OS', 'Not defined')
    os_label.config(text=f"OS:\n{os_name}")
    root.after(3000, clear_os_label)  # Clear os_label after 3 seconds

# Function to clear the OS label
def clear_os_label():
    os_label.config(text="OS: ")

# Create the main window
root = tk.Tk()
root.title("Environment Variables")

# Load and configure the background image
bg_image_path = "C:/Users/abourhai/Downloads/Embedded_Linux_Diploma/Python/background.png"
print(f"Attempting to load image from: {bg_image_path}")
bg_image = PhotoImage(file=bg_image_path)
bg_label = tk.Label(root, image=bg_image)
bg_label.place(relwidth=1, relheight=1)  # Cover the entire window

# Set window size and position
window_width = 500
window_height = 400
screen_width = root.winfo_screenwidth()
screen_height = root.winfo_screenheight()
x = (screen_width - window_width) // 2
y = (screen_height - window_height) // 2
root.geometry(f"{window_width}x{window_height}+{x}+{y}")

# Function to configure button styles
def configure_button(button):
    button.config(
        bg="red",          
        fg="white",        
        bd=2,              
        relief=tk.SOLID,   
        highlightbackground="red",
        highlightcolor="red",
        highlightthickness=2,
        padx=10,
        pady=5, 
        font=("Arial", 12)
    )

# Create and place the first button on the left side
path_button = tk.Button(root, text="Show PATH", command=show_path)
configure_button(path_button)
path_button.pack(side=tk.LEFT, padx=10, pady=10)

# Create and place the second button on the right side
os_button = tk.Button(root, text="Show OS", command=show_os)
configure_button(os_button)
os_button.pack(side=tk.RIGHT, padx=10, pady=10)

# Create and place the labels to display the results
path_label = tk.Label(root, text="PATH: ", justify="center", wraplength=280)
path_label.pack(side=tk.TOP, pady=30)

os_label = tk.Label(root, text="OS: ", justify="center", wraplength=280)
os_label.pack(side=tk.BOTTOM, pady=40)  # Place at the bottom of the window

# Run the GUI event loop
root.mainloop()

🌀 Spinning Rectangle – C++ & graphics.h
This simple graphics program creates a rectangle and continuously rotates (spins) it around its center. It is implemented in C++ using the graphics.h library.

📁 Files
main.cpp – The source code.
main.exe – Compiled executable (Windows only).

🧰 Requirements
To compile and run this program, you need:
C++ compiler (e.g., g++)
WinBGIm graphics library (graphics.h)
Windows OS (for .exe)

💻 How to Compile
If you have the WinBGIm library installed and configured:

g++ main.cpp -o main.exe -lbgi -lgdi32 -lcomdlg32 -luuid -loleaut32 -lole32
Make sure graphics.h and libbgi.a are properly linked in your compiler.

▶️ How to Run
After compiling:

./main.exe
Or just double-click on main.exe if you're on Windows.

🎮 What It Does
Opens a simple graphics window.
Draws a rectangle.
Rotates it smoothly around its center point.
This can be a great starting point for learning 2D graphics programming in C++.

📝 Notes
This program uses graphics.h, which is old but useful for beginner-level graphics.
Rotation is performed manually using basic trigonometry (sin and cos).

📸 Example Output
A rectangle rotating continuously around its center in a 2D window.

📦 License
This project is open source and free to use for educational purposes.

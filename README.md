# Library Management System

A comprehensive console-based application for managing a student library, developed in C. This project provides essential functionalities for handling student memberships and book transactions like issuing and returning books. It uses file handling to persistently store student and book data.

## Features

This system is organized into a clear, menu-driven interface with the following capabilities:

* **Membership Management:**
    * **Add New Members:** Register new students into the library system with details like name, address, class, etc.
    * **Delete Members:** Remove student records from the system.
    * **Modify Member Details:** Update the information of existing members.

* **Book Management:**
    * **Add New Books:** Add new books to the library's collection with details like book number, name, author, and publisher.
    * **Issue Books:** Manage the process of issuing books to registered members.
    * **Return Books:** Handle the return of books from members.

* **Reporting & Viewing:**
    * **List of Books:** View detailed lists of library books.
    * **Total Books:** Display the total count of books in the library.
    * **Issued Books:** Show a list of all books that are currently issued.
    * **Books in Stock:** Display a list of all available books.

## 🛠️ Technology Stack

* **Programming Language:** C++
* **Key Libraries:**
    * `iostream`, `stdio.h`, `stdlib.h`: For standard input/output operations.
    * `fstream`: For file handling to store and retrieve data from `.dat` files.
    * `string.h`: For string manipulation.
    * `conio.h`: For console user interface functions like `clrscr()` and `getch()`.
    * `graphics.h`: For creating a basic graphical window and user interface in the console.

## How to Run the Project

This project was developed using Turbo C++ or a similar environment that supports the BGI (Borland Graphics Interface) library (`graphics.h`).

### Prerequisites

* A C++ compiler that supports `graphics.h`, such as **Turbo C++**.
* The BGI graphics drivers (`.BGI` files) and fonts (`.CHR` files) should be in the correct path.

### Compilation and Execution Steps

1.  **Open the Source Code:**
    * Open your C++ IDE (e.g., Turbo C++).
    * Open the source file.

2.  **Set the Graphics Driver Path:**
    * In the IDE, you may need to configure the path to the BGI folder. This is often in the `Options > Linker` or a similar menu.

3.  **Compile the Code:**
    * Compile the source file (usually by pressing `Alt + F9`).

4.  **Run the Executable:**
    * Run the program (usually by pressing `Ctrl + F9`).
    * The "Student Library System" menu will appear, and you can navigate the application using the number keys.

---
_This project was created by Lakshita Setia (22BIT0695) for the BCSE102L - Structured and Object Oriented Programming course._

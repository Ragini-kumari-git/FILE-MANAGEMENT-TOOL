# FILE-MANAGEMENT-TOOL

*COMPANY* : CODTECH IT SOLUTIONS

*NAME* : RAGINI KUMARI

*INTERN ID* : CT04DN1698

*DOMAIN NMAE* :  C++ PROGRAMMING

*DURATION* : 4 WEEKS

*MENTOR* : Neela Santhosh Kumar 

## DESCRIPTION ##

File Management Tool – A C++ File Handling Project
Introduction
This File Management Tool is a console-based project written in C++ that demonstrates essential file handling operations such as creating, writing, appending, and reading text files. File manipulation is a fundamental programming skill widely used in system utilities, configuration files, data storage, and text-based applications. The purpose of this project is to give beginners a clear and hands-on understanding of how file I/O works in C++ using standard libraries.

The code is written in a modular format with each task encapsulated in its own function, promoting readability and reusability. This tool has been developed and executed using Visual Studio Code (VS Code) along with the g++ compiler (MinGW) on the Windows operating system.

Core Functionalities
The tool performs a series of operations on a file named demo_file.txt. Each operation is implemented as a separate function for better clarity and maintenance.

Create and Write to a File

The createAndWriteFile() function creates a new file or overwrites an existing one.

It writes two lines of sample text to simulate initializing a new file, which is useful for generating logs, reports, or configuration data.

Read File Content

The readFile() function opens and reads the file content line by line, displaying it on the console.

This mimics the functionality of basic file readers or terminal-based file viewing tools.

Append Data to File

The appendToFile() function opens the file in append mode and adds an additional line to the existing content.

This operation is widely used in logging systems and applications where new data needs to be recorded without removing the existing content.

Read File with Line Numbers

The readLinesWithLineNumber() function reads each line from the file and displays it along with its corresponding line number.

This is especially useful in debugging tools, code editors, and log analyzers, where line numbers improve traceability.

Real-World Applications
While this tool is simple in design, its functionality is foundational to many real-world systems. Potential applications include:

Writing log files for software execution tracking.

Managing configuration files for applications.

Building a backend for basic text editors.

Saving user input or session data.

Handling and displaying structured data in small-scale applications.

It also serves as a starting point for more advanced file-based systems such as mini-databases, command-line utilities, or code parsers.

Development Environment
Programming Language: C++

Editor: Visual Studio Code

Compiler: g++ (MinGW)

Target Platform: Windows (adaptable to Linux/macOS with minimal changes)

File Used: demo_file.txt

How to Compile and Run
Save the source code as file_handling_showcase.cpp.

Open a terminal in the project directory.

Compile the file using the following command:

Copy
Edit
g++ file_handling_showcase.cpp -o file_tool
Run the compiled executable:

bash
Copy
Edit
./file_tool
The program will display the file operations in sequence and generate or modify the demo_file.txt accordingly.

Educational Value
This project is an excellent exercise for learning about:

File streams (ifstream, ofstream)

File opening modes (ios::out, ios::app)

Error handling during file access

Reading and writing text line by line

Structuring code using modular functions

Students and beginners can use this tool to build confidence in handling files using C++, and it provides a foundation for creating more complex systems such as parsers, editors, or data processors.

Conclusion
The File Management Tool demonstrates practical file handling techniques in C++. By breaking down operations like writing, appending, and reading with line numbers, the project serves as a valuable learning tool and a base for building more complex text-based applications. The code is easy to understand and extend, making it ideal for academic use, small projects, or learning purposes.

Future enhancements could include:

A menu-driven interface

Support for deleting or renaming files

Searching for specific words or lines

Working with binary files

This project highlights the significance of file input in application development and strengthens fundamental programming skills.




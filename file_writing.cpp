// Author: Zuhayer Tashin
// Course: CSCI-135
// Instructor: Tong Yi
// Assignment: HW E8.1
// Write a program that carries out the following tasks:
// Open a file with the name hello.txt.
// Store the message “Hello, World!” in the file.
// Close the file.
// Open the same file again.
// Read the message into a string variable and print i

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
#include <string>
using namespace std;

int main(){  

    ofstream output_file; // Output file
    output_file.open("hello.txt"); // open the file

    string message; // message
    message = "Hello, World!"; // message is set to "Hello, World!"

    output_file << message; // store the message "Hello, World!" in the  output file

    output_file.close(); // close the file


    string line; // line 

    ifstream file("hello.txt"); // open the file

    if (file.fail()) { // if file not found
        cout << "ERROR: FILE NOT FOUND!" << endl;
        exit(1); // exits
    }
    
    while (getline(file, line)) { // while reading each line

        file.ignore(INT_MAX, '\n'); // ignore the rest of the line

        cout << line; // print the line "Hello, World!"

            
    }

    file.close(); // close the file

}
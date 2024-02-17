// Author: Zuhayer Tashin
// Course: CSCI-135
// Instructor: Tong Yi
// Assignment: Project 1B
// Enter the number of questions to answer. Ensure that the input is a positive integer. Continue
// prompting users with “The number of questions cannot be zero or negative. Re-enter: ” and accept
// input from users until a positive integer is provided

#include <iostream> 
#include <cstdlib> 
#include <time.h>
#include <string>
using namespace std;

int main(){ 

     srand(time(NULL));  

     char symbol[]= {'+', '-', '*', '/', '%'}; // Creates a array of symbols
     char picked_symbol = symbol[rand()%5];

     int prob_lem ,num_of_questions; // Number of questions to ask and number of problems to solve

     double grades, correct; // Number of correct answers, and wrong answers and the grades
     correct = 0; // set the correct to 0

     cout << "Enter the total number of questions to ask: ";
     cin >> num_of_questions;

     while(num_of_questions <= 0 || num_of_questions == 0){
      cout << "The number of questions cannot be zero or negative. Re-enter: ";
      cin >> num_of_questions;
     }

     cout << endl;

   for(int i = 1; i <= num_of_questions; i++){
     if (picked_symbol == '+'){
      int v1 = rand() % 10 ; //v1 in the range 1 to 9
      int v2 = rand() % 10;  // v2 in the range 0 to 9

      cout <<"(" << i << ") " << "what is " << v1 << " " <<  picked_symbol << " " << v2 << "? "; // prints out the user prompt for the question and the random symbol
      cin >> prob_lem; // User input for the answer
      v1 = v1;
      v2 = v2;
      int math = v1 + v2; // returns the correct answer
      
     if (prob_lem != math) {

        cout << "False" << endl; // if answer is wrong returns False


     } else if (prob_lem == math) {
        cout << "True" << endl; // if the answer is right returns True
        correct++; // adds the correct answer
     }

     cout << endl;

     } else if (picked_symbol == '-'){
      int v1 = rand() % 10 ; //v1 in the range 1 to 9
      int v2 = rand() % 10;  // v2 in the range 0 to 9

      cout << "(" << i << ") " << "what is " << v1 << " " <<  picked_symbol << " " << v2 << "? "; // prints out the user prompt for the question and the random symbol
      cin >> prob_lem; // User input for the answer
      v1 = v1;
      v2 = v2;
      int math = v1 - v2; // returns the correct answer
      
     if (prob_lem != math) {

        cout << "False" << endl; // if answer is wrong returns False


     } else if (prob_lem == math) {
        cout << "True" << endl; // if the answer is right returns True
        correct++; // adds the correct answer
     }

     cout << endl;

     } else if (picked_symbol == '/'){
      int v1 = rand() % 10 ; //v1 in the range 1 to 9
      int v2 = (rand() % 7) + 1;  // v2 in the range 0 to 9

      cout << "(" << i << ") " << "what is " << v1 << " " <<  picked_symbol << " " << v2 << "? "; // prints out the user prompt for the question and the random symbol
      cin >> prob_lem; // User input for the answer
      v1 = v1;
      v2 = v2;
      int math = v1 / v2; // returns the correct answer
      
      if (prob_lem != math) {

        cout << "False" << endl; // if answer is wrong returns False


     } else if (prob_lem == math) {
        cout << "True" << endl; // if the answer is right returns True
        correct++; // adds the correct answer
     }

     cout << endl;

     } else if (picked_symbol == '*'){
       int v1 = rand() % 10 ; //v1 in the range 1 to 9
       int v2 = rand() % 10;  // v2 in the range 0 to 9

      cout << "(" << i << ") " << "what is " << v1 << " " <<  picked_symbol << " " << v2 << "? "; // prints out the user prompt for the question and the random symbol
      cin >> prob_lem; // User input for the answer
      v1 = v1;
      v2 = v2;
      int math = v1 * v2; // returns the correct answer
      
      if (prob_lem != math) {

        cout << "False" << endl; // if answer is wrong returns False


     } else if (prob_lem == math) {
        cout << "True" << endl; // if the answer is right returns True
        correct++; // adds the correct answer
     }
     cout << endl;    

     }else if (picked_symbol == '%'){
        int v1 = rand() % 10 ; //v1 in the range 1 to 9
        int v2 = (rand() % 10) + 1;  // v2 in the range 0 to 9


      cout << "(" << i << ") " << "what is " << v1 << " " <<  picked_symbol << " " << v2 << "? "; // prints out the user prompt for the question and the random symbol
      cin >> prob_lem; // User input for the answer
      v1 = v1;
      v2 = v2;
      int math = v1 % v2; // returns the correct answer
      
      if (prob_lem != math) {

        cout << "False" << endl; // if answer is wrong returns False

     } else if (prob_lem == math) {
        cout << "True" << endl; // if the answer is right returns True
        correct++; // adds the correct answer
     }
     cout << endl;

     }

   }

   grades = 100 * (correct/num_of_questions); // calculate the grades based on how many questions were correctly inputted by the user
   

   if (grades >= 90){ // if the grade was 90 or higher

      char letter = 'A'; // sets the character to A
      cout << "percentage correct: "<< grades << "%" << endl; // prints the grade
      cout << "letter grade: " << letter << endl; // prints out letter grade: A

   } else if (grades >= 80 && grades < 90){ // if the grade was 80 or higher and less than 90

      char letter = 'B'; // sets the character to B
      cout << "percentage correct: "<< grades << "%" << endl; // prints the grade
      cout << "letter grade: "<< letter << endl; // prints out letter grade: B

   } else if (grades >= 70 && grades < 80){ // if the grade was 70 or higher and less than 80
      
      char letter = 'C'; // sets the character to C
      cout << "percentage correct: "<< grades << "%" << endl; // prints the grade
      cout << "letter grade: "<< letter << endl; // prints out letter grade: C

   } else if (grades >= 60 && grades < 70){ // if the grade was 60 or higher and less than 70
      
      char letter = 'D'; // sets the character to D
      cout << "percentage correct: "<< grades << "%" << endl; // prints the grade
      cout << "letter grade: "<< letter << endl; // prints out letter grade: D

   } else if (grades < 60){ // Otherwise

      char letter = 'F'; // sets the character to F
      cout << "percentage correct: "<< grades << "%" << endl; // prints the grade
      cout << "letter grade: "<< letter << endl; // prints out letter grade: F

   }
     
   return 0; 
     
 }

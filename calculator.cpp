// Abhishek Gaba
// HW 5

#include <iostream>

using namespace std;

// Function Declarations

int Addition(int A, int B);
int Subtraction(int A, int B);
int Multiplication(int A, int B);
int Division(int A, int B);
int Remainder(int A, int B);
//int F(int A, int B);

 int main()
{
   
   int A;
   int B;
   char operation;

   cout << "You are in calculator mode, if you want to quit the program please enter a -7 for A and B" << endl;
   cout << "What operation would you like to complete. Choose from A, S, M, D, R, or F " << endl;
   cin >> operation;

    switch (operation) {
      case 'A':
         cout << "You chose Addition. Please enter the integers A and B" << endl;
         break;
      case 'S':
         cout << "You chose Subtraction. Please enter the integers A and B" << endl;
         break;
      case 'M':
         cout << "You chose Multiplication. Please enter the integers A and B" << endl;
         break;
      case 'D':
         cout << "You chose Division. Please enter the integers A and B" << endl;
         break;
      case 'R':
         cout << "You chose the Remainder Operation. Please enter the integers A and B" << endl;
         break;
      case 'F':
         cout << "You chose the Fibonnaci Numbers Operation. Please enter the integers A and B. A should always be 1" << endl;
         break;
      default:
         cout << "Why would you do that, now you just ruined the entire program. Why cant you just work with me sometimes?" << endl;
   }



   while ((A != -7)&&(B != -7)) {
      cout << "A: ";
      cin>> A;
      cout << "B: ";
      cin >> B;

   if (( operation == 'A')&&( A != -7)&&( B != -7))
      cout << Addition(A, B) << endl;

   if (( operation == 'S')&&( A != -7)&&( B != -7))
      cout << Subtraction(A,B) << endl;

   if (( operation =='M')&&( A != -7)&&( B != -7))
      cout << Multiplication(A,B) << endl;

   if (( operation == 'D')&&( A!= -7)&&(B != -7))
      cout << static_cast<double>(A)/B << endl;

   if (( operation == 'R')&&( A!= -7)&&( B != -7))
      cout << Remainder(A,B) << endl;

   if ( operation == 'F')
      cout <<  << endl;



}





   return 0;
}

// Function Definitions
int Addition(int A, int B)
{ return (A+B);}

int Subtraction(int A, int B)
{ return (A-B);}

int Multiplication(int A, int B)
{ return (A*B);}

int Division(int A, int B)
{  int result = static_cast<double>(A)/B;
   return (result);}
int Remainder(int A, int B)
{ return (A%B);}

int F(int A, int B)


#include <iostream>
using namespace std;

int add( int A, int B);
int subtract( int A, int B);
int multiply( int A, int B);
double divide( int A, int B);
int remainder( int A, int B);
int fibonacci(int B);



int main()
{
char operation;
int A;
int B;


   cout << "[CALC]" << "You are in calculator mode. If you want to exit, insert any integer # any integer." << endl;
   cout << "[CALC]" << "Otherwise, enter the integer A followed by the operators followed by integer B" << endl;
   cout << "[CALC]" << "The operators are +, -, *, /, %, or F" << endl;
   cout << "[CALC]" << "Enter the computations : " << endl;
   cout << "[CALC] ";
   cin >> A >> operation >> B;

   while ( operation != '#')
   {
      if ( operation == '+')
         cout << "[CALC]" << add(A,B) << endl;
      else if ( operation == '-')
         cout << "[CALC]" << subtract(A,B) << endl;
      else if ( operation == '*')
         cout << "[CALC]" << multiply(A,B) << endl;
      else if (( operation == '/')&&( B != 0))
         cout << "[CALC]" << divide(A,B) << endl;
      else if (( operation == '/')&&( B == 0))
         cout << "Sorry, you cant divide by 0" << endl;
      else if ( operation == '%')
         cout << "[CALC]" << remainder(A,B) << endl;

      else if (( operation == 'F'))
         {
            if (( A!= 1)||( B > 30)||( B < 1))
            cout << "Sorry, A needs to be 1 and B needs to be between 1 and 30 " << endl;
         else
            cout << "[CALC]" << fibonacci(B) << endl; }

      else
         cout << "invalid input" << endl;

      cout << "[CALC] ";
      cin >> A >> operation >> B;
}

   switch ( operation ) {
      case '#':
         cout << "Calculator mode exited" << endl;
         cout << "Have a Good Day" << endl;
         break;


   }



















   return 0;
}

int add( int A, int B)
   {return A+B;}

int subtract( int A, int B)
   {return A-B;}

int multiply( int A, int B)
   {return A*B;}

double divide( int A, int B)
   {return static_cast<double>(A)/B;}

int remainder( int A, int B)
   {return A%B;}

int fibonacci(int B)
   {
      int i;
      int a = 1;
      int b = 1;
      int c;
      if ( B <= 2 )
         c = 1;
      else
         for ( i = 2; i < B; i++)
         {
            c = a+b;
            a =b;
            b =c;
         }



         return c;



   }

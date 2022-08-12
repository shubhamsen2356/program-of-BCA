#include <iostream>
using namespace std;
int stack[100], n = 100, top = -1;



void push(int val)
{
   if (top >= n - 1)
      cout << "Stack Overflow" << endl;
   else
   {
      top++;
      stack[top] = val;
   }
}



void pop()
{
   if (top <= -1)
      cout << "Stack Underflow" << endl;
   else
   {
      cout << "The popped element is " << stack[top] << endl;
      top--;
   }
}


int main()
{
   int ch, val;
   cout << "1) Push in stack" << endl;
   cout << "2) Pop from stack" << endl;
   cout << "3) Exit" << endl;
   do
   {
      cout << "Enter choice: " << endl;
      cin >> ch;
      switch (ch)
      {
      case 1:
      {
         cout << "Enter value to be pushed:" << endl;
         cin >> val;
         push(val);
         break;
      }
      case 2:
      {
         pop();
         break;
      }
      case 3:
      {
         cout << "Exit" << endl;
         break;
      }
      default:
      {
         cout << "Invalid Choice" << endl;
      }
      }
   } while (ch != 3);
   return 0;
}
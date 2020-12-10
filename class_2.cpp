/*Write a program and input two integers in main and pass them to default constructor
of the class. Show the result of the additon of two numbers.
*/
#include<iostream>
using namespace std;

class MyClass2 {
  private:
   int num1;
   int num2;
  public:
    MyClass2 (int a, int b) {
      num1 = a;
      num2 = b;

    }
    int sum_integers (){
        int sum = num1 + num2;
        cout<<"the sum of "<<num1<<" and "<<num2<<" is: "<<sum<<endl;
    }
};

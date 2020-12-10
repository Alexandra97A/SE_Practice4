/*Write a program and input two integers in main and pass them to default constructor
of the class. Show the result of the additon of two numbers.
*/
#include<iostream>
using namespace std;

class MyClass2 {
  private:
    int var1;
    int var2;

  public:
    MyClass2 (int a, int b) {
        int sum = a + b;
        cout<<"the sum of "<<a<<" and "<<b<<" is: "<<sum<<endl;
    }
};

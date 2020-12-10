/*Perform addition operation on complex data using class and object. The program
should ask for real and imaginary part of two complex numbers, and display the real
and imaginary parts of their sum.
*/

#include<iostream>

using namespace std;

class MyClass3 {
  private:
    double real;
    double imaginary;

  public:
    MyClass3 (double a, double b){
        real = a;
        imaginary = b;
    }
    MyClass3 () {
        cout<<"Welcome to the complex place!"<<endl;
    }

    double sum(MyClass3 n1, MyClass3 n2) {
        double sum_real = n1.real + n2.real;
        double sum_imaginary = n1.imaginary + n2.imaginary;

        cout<<"The sum of the two complex numbers is: "<<sum_real<<" + i*"<<sum_imaginary<<endl;
    }
};

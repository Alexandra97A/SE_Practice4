#include <iostream>
#include<class_1.cpp>
#include<class_2.cpp>
#include<class_3.cpp>

using namespace std;
double MyClass1 :: area_rectangle(double a, double b) {
    return a*b;
}

int main()
{
    cout << "Hello World!" << endl;
    int n1, n2;
    double re1, im1;
    double re2, im2;

    MyClass1 myclass1;
    myclass1.area_rectangle(1, 5);

    cout<<"Please insert the two numbers...."<<endl;
    cin>>n1>>n2;

    MyClass2 myclass2(n1, n2);
    myclass2.sum_integers();

    cout<<"------------------Complex------------------"<<endl;
    cout<<"Please insert the real part of the first number: ";
    cin>>re1;
    cout<<endl<<"Please insert the imaginary part of the first number: ";
    cin>>im1;

    cout<<endl<<"Please insert the real part of the second number: ";
    cin>>re2;
    cout<<endl<<"Please insert the imaginary part of the second number: ";
    cin>>im2;

    cout<<"The first complex number: "<<re1<<" + i*"<<im1<<endl;
    cout<<"The second complex number: "<<re2<<" + i*"<<im2<<endl;

    MyClass3 complex1(re1, im1);
    MyClass3 complex2(re2, im2);
    MyClass3 complex3;
    complex3.sum(complex1, complex2);
    return 0;
}

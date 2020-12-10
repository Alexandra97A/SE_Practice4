#include <iostream>
#include<class_1.cpp>
#include<class_2.cpp>

using namespace std;
double MyClass1 :: area_rectangle(double a, double b) {
    return a*b;
}

int main()
{
    cout << "Hello World!" << endl;
    int n1, n2;

    MyClass1 myclass1;
    myclass1.area_rectangle(1, 5);

    cout<<"Please insert the two numbers...."<<endl;
    cin>>n1>>n2;

    MyClass2 myclass2(n1, n2);
    myclass2.sum_integers();

    return 0;
}

#include <iostream>
#include<class_1.cpp>
#include<class_2.cpp>

using namespace std;
double MyClass1 :: area_rectangle(double a, double b) {
    return a*b;
}

//MyClass2 :: MyClass2 (int a, int b) {
//     int sum = a + b;
//     cout<<"the sum of "<<a<<" and "<<b<<" is: "<<sum<<endl;
//}
int main()
{
    cout << "Hello World!" << endl;
    MyClass1 myclass1;
    myclass1.area_rectangle(1, 5);

    MyClass2 myclass2;
    myclass2.
    return 0;
}

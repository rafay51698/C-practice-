#include <iostream>
using namespace std;
class shape
{
public:
    double a, b;
    void get_data()
    {
        cin >> a;
        cin>>b;
    }
    virtual void display_area(){
        
    }
};
class triangle : public shape
{
public:
    void display_area()
    {
        cout << "The Area of Triangle is :  " << 0.5 * a * b << endl;
    }
};
class rectangle : public shape
{
public:
    void display_area()
    {
        cout << "The Area of Rectangle is:  " << a * b << endl;
    }
};
int main()
{
    triangle objT;
    rectangle objR;
    shape *ptrT = &objT;
    cout << "Enter base and altitude of TRIANGLE one by one : ";
    ptrT->get_data();
    ptrT->display_area();
    shape *ptrR = &objR;
    cout << "Enter length and breadth of RECTANGLE one by one: ";
    ptrR->get_data();
    ptrR->display_area();
    return 0;
}
=========OUTPUT==========
Enter base and altitude of TRIANGLE one by one : 5
5
The Area of Triangle is :  12.5
Enter length and breadth of RECTANGLE one by one: 5
5
The Area of Rectangle is:  25
lab10.txt
Displaying lab10.txt.
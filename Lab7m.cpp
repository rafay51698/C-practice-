#include <string.h>
#include <iostream>
using namespace std;

class Hospital
{
    string p_name, adm_date, disease, dis_date;

public:
    void getData()
    {
        cout << "Enter the name" << endl;
        getline(cin, p_name);
        cout << "Enter the date of admission" << endl;
        getline(cin, adm_date);
        cout << "Enter the disease" << endl;
        getline(cin, disease);
        cout << "Enter the date of discharge" << endl;
        getline(cin, dis_date);
    }

    void display()
    {
        cout << "Patient Name: " << p_name << endl;
        cout << "Date of Admission: " << p_name << endl;
        cout << "Disease: " << p_name << endl;
        cout << "Date of Discharge: " << p_name << endl;
    }
};

class AgeofPat : public Hospital
{
    int age;

public:
    void getData()
    { Hospital::getData();
        cout << "Enter the age" <<endl;
        cin>>age;
    }
    void display(){
        Hospital::display();
        cout<<"Age : " << age;
    }
};

int main()
{
    Hospital obj;
    obj.getData();
    AgeofPat obj1;
    obj1.display();
    
    return 0;
}
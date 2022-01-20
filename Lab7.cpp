#include <string.h>
#include <iostream>
using namespace std;

class Hospital
{
protected:
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
        cout << "Date of Admission: " << adm_date << endl;
        cout << "Disease: " << disease << endl;
        cout << "Date of Discharge: " << dis_date << endl;
    }
};

class AgeofPat : public Hospital
{
protected:
    int age;

public:
    void getAge()
    {
        cout << "Enter the age" << endl;
        cin >> age;
    }
    void displayAge()
    {
        cout << "The age is  " << age << endl;
    }
    void display()
    {
        Hospital::display();
        displayAge();
    }
};

int main()
{
    AgeofPat obj;
    obj.display();
    
    return 0;
}


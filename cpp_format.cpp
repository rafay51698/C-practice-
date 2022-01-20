#include <iostream>
using namespace std;
#include<math.h>
// class Patient_Details {
//     private:
//         char name[30];
//         string gender ;
//         int age,room_no,contact_no;
//     public:
//         void get_details(){
//             cout<<"Enter your name plz:"<<endl;
//             // cin>>name;
//             cin.getline(name,30);
//             cout<<"Enter your age:"<<endl;
//             cin>>age;
//             cout<<"Enter your gender:"<<endl;
//             cin>>gender;
//             cout<<"Enter your contact no:"<<endl;
//             cin>>contact_no;
//         }
//         void show_details(){
//             cout<<"Name : "<<name<<endl;
//             cout<<"Age : "<<age<<endl;
//             cout<<"Gender : "<<gender<<endl;
//             cout<<"Contact Number : "<<contact_no<<endl;
//         }
// };

class Sideworkers_Details
{
private:
    char name[30], shift_timings[15];
    int contact_no, opt;

public:
    char designation[20];
    void get_details()
    {
        cout << "Enter your Name:" << endl;
        // gets(name);
        cin.getline(name, 30);
        cout << "Enter your Designation:" << endl;
        // gets(designation);
        cin.getline(designation, 20);

        cout << "Enter your Shift timings:" << endl;
        // gets(shift_timings);
        cin.getline(shift_timings, 15);

        cout << "Enter your Contact Number:" << endl;
        cin >> contact_no;
    }

    void edit_details()
    {
        cout << "What do u want to edit ??" << endl;
        cout << "1. Name \n 2.Designation \n 3.Contact Number \n 4.Shift timings";
        cin >> opt;
        if (opt == 1)
        {
            cout << "Enter your Name:" << endl;
            gets(name);
        }
        else if (opt == 2)
        {
            cout << "Enter your Designation:" << endl;
            gets(designation);
        }
        else if (opt == 3)
        {
            cout << "Enter your Contact Number:" << endl;
            cin >> contact_no;
        }
        else if (opt == 4)
        {
            cout << "Enter your Shift timings:" << endl;
            gets(shift_timings);
        }
    }
    void show_details()
    {
        cout << "\n\nName :" << name << endl;
        cout << "Designation :" << designation << endl;
        cout << "Salary :" << calculate_salary(designation) << endl;
        cout << "Shift timings :" << shift_timings << endl;
        cout << "Contact Number:" << contact_no << endl;
    }

    int calculate_salary(char des[20])
    {
        int salary;
        // cout<<des;
        if (string(des) == "NURSE"){
            salary=15000;
        }
        else if (string(des) == "SWEEPER")
            salary = 8000;
        else if (string(des) == "GUARD")
            salary = 10000;
        return salary;
    }
};

int main()
{
    Sideworkers_Details worker1;
    worker1.get_details();
    worker1.show_details();
    worker1.calculate_salary();
    worker1.edit_details();
    return 0;
}

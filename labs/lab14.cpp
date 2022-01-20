#include <iostream>
#include <vector>
#include <iomanip>
#include <conio.h>
using namespace std;
class Student
{
public:
    string id;
    string name;
    string type;
    virtual void gotoNextClass() = 0;
};
class regular : public Student{
public:
    int semester;
    regular()
    {
        semester = 1;
        type = "REGULAR";
        cout << "Enter Student ID : ";
        cin >> id;
        cin.ignore();
        cout << "Enter Student Name : ";
        getline(cin,name);
    }
    void gotoNextClass();
};
class graduate : public Student{
public:
    graduate(regular obj)
    {
        id = obj.id;
        name = obj.name;
        type = "GRADUATED";
    }

    void gotoNextClass()
    {
        cout << "Student is Already Graduated !" << endl;
    }
};
vector<regular> regStd;
vector<graduate> gradStd;
void regular::gotoNextClass(){
    if (semester >= 8)
    {
        type = "GRADUATED";
        graduate grad(*this);
        gradStd.push_back(grad);
    }
    else
    {
        semester++;
    }
}
int main(){
    char opt;
    system("cls");
    cout << "\t\t REGULAR STUDENTS" << endl;
    cout << "\t\t================== " << endl;
    cout << "\n\nEnter Details Of Student " << endl;
    regular temp;
    regStd.push_back(temp);
    while (true)
    {
        system("cls");

        cout << "\t\tREGULAR STUDENTS" << endl;
        cout << "\t\t================" << endl;
        for (int i = 0; i < regStd.size(); i++)
        {
            if (regStd[i].type == "GRADUATED")
            {
                continue;
            }
            else{            
                if (regStd[i].semester == 8)
                {
                    cout << "The student detail will be assigned in the graduated list on the next turn !!" << endl;
                }
                cout << "\nS.NO: 1"
                     << "\nName: " << regStd[i].name << "\nID: " << regStd[i].id << "\nType: " << regStd[i].type << "\nSemester: " << regStd[i].semester << endl;
            }
        }
        cout << "\n\n1. Promote the student to the next semester \n"
             << "2. Show Graduated Students \n"
             << endl;
        cout << "\n\nSelect the number to perform operation" << endl;
        opt = getch();
        if (opt == '1')
        {
            regStd[0].gotoNextClass();
        }
        else if (opt == '2')
        {
            system("cls");

            cout << "\t\tGRADUATED STUDENTS\n " << endl;
            cout << "\t\t==================" << endl;

            for (int i = 0; i < gradStd.size(); i++)
            {
                cout << "\n Name: " << regStd[i].name << "\n ID: " << regStd[i].id << "\n Type: " << regStd[i].type << endl;
            }
            getch();
            continue;
        }
        else
            continue;
    }
    return 0;}

ouput:
                REGULAR STUDENTS
                ================
S.NO: 1
Name: rafay
ID: 01
                REGULAR STUDENTS
                ================
S.NO: 1
Name: rafay
ID: 01
Type: REGULAR
Semester: 2
1. Promote the student to the next semester 
2. Show Graduated Students
Select the number to perform operation
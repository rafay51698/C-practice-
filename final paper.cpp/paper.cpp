//********************************************************************************************
//Function Overloading
//********************************************************************************************

// #include <iostream>
// using namespace std;

// class Func_over
// {
// public:
//     int addition(int num1, int num2)
//     {
//         return num1 + num2;
//     }
//     int addition(int num1)
//     {
//         return num1;
//     }
// };

// int main()
// {
//     Func_over obj;
//     cout << obj.addition(2,3);
//     return 0;
// }

//********************************************************************************************
//Operator Overloading
//********************************************************************************************

// #include <iostream>
// using namespace std;

// class Distance
// {
// private:
//     int feet, inches;

// public:
//     Distance()
//     {
//         feet = 0;
//         inches = 0;
//     }
//     Distance(int a, int b)
//     {
//         feet = a;
//         inches = b;
//     }
//     void getData()
//     {
//         cout << "Enter feet" << endl;
//         cin >> feet;
//         cout << "Enter icnhes" << endl;
//         cin >> inches;
//     }
//     Distance operator+(Distance d2)
//     {
//         int in = inches + d2.inches;
//         int ft = feet + d2.feet;
//         return Distance(ft,in);
//     }
//     void showData()
//     {
//         cout << "Feets : " << feet << endl;
//         cout << "Inches : " << inches << endl;
//     }
// };
// int main()
// {
//     Distance d1, d3;
//     d1.getData();
//     Distance dist2(5, 5);
//     d3 = d1 + dist2;
//     cout<<"D1"<<endl;
//     d1.showData();
//     cout<<"D2"<<endl;
//     dist2.showData();
//     cout<<"D3"<<endl;
//     d3.showData();
//     return 0;
// }

//********************************************************************************************
// FUNCTION OVERRIDING
//*********************************************************************************************

// #include <iostream>
// using namespace std;
// class Customer
// {
// protected:
//     string name, gender;
//     int age;

// public:
// void getData(){
//     cout<<"Enter name"<<endl;
//     cin>>name;
//     cout<<"Enter age"<<endl;
//     cin>>age;
//     cout<<"Enter gender"<<endl;
//     cin>>gender;
// }
// };

// class Employee : public Customer
// {
//     int salary;
// public:
// void getData(){
//     Customer::getData();
//     cout<<"Enter salsary"<<endl;
//     cin>>salary;
// }
// };
// int main()
// {
// Employee obj;
// obj.getData();
//     return 0;
// }

//********************************************************************************************
//CONSTRUCTORS
//********************************************************************************************

// #include<iostream>
// using namespace std;
// class Constr {
//     public:
//     int x;
//     Constr(){
//          x = 0;
//         cout<<x<<endl;
//         cout<<"No argument Constuctor\n";
//     }

//     Constr(int a , int b){
//         cout<<x;
//         cout<<"Two argument Constuctor\n";
//     }
//     ~Constr(){
//         cout<<"Destructor has been called\n";
//     }
// };
// int main(){
//     Constr obj; // ek destructor is k sath call hga
//     Constr obj2(1,2); // ek destructor is k sath bh call hga
//     return 0;
// }

//********************************************************************************************
//INHERITANCE
//********************************************************************************************

// #include <iostream>
// using namespace std;

// class Details
// {
// protected:
//     string name, gender;

// public:
//     void getDetails()
//     {
//         cout << "Enter name" << endl;
//         cin >> name;
//         cout << "Enter gender" << endl;
//         cin >> gender;
//     }
// };

// class token : public Details
// {
// public:
//     void generateToken()
//     {
//         cout << "Name : " << name << endl;
//         cout << "Gender : " << gender << endl;
//         cout << "Token Number :  111" << endl;
//     }
// };
// int main()
// {
//     token obj;
//     obj.getDetails();
//     obj.generateToken();
//     return 0;
// }

//********************************************************************************************
//FRIENDS FUNCTIONS
//********************************************************************************************

// #include <iostream>
// using namespace std;
// void showfname();
// class names
// {
// private:
//     string name, fname;

// public:
//     friend void showfname(names);
//     void getName()
//     {
//         cout << "Your name :  " << endl;
//         cin >> name;
//         cout << "Your fname :  " << endl;
//         cin >> fname;
//     }
//     void showName()
//     {
//         cout << " NAME : " << name;
//     }
// };

// void showfname(names FNAME)
// {
//     cout << "\n Fname is : " << FNAME.fname;
// }

// int main()
// {
//     names obj;
//     obj.getName();
//     obj.showName();
//     showfname(obj);
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class A {
//     int a = 20;
//     public:
//     void show(){
//         cout<<"Class A value " << a << endl;
//     }
//     friend class B;
// };
// class B{
//     public:
//     void showb(A abc){
//         cout<<"Class b value " << abc.a+10 << endl;
//     }
// };

// int main(){
//     A obj;
//     obj.show();
//     B obj2;
//     obj2.showb(obj);
//     return 0;
// }

//********************************************************************************************
//VIRTUAL FUNCTIONS
//********************************************************************************************

//ye br br base class ka func run krega...

// #include <iostream>
// using namespace std;
// class A
// {
// public:
//     void show()
//     {
//         cout << "This is base class" << endl;
//     }
// };
// class B:public A
// {
// public:
//     void show()
//     {
//         cout << "This is class B \n";
//     }
// };
// class C:public A
// {
// public:
//     void show()
//     {
//         cout << "This is class C \n";
//     }
// };
// int main()
// {
//     B obj2;
//     C obj3;
//     A *ptr;
//     ptr = &obj2;
//     cout<<"obj2\n";
//     ptr->show();
//     ptr = &obj3;
//     cout<<"obj3\n";
//     ptr->show();
//     return 0;
// }

// base class ka func run nh krega baki dono krega or agr hm base class ka krwaege bh to wo kch show nh krega

// #include <iostream>
// using namespace std;
// class A
// {
// public:
//     virtual void show()
//     {
//         cout << "This is base class" << endl;
//     }
// };
// class B:public A
// {
// public:
//     void show()
//     {
//         cout << "This is class B \n";
//     }
// };
// class C:public A
// {
// public:
//     void show()
//     {
//         cout << "This is class C \n";
//     }
// };
// int main()
// {
//     B obj2;
//     C obj3;
//     A *ptr;
//     ptr = &obj2;
//     cout<<"obj2\n";
//     ptr->show();
//     ptr = &obj3;
//     cout<<"obj3\n";
//     ptr->show();
//     return 0;
// }

//********************************************************************************************
//ABSTRACT CLASS
//********************************************************************************************

// #include <iostream>
// using namespace std;
// class shapes
// {
// public:
//     virtual void shape() = 0; //wo function jo hr class m use hga siwae base class k
// };

// class triangle : public shapes
// {
// public:
//     void shape()
//     {
//         cout << "Triangle" << endl;
//     }
// };
// class rectangle : public shapes
// {
// public:
//     void shape()
//     {
//         cout << "Rectangle" << endl;
//     }
// };

// int main()
// {
//    shapes obj;       // cant instantiate the object of  base class

// normal method

// triangle obj2;
// obj2.shape();
// rectangle obj3;
// obj3.shape();

// pointer method

// pointer obj bna skte hen base class ka normal obj nh

//     shapes *ptr;
//     triangle obj2;
//     ptr = &obj2;
//     ptr->shape();
//     return 0;
// }

//********************************************************************************************
//FILING
//********************************************************************************************

// #include<iostream>
// #include<fstream>
// using namespace std;

// int main(){
//     string allDetails;
//     ofstream write("abc.txt", ios::app);
//     string a = "Hello";
//     write<<a<<endl;
//     write<<"hello again";
//     write.close();
//      ifstream read("abc.txt");
//     while (!read.eof())
//     {
//         getline(read, allDetails);
//         cout << allDetails << endl;
//     }
//     read.close();
//     return 0;
// }

// #include<iostream>
// using namespace std;


// class Operator
// { private: 
// int count;

    
// public:
//     Operator()
//     {
//         count=0;
//     }
//     void show()  
//     {   
//         cout<<count<<endl;

//     } 
    
//     void operator++(){
//         count++;
//     }
// };



// int main(){
//     Operator D1;

    
//     return 0;
// }
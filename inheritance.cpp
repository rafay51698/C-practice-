//Inheritance single

// #include<iostream>
// using namespace std;
// Base class
// class Vehicle {
//   public:
//     string brand = "Ford";
//     void honk() {
//       cout << "Tuut, tuut! \n" ;
//     }
// };
// Derived class
// class Car: public Vehicle {
//   public:
//     string model = "Mustang";
// };
// int main() {
//   Car myCar;
//   myCar.honk();
//   cout << myCar.brand + " " + myCar.model;
//   return 0;
// }





// //Multilevel inheritance : calling function of base class from the
// //                         derived class of a derived class

// #include <iostream>
// using namespace std;
// //Parent class
// class MyClass {
//   public: 
//     void myFunction() {
//       cout << "Some content in parent class." ;
//     }
// };
// //Child class
// class MyChild: public MyClass {
// };
// //Grandchild class 
// class MyGrandChild: public MyChild {
// };
// int main() {
//   MyGrandChild myObj;
//   myObj.myFunction();
//   return 0;
// }





// Multiple inhertiance: 2 base class inherit 1 derive class 

// #include <iostream>
// using namespace std;
// Base class
// class MyClass {
//   public:
//     void myFunction() {
//       cout << "Some content in parent class.\n" ;
//     }
// };
// Another base class
// class MyOtherClass {
//   public:
//     void myOtherFunction() {
//       cout << "Some content in another class.\n" ;
//     }
// };
// Derived class
// class MyChildClass: public MyClass, public MyOtherClass {
// };
// int main() {
//   MyChildClass myObj;
//   myObj.myFunction();
//   myObj.myOtherFunction();
//   return 0;
// }





// Protected specifier 
//Until now, we have only used public (members of a class are accessible from outside the class) 
//and private (members can only be accessed within the class).
// The third specifier, protected, is similar to private, but it can also be accessed in the inherited class.

// #include <iostream>
// using namespace std;
// Base class
// class Employee  {
//   protected:  // Protected access specifier
//     int salary;
// };
// Derived class
// class Programmer: public Employee {
//   public:
//     int bonus;
//     void setSalary(int s) {
//       salary = s;
//     }
//     int getSalary() {
//       return salary;
//     }
// };
// int main() {
//   Programmer myObj;
//   myObj.setSalary(50000);
//   myObj.bonus = 15000;
//   cout << "Salary: " << myObj.getSalary() << "\n";
//   cout << "Bonus: " << myObj.bonus << "\n";
//   return 0;
// }

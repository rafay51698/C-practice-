#include<iostream>
using namespace std;
#include<math.h>

class Addition{
    private:
        int num1,num2,ans;
    public:
        Addition(int num1,int num2)
                { 
                ans = num1 + num2;
                };
        void printAnswer()
        {
            cout<<"Sum of 3 + 2 is: "<<ans<<endl;
        };
        };
class Subtraction{
    private:
        int num1,num2,ans;
    public:
        Subtraction(int num1,int num2)
                {
                ans = num1 - num2;
                };
        void printAnswer()
            {
            cout<<"Difference of 9-2 is: "<<ans<<endl;
            };
        };

class Multiplication{
    private:
        int num1,num2,ans;
    public:
        Multiplication(int num1,int num2)
                {
                ans = num1 * num2;
                };
        void printAnswer()
        {
            cout<<"product of 10 x 2 is: "<<ans<<endl;
        };
        };

class Division{
    private:
        int num1,num2,ans;
    public:
        Division(int num1,int num2)
                {
                ans = num1 / num2;
                };
        void printAnswer()
        {
            cout<<"Quotient of 10/5 is: "<<ans<<endl;
        };
        };

class power{
    private:
        int num1,num2,ans;
    public:
        power(int num1,int num2)
                {
                ans = pow(num1,num2);
                };
        void printAnswer()
        {
            cout<<"ans of 3s exp 3 is: "<<ans<<endl;
        };
        };

class Log{
    private:
        int num1,ans;
    public:
        Log(int num1)
                {
                ans =log(1);
                };
        void printAnswer()
        {
            cout<<"Log of 1 is: "<<ans<<endl;
        };
        };


class Sin{
    private:
        int num1;
        float ans;
    public:
        Sin(int num1)
                {
                ans = sin(num1) ;
                };
        void printAnswer()
        {
            cout<<"Sin of 1 is: "<<ans<<endl;
        };
        };

class Cos{
    private:
        int num1;
        float ans;
    public:
        Cos(int num1)
                {
                ans = cos(num1) ;
                };
        void printAnswer()
        {
            cout<<"cos of 1 is: "<<ans<<endl;
        }
        };

int main(){
    int n;
    cout<<"For Addition enter: 1\nfor subtraction 2\nfor multiplication 3"<<endl;
    cin>> n;
    if (n==1)
    {  
        Addition op1(3,2);
        op1.printAnswer();
    }
    if (n==2){
            Subtraction op2(9,2);
    op2.printAnswer();
    }
    Multiplication op3(10,2);
    op3.printAnswer();
    Division op4(10,5);
    op4.printAnswer();
    power op5(3,3);
    op5.printAnswer();
    Log op6(1);
    op6.printAnswer();
    Sin op7(1);
    op7.printAnswer();
    Cos op8(1);
    op8.printAnswer();
    
    return 0;   
}



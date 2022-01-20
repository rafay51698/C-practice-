#include<iostream>
using namespace std;
#include<math.h>


class Addition {
    private:
        int num1 , num2,ans;
    public:
        //Constructor 
        Addition(void){
            cout<<"This is add function\n\n";
            num1 = 10;
            num2 = 10;
        }
        void add(){
            ans = num1+num2;
            
            cout << "The sum is: "<<ans;
        }
};
// class Power {
//     private:
//         int num1, num2,ans;
        

//     public:
//         //contructor
//         Power(void){
//             cout<<"\n\nThis is power function";
        
//             cout<<"\n\nEnter base: ";
//             cin>>num1;
//             cout<<"Enter exp: ";
//             cin>>num2;
//             ans = pow(num1,num2);
//             cout<<"Answer is: "<<ans;


//         }
//         void power(){
//             // ans = pow(num1,num2);
//             // cout<<"Answer is: "<<ans;

//         }



// };
int main(){
    Addition OB_add;
    OB_add.add();
    // Power OB_pow;
    // OB_pow.power();

    return 0 ;
};
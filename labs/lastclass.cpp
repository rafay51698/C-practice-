#include <iostream>
using namespace std;

class MyClass
{
public:
    class Error
    {
    };
    void Divide (){
        int a , b ;
        cout<<"Enter value of a and b one by one";
        cin>>a>>b;
        if(b==0){
            throw Error();
        }
        else{
            float c;
            c = a/b;
            cout<<"\nThe ans is " << c ;
        }
    }
};
int main()
{
try{
    MyClass obj;
    obj.Divide();
}
catch(MyClass::Error){
    cout<<"You have entered b as 0 which makes your answer infinity";
}
    return 0;
}
#include<iostream>
using namespace std;

class funcover{
    public: 
    void nashra(){
        string a = "base class func";
        cout<<a<<endl;
    }
    void nashra(string b){
        cout<<b;
    }
};
class derived:public funcover{
    public:
    void nashra(){
        funcover::nashra();
        string b = "derived class func";
        cout<<b;
    }
};
int main(){
    derived obj;
    obj.nashra();    
};

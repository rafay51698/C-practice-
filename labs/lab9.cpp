#include <iostream>
#include <string>
using namespace std;
class father
{
protected:
    int age;
public:
    father() {}
    father(int x)
    {
        age = x;
    }

    virtual void iam()
    {
        cout << "I AM FATHER, my age is....." << age << endl;
    }
};
class Son : public father
{
public:
    Son() {}
    Son(int x)
    {
        age = x;
    }
    virtual void iam()
    {
        cout << "I AM SON, my age is...."<<age<< endl;
    }
};
class Daughter : public father
{
public:
    Daughter() {}
    Daughter(int x)
    {
        age = x;
    }
    virtual void iam()
    {
        cout << "I AM DAUGHTER, my age is..."<<age << endl;
    }
};
int main(){
    //Creating objects and calling iam() for each.

    Son objs(15);
    objs.iam();
    Daughter objd(11);
    objd.iam();
    father objF(33);
    objF.iam();
// Declaring pointer....
    father *ptr;

    ptr = &objs;
    ptr->iam();
    ptr = &objd;
    ptr->iam();
    return 0;
}
//as told in qs displayed separately with pointer
output:
I AM SON, my age is....15    
I AM DAUGHTER, my age is...11
I AM FATHER, my age is.....33
I AM SON, my age is....15    
I AM DAUGHTER, my age is...11
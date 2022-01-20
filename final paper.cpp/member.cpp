#include <iostream>
using namespace std;

class Amusement_Park
{
private:
    string name;
    int age;
    static int token_price;
public:
    void getDetails()
    {
        cout << "Enter your name" << endl;
        cin >> name;
        cout << "Enter your age" << endl;
        cin >> age;
    }
    void showDetails()
    {
        cout << "Name:" << name << endl;
        cout << "Age:" << age << endl;
        cout << "Token Price:" << token_price << endl;
    }
    static void dec_tok_pr()
    {
        cout << "Hurrah !! The token price has been decreamneted by 100 for all of you because of OCASSION OF EID " << endl;
        token_price = token_price - 100;
    }
};

int Amusement_Park :: token_price = 500 ;

int main()
{
    Amusement_Park person1,person2 , person3 ;
    person1.getDetails();
    person1.showDetails();
    person2.getDetails();
    person2.showDetails();
    person3.getDetails();
    person3.showDetails();
    Amusement_Park:: dec_tok_pr();
    person1.showDetails();
    person2.showDetails();
    person3.showDetails();
    return 0;
}
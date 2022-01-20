#include<iostream>

using namespace std;

class CustomerBank
{
    private :
        string name ; 
        int acc_no ; 
        float balance ; 
        float withdraw ; 
    public :
        CustomerBank()
        {
            cout << "Enter Name : " ; 
            cin >> name ; 
            cout << "Acc Number : " ;
            cin >> acc_no ;
        }
        float takebalance()
        {
            while (true)
            {
                try
                {
                    cout << "Enter  Balance : " ; 
                    cin >> balance ;
                    if (balance < 0 )
                    {
                        throw balance ; 
                    }
                }
                catch(float balance)
                {
                    cout << "Balance cannot be zero.\n" ; 
                    continue ; 
                }
                break ; 
            }
            return balance ;  
        }
        float Withdraw_balance()
        {
            while (true)
            {
                try
                {
                    cout << "Enter Amout to Withdraw : " ; 
                    cin >> withdraw ; 
                    if (withdraw > balance)
                    {
                        throw withdraw ; 
                    }
                }
                catch(float withdraw)
                {
                    cout << "\nYour account does not have that many funds . " ; 
                    continue ; 
                }
                break ; 
            }
            return withdraw ; 
        }
        void display()
        {
            cout << "Name : " << name ; 
            cout << "\nAccount Number : " << acc_no ; 
            cout << "\nBalance : " << balance ; 
        }
} ; 


int main()
{   
    CustomerBank c1 ; 
    c1.takebalance() ; 
    c1.display() ;
    c1.Withdraw_balance() ; 
    return 0;
}
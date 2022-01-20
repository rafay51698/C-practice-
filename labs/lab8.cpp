#include<iostream>
using namespace std;
#include <string>

class publications{

    protected: 
            string   title;
            float   price;
    public:
            void getdata();
            void putdata();

};
void publications::getdata(){
    cout<<"Enter Title: ";
    getline(cin,title);

    cout<<"Enter Price: ";
    cin>>price;
    cin.ignore();
};

void publications::putdata(){
    cout<<"\nTitle: "<<title<<endl;
    cout<<"Price: "<<price<<endl;
}

class book:public publications{

    protected: 
            int page_count;
    public:
            void getdata();
            void putdata();
};

void book::getdata(){
    cout<<"\tCLASS BOOKS "<<endl;
    cout<<"\t==========="<<endl;
    publications::getdata();
    cout<<"Enter Book page count: ";
    cin>>page_count;
    cin.ignore();

}
void book::putdata(){
    publications::putdata();
    cout<<"Book page count is: "<<page_count<<endl;
    
}



class tape:public publications{  
    
    protected:
            float time;
    public:
            void getdata();
            void putdata();
};

void tape::getdata(){
    cout<<"\tCLASS TAPE "<<endl;
    cout<<"\t==========="<<endl;
    publications::getdata();
    cout<<"Enter tape total play time in minutes: ";
    cin>>time;
    cin.ignore();

};

void tape::putdata(){
    publications::putdata();
    cout<<"Tape total play time in minutes is: "<<time;
    
}

int main(){
    book obj1;
    obj1.getdata();
    obj1.putdata();
    tape obj2;
    obj2.getdata();
    obj2.putdata();
    return 0;
}

output:
CLASS BOOKS 
        ===========
Enter Title: meee
Enter Price: 500
Enter Book page count: 20

Title: meee
Price: 500
Book page count is: 20
        CLASS TAPE
        ===========
Enter Title: nonoe
Enter Price: 400
Enter tape total play time in minutes: 2

Title: nonoe
Price: 400
Tape total play time in minutes is: 2
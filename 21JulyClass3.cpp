#include <iostream>
using namespace std;
class Employee{
    int id,salary;
    string name;
    string company;

    public:
    void setdata(void){
        cout<<"id";
        cin>>id;
        cout<<endl;
        cout<<"salary";
        cin>>salary;
        cout<<endl;
        cout<<"name";
        cin>>name;
        cout<<endl;
        cout<<"company";
        cin>>company;
        cout<<endl;
    }
    void getdata(void){
        cout<<"name :"<<name<<endl;
        cout<<"id:"<<id<<endl;
        cout<<"salary:"<<salary<<endl;
        cout<<"company:"<<company<<endl;
    }

};
int main(){
    Employee e;
    e.setdata();
    e.getdata();
    return 0;
}
#include <iostream>
using namespace std;
class Employee{
    int id;
    int salary;
    public:
    void setdata(void){
        salary=75000;
        cout<<"Enter the id"<<endl;
        cin>>id;
    }
    void getdata(void){
        cout<<"It is the id "<<id<<endl;
        cout<<"Salary for each employee:"<<salary<<endl;
    }

};
int main(){
    Employee emp[5];
    for(int i=0;i<5;i++){

    
    emp[i].setdata();
    emp[i].getdata();
    }

    return 0;
}
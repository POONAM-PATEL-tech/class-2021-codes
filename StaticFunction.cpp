#include <iostream>
using namespace std;
class Employee{
    int id;
    static int count;
    public:
    void setEmp(void);
    void getEmp(void);
   static void getCount(void);


};
void Employee :: setEmp(void)
{
    cout<<"Employee id  ";
    cin>>id;
    cout<<" of Employee no.  "<<count+1<<endl;
    count++;
}
void Employee :: getEmp(void)
{
  cout<<"id "<<id<<endl;

}
void Employee :: getCount(void){
        // cout<<id; // throws an error
        cout<<"The value of count is "<<count<<endl;
    }
int Employee :: count;// It is very important to describe static function out of the class.
// the dafault value is 0.
int main(){
 Employee Poonam,Ragnee,Himesh;
 Poonam.setEmp();
 Poonam.getEmp();
 Poonam.getCount();

 Ragnee.setEmp();
 Ragnee.getEmp();
 Ragnee.getCount();

 Himesh.setEmp();
 Himesh.getEmp();
Ragnee.getCount();
    return 0;
}
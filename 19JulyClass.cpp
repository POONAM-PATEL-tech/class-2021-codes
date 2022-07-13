#include <iostream>
using namespace std;
class Student{
    public:
     int id,group;
     string name,stream;

     void set(void){
         cout<<"id";
         cin>>id;
         cout<<" name  ";
         cin>>name;
         cout<<"group";
         cin>>group;
         cout<<"stream";
         cin>>stream;
         cout<<endl;
          
     }
     void display(void){
         cout<<"id"<<id<<endl;
         cout<<"name"<<name<<endl;
         cout<<"group"<<group<<endl;
         cout<<"stream"<<stream<<endl;
     }
     
};
int main(){
    Student s1,s2,s3,s4;
    
    s1.set();

    s1.display();
    s2.set();
   s2.display();
   s3.set();
   s3.display();
   s4.set();
   s4.display();

    return 0;
}
#include <iostream>
using namespace std;
class Student{
    int id;
    string name;
    public:
    Student(){
        id=1;
        name="abc";
    }
    Student(int a,string b){
        id=a;
        name=b;
    }
    void display(){
        cout<<id<<endl;
        cout<<name<<endl;
    }
};
int main(){


    Student s1= Student();
    s1.display();
    Student s2= Student(2,"dfg");
    s2.display();
    Student s3=Student (3,"bfhf");
    s3.display();
    Student s4=Student(4,"sdgh");
    s4.display();


    return 0;
}
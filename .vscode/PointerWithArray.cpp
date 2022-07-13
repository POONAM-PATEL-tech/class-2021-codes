#include<iostream>
using namespace std;
int main(){
    int marks[]={10,20,30,40,50};
    int *p=marks;
    cout<<"index 0 :"<<*p<<endl;
    cout<<"index 1 :"<<*(p+1)<<endl;
    cout<<"index 2 :"<<*(p+2)<<endl;
    cout<<"index 1 :"<<*(++p)<<endl;//here is not any  loop so  it will run from beginning
    cout<<"index :"<<*p<<endl;
    cout<<"index :"<<*(p++)<<endl;
    cout<<*p;



}
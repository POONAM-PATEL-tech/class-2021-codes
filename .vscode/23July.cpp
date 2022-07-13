#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value: ";
    cin>>n;
    int *p=&n;
    cout<<"Address of the value n:"<<p<<endl;
    int **c=&p;
    cout<<"This will give the address of pointer p"<<endl;
    cout<<c<<endl;
    cout<<"This will give the value of pointer p"<<endl;
    cout<<*c<<endl;
    cout<<"This will give the value of n"<<endl;
    cout<<**c<<endl;
}
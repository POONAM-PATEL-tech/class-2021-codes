#include <iostream>
using namespace std;
class Sum
{
private:
int a,b;
public:
int d,e; 
void read();
void set(int a1,int b1);//Declaration of the function
void get(){
    
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<d<<endl;
    cout<<e<<endl;
    int add=a+b+d+e;
    cout<<"Sum :"<<add<<endl;
    }
};
void Sum :: read(){
    cin>>d;
    cin>>e;
}
void Sum :: set(int a1,int b1){
 a=a1;
 b=b1;
}
int main(){
    Sum Poonam;
    
    Poonam.read();
    Poonam.set(1,2);
    Poonam.get();
    return 0;
}
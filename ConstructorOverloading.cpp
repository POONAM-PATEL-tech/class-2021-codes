#include <iostream>
using namespace std;
class complex{
    int a,b;
    public:
    complex(int a1,int b1)
    {
     a=a1;
     b=b1;
    }
    complex(int a1){
        a=a1;
        b=0;
    }
    complex(){
        a=0;
        b=0;
    }
    void display(void){
        cout<<a<<"+ i"<<b<<endl;
    }
};
int main(){
    complex c1(4,5);
    complex c2(5);
    complex c3;
    c1.display();
    c2.display();
   c3.display();
    return 0;
}
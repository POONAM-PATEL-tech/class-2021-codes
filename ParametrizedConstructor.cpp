#include <iostream>
using namespace std;
class complex{
    int a,b;
    public:
    complex(int ,int );//Declaration
    void print(void){
        cout<<a<<"+ i"<<b<<endl;
    }
};
complex :: complex(int n1,int n2){
    a=n1;
    b=n2;
}
int main(){
    complex c1(2,3);//Implicit call
    c1.print();

    complex c2=complex(4,5);//Explicit call
    c2.print();
    return 0;
}
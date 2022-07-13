#include <iostream>
using namespace std;
class complex{
    int a,b;
    public:
    complex(void);//It is the default constructor which has no arguments to pass
    void print(void){
        cout<<a<<"+ "<<b<<"i"<<endl;
    }
};
 complex :: complex(void){
     a=10;
     b=20;
    // cout<<"For object"<<endl;
   // cin>>a>>b;
    
}

int main(){
    complex c1,c2;
    c1.print();
    c2.print();
    return 0;

}

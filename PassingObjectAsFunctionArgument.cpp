#include <iostream>
using namespace std;
class Complex{
    int a;
    int b;
    public:
    void setdata(int v1,int v2){
        a=v1;
        b=v2;
    }
    void setdatabySum(Complex o1,Complex o2){
        a=o1.a+o2.a;
        b=o1.b+o2.b;
         cout<<"Sum of two complex number:"<<a<<"+ i"<<b<<endl;
    }
    void print(void){
        cout<<a<<"+ i"<<b<<endl;
    }

};
int main(){
Complex c1,c2,c3;
c1.setdata(1,2);
c2.setdata(2,3);
c1.print();
c2.print();
c3.setdatabySum(c1,c2);
return 0;
}
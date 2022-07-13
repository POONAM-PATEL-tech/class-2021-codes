#include <iostream>
using namespace std;
class Complex{
    int a;
    int b;
    friend Complex sumComplex(Complex o1,Complex o2);
    public:
    
    void setdata(int v1,int v2){
        a=v1;
        b=v2;
    }
    void print(void){
        cout<<a<<"+ i"<<b<<endl;
    }
};
Complex sumComplex(Complex o1,Complex o2){
    Complex o3;
    o3.setdata((o1.a+o2.a),(o1.b+o2.b));
    return o3;
}
int main(){
    Complex c1,c2,Sum;
    c1.setdata(2,3);
    c2.setdata(4,5);
    c1.print();
    c2.print();

    Sum=sumComplex(c1,c2);
    Sum.print();
    return 0;
}



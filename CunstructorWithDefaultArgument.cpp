#include <iostream>
using namespace std;
class Simple{
    int data1;
    int data2;
    public:
    Simple(int a,int b=5){
        data1=a;
        data2=b;
    }
    void display(void){
        cout<<"data1 is "<<data1<<" and "<<" data2 is "<<data2<<endl;
    }
};

int main(){
    Simple s1(2);
    Simple s2(4,8);
    s1.display();
    s2.display();
return 0;

}
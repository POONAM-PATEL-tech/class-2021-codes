#include<iostream>
using namespace std;
class Volume{
    int side;
    float side1;
    public:
    Volume(){
        side=2;
    }
    Volume(int a){
        side=a;
        side1=0;
    }
    Volume(float b){
    
        side1=b;
        side =0;
    }
    void display(){
        cout<<(side*side*side)<<endl;
    }
    void display1(){
        cout<<(side1*side1*side1)<<endl;
    }
    
};
int main(){
    Volume v1=Volume();
    v1.display();
    Volume v2=Volume(4);
    v2.display();
    Volume v3=Volume(2.5f);
    v3.display1();


    return 0;
}
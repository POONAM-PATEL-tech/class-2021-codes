#include <iostream>
using namespace std;
class Bill{
    int unit;
    int rperunit;
    public:
    void setdata(void){
        rperunit=10;
        cout<<"enter the unit"<<endl;
        cin>>unit;
    }
    void calculate(void){
        cout<<"Bill"<<endl;
        cout<<(unit*rperunit)<<endl;

    }
    void display(void){
        cout<<"per unit "<<endl;
        cout<<rperunit<<endl;
        cout<<"Units"<<endl;
        cout<<unit<<endl;
    }
        


};
int main(){
    Bill b;
    b.setdata();
    
    b.display();
    b.calculate();
    return 0;
}
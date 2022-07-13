#include <iostream>
using namespace std;
class Rectangle{

    
    public:
    float l,w;
    void setdata(void){
        cout<<"Length:";

     cin>>l;
     cout<<endl;
     cout<<"width:";
     cin>>w;
     cout<<endl;
    }
    void display(void);
    void area(void){
        
        float area=l*w;
        cout<<"area:"<<area<<endl;
    }
    void parameter(void){
        float parameter=2*(l+w);
        cout<<"Paramiter:"<<parameter<<endl;
    }
};
void Rectangle :: display(void){
    cout<<"length:"<<l<<endl;
    cout<<"width:"<<w<<endl;
   // cout<<"area:"<<area<<endl;
   // cout<<"peramiter"<<peramiter<<endl;
}
int main(){
    Rectangle r;
    r.setdata();
    
    r.display();
    r.area();
    r.parameter();

    return 0;

}
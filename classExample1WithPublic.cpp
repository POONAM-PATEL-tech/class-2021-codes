#include <iostream>
using namespace std;
class add{
    public:
    int a,b;
    void enter(void){
        cin>>a>>b;
    }
    void sum(void);
};
void add :: sum(void){
       int add1=a+b;
       cout<<add1;

}
int main(){
     add c;
     c.enter();
   c.sum();

}
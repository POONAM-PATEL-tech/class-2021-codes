#include <iostream>
using namespace std;
class Pattern
{
    int n;
    public:
    void read();
    void pattern1();
};
void Pattern :: read(){
    cin>>n;
}
void Pattern :: pattern1(){
    for(int i=n;i>0;i--){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    Pattern patty;
    patty.read();
    patty.pattern1();
    
    return 0;
}
  

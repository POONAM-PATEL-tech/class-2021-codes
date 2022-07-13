#include <iostream>
using namespace std;
class Pattern1 
{
    private:
    int n;
    public:
    
    
    void read();
    void pattern();
};
void Pattern1 :: read(){
    cin>>n;
}
void Pattern1 :: pattern(){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}
int main(){
    
    Pattern1 pat;
   pat.read();
    pat.pattern();
    return 0;

}
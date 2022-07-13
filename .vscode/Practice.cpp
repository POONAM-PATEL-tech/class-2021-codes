#include <iostream>
using namespace std;

void func(int a[5])
{
    int i;
    for(i = 1; i < 3; i++)
    {
        a[i] = a[i-1] + a[i+1];
        if(a[i]%2 == 0)
            a[i] /= 2;
            cout<<a[i]<<endl;
    }
}
int main(){
    int a[5] ={5,65,45,2,25};
    func(a);
    
}
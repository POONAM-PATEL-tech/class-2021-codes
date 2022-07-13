#include <iostream>
using namespace std;
int main(){
    int x=5;
    int s=10;
    int *a=&x;
    int **b=&a;
    cout<<a<<endl;
    cout<<x<<endl;
    cout<<&x<<endl;
    cout<<*a<<endl;
    cout<<**b;
}
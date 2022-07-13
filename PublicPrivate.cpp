#include <iostream>
using namespace std;
class PublicPrivate
{
private:
    /* data */
    int a,b,c;
public:
int d,e;
void setdata(int a1,int b1,int c1);// Declaration of a function
 /*{ 
    a=a1;
    b=b1;
    c=c1;
}
*/
void getdata(){
    cout<<"The value of a is :"<<a<<endl;
    cout<<"The value of b is :"<<b<<endl;
    cout<<"The value of c is :"<<c<<endl;
    cout<<"The value of d is :"<<d<<endl;
    cout<<"The value of e is :"<<e;
}
    
};
void PublicPrivate :: setdata(int a1,int b1,int c1){
 a=a1;
 b=b1;
 c=c1;
}



int main(){
PublicPrivate Data;
Data.d=10;
Data.e=20;
Data.setdata(5,2,6);
Data.getdata();
return 0;
}
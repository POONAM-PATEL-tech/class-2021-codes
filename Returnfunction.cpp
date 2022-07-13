#include <iostream>
using namespace std;
class Return {
    int a,b;
    public:
    void setdata(int a1,int b1){
        a=a1;
        b=b1;
    }
    int multiply(){
        int c;
        c.setdata(a*b,a+b);
        return c;
    }
}
int main()
{
    Return r;
    r.setdata(1,2);
    r.multiply();
    return 0;
}
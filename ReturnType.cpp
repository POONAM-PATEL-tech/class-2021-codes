#include <iostream>
using namespace std;
class Return{
    int l,w;
    void setdata(int a,int b){
        l=a;
        w=b;

    }
    int getdata(int l,int w){
      int x=x.setdata(l+w);
      return x;
    }

};

int main(){
    Return r;
    r.setdata(1,2);
    r.getdata();
    return 0;

}

#include <iostream>
using namespace std;
class AnArray{
    
    int i;
    
    public:
    void setdata(int i1){
        i1=i;

    }
    void getdata(){
        
     cout<<i;


    }


};
int main(){
    AnArray arr[] = {10,20,30,40,50};
    for(int i=0;i<5;i++){
        arr.setdata(i);
    }
    arr.getdata();
    
  


    return 0;
}

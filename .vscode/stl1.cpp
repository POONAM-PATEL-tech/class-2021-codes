#include <iostream>
#include <array>
using namespace std;
int main(){
   array<int,5> vs={1,2,3,4,5};
  cout<<vs.at(1)<<" "<<endl;
  cout<<"first number"<<" "<<vs.front()<<" "<<endl;
  cout<<"end number"<<" "<<vs.back()<<" "<<endl;
  cout<<"max size"<<" "<<vs.max_size()<<" "<<endl;
  
  //another array
  cout<<"fill :"<<endl;
  array<int,4> vs2;
  vs2.fill(5);
  for(int i=0;i<4;i++){
      cout<<vs2.at(i)<<" ";
  }
  cout<<endl;
  cout<<"empty:"<<endl;
  if(vs.empty()){
      cout<<"vs is empty";
  }else{
      cout<<"vs is not empty";
  }
  cout<<endl<<"begin and end function:"<<endl;
  for(auto i=vs.begin();i!=vs.end();i++){
      cout<<*i<<" ";
  }
  cout<<endl<<"rbegin and rend:"<<endl;
  for(auto i=vs.rbegin();i!=vs.rend();i++){
      cout<<*i<<" ";
  }
  cout<<"swap function";
  

}
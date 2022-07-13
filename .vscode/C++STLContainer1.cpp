#include <bits/stdc++.h>
#include <iostream>
using namespace std;
namespace Poonam{
    int a=5;
}
array<int,4> arr; //It will print 0000 without initialize 


int main(){
    int a=10;
    cout<<a;
    cout<<endl;// here the cout done with using namespace std.

    cout<<Poonam::a<<" ";
    std::cout<<a<<" ";
    // You can use std or using namespace std.
    cout<<endl;
    array<int,4> arr1;//It will give any random garbage value.
    array<int,3> arr2={0};//Print 000
    array<int,4> arr3={1};//Print 1000
    for(int i=0;i<4;i++){
        cout<<arr1.at(i);
    }
    cout<<endl;
    for(int i=0;i<4;i++){
        cout<<arr.at(i);
    }
    cout<<endl;
    for(int i=0;i<3;i++){
        cout<<arr2.at(i);
    }
    cout<<endl;
    for(int i=0;i<4;i++){
        cout<<arr3.at(i);
    }
    cout<<endl;
    array<int,5> arr4;
    arr4.fill(10);//It will fill all the indexes with 10.
    for(int i=0;i<5;i++){
        cout<<arr4.at(i)<<" "; //Print 10 10 10 10 10
    }
    cout<<endl;
    cout<<arr4.at(1)<<endl;//On this way you can print single element of any index.

    //Iterators 
    //begin(),end(),rbegin(),rend()
    //These are bassically to print array with different types.
    array<int,5> arr5={1,2,3,4,5};
    for(auto it=arr5.begin();it!=arr5.end();it++){ //It starts 1 2 3 4 5
        cout<<*it<<" ";                                  //from^ and go^till this we have a condition it!=end so we are  
    }                                            //not going to right after 5.print 1 2 3 4 5 
    cout<<endl;

    for(auto it=arr5.rbegin();it!=arr5.rend();it++ ){  // It will work from backside so will print 5 4 3 2 1 
        cout<<*it<<" ";
    }
    cout<<endl;

    for(auto it=arr5.end()-1;it>=arr5.begin();it--){  // if  you will do it++ this will move forward because 
        cout<<*it<<" ";                           // this is the habit of  end iterator.
    }
    cout<<endl;

    // Like for each loop

    for(auto it:arr5){
        cout<<it<<" ";   // here you will not do write *it  because it will not point anything.
    }
    cout<<endl;

    cout<<arr5.size()<<endl;//It will print length of array.
    cout<<arr5.front()<<endl;//It will print arr.at(0);
    cout<<arr5.back()<<endl;//It will print arr.at(arr.size()-1);
    cout<<arr5.at(arr5.size()-1);
    //Same as above.
    cout<<endl;
    
                   //                   <------VECTOR------>
    //At int main you can only define maximum 10^6 size of array.
    //Globally you can define only 10^7 size of array.
    //If data type is boolean then you can write only 10^7 at int main.
    //Globally you can define only 10^8.


    //Vector is same as array but we can shrink or extend its size dynamically.
    cout<<"Vectors Part starts From here:"<<endl;
    vector<int> arr6;//You do not need to define the size at vector.
    cout<<"Enter the elements are start from here by push_back function:"<<endl;
    arr6.push_back(0);//push function will enter the element at vector.
    arr6.push_back(1);
    arr6.push_back(2);
    arr6.push_back(3);
    arr6.push_back(4);
    arr6.emplace_back(5);//It is also same as push_back function but it takes less time than push_back.
    for(auto it:arr6){
        cout<<it<<" "; 
    }
    cout<<endl;
    cout<<"Start to delete the element from vector by pop_back function:"<<endl;
    // With pop_back function vector will start to shrink.
    arr6.pop_back();//pop  back will delete elements from last index .like here it will delete 5.
    for(auto it:arr6){
        cout<<it<<" ";
    }
    cout<<endl;
    arr6.pop_back();//pop  back will delete elements from last index .like here it will delete 4.
    for(auto it:arr6){
        cout<<it<<" ";
    }
    cout<<endl;
    arr6.pop_back();//pop  back will delete elements from last index .like here it will delete 3.
    for(auto it:arr6){
        cout<<it<<" ";
    }
    cout<<endl;

    cout<<"To clear all elements from vector use nameofvector.clear():"<<endl;
    arr6.clear();
    cout<<arr6.size()<<endl;//The size of arr6 will be 0.
    for(auto it: arr6){
        cout<<it<<" ";// This will not print anything because here we have not any elements.
    }
    cout<<endl;

    //If you want to use or define the size of  vector.
    vector<int>vec1(4,0); // here the initial size of  vector is defined and indexes also filled with 0.
    for(auto it:vec1){
        cout<<it<<" ";
    }
    cout<<endl;
    vec1.push_back(1);//But you can also push_back ahter define the intial size to extend a vector.
    for(auto it:vec1){
        cout<<it<<" ";
    }
    cout<<endl;

    //Copy vec1 to vec2.
    //The first way to copy.
    vector<int> vec2(vec1.begin(),vec1.end());// ) this parantheses will exclude right after position of the vector.
    for(auto it:vec2){
        cout<<it<<" ";
    }
    cout<<endl;
    //The Second way tocopy.
    vector<int> vec3(vec1);
    for(auto it:vec3){
        cout<<it<<" ";
    }
    cout<<endl;
    //If you want to copy ony 1st index like 0 0:
    vector<int>vec4(vec1.begin(),vec1.begin()+2);
    for(auto it: vec4){
        cout<<it<<" ";
    }
    cout<<endl;

    

    

            return 0;
}
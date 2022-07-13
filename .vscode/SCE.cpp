#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int n;
    cin>>n;
    int a,b,c;
    for(int i=0;i<n;i++){
        //int a,b,c;
        cin>>a>>b>>c;
    }
    for(int i=0;i<n;i++){
        if((a<b && a>c) || (a<c && a>b)){
            cout<<a<<endl;
        }else if((b<c && b>a) || (b>c && b<a)){
            cout<<b<<endl;
        }else{
            cout<<c<<endl;
        }
        
    }
    
	
	
	return 0;
}

#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int a,b;

    cin>>a>>b;
  
    if(a==1 and b == 2){
        cout<<3;
    }
  else if(a==1 and b==3){
    cout<<2;
  }
  else if(a==2 and b==1){
    cout<<3;
  }
  else if(a==2 and b==3){
    cout<<1;
  }
  else if(a==3 and b==2){
    cout<< 1;
    
  }
  else if(a==3 and b==1){
    cout<<2;
  }
    return 0;
}
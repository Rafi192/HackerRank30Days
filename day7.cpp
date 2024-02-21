#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a;
    string b;
    
    cin >>a>>b;
    int a_bar =a.length();    
    cout<<a_bar;
    cout<<" ";
    cout<<b.length()<<"\n";
    
    string con = a+b;
    cout<<con<<"\n";
    
    string temp;
    temp=a[0];
    a[0]=b[0];
    b[0]= temp[0];
    
    cout<<a<<" "<<b;
    
  
    return 0;
}
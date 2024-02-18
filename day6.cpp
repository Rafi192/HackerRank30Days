#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t;
    string s, txt,str2;
    cin>>t;
    while (t--){
        cin>>s;
        int len= s.length();
        for (int i=0; i<len;i++){
            if (i%2==0){
                txt +=s[i];
            }
            else {
            str2 +=s[i];
            }
            
        }
        cout<<txt;
        cout<<" "<<str2;
        cout<<"\n";
        txt="";
        str2="";
    }
    
     
    return 0;
}


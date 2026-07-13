#include<bits/stdc++.h>
using namespace std;

int main(){
    
    string str;cin>>str;
    int n=str.length();
    for(int i=0;i<n;i++){
        if(str[i]=='z')str[i]='a';
        else if(str[i]=='Z')str[i]='A';
        else str[i]++;
    }
    cout<<str<<"\n";

return 0;

}
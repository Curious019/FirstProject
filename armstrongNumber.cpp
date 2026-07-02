#include<bits/stdc++.h>
using  namespace std;

int main(){
   
    int n;cin>>n;
    int tmp=n;
    int cnt=0;
    for(int i=tmp;i!=0;i/=10){
        cnt++;
    }
    int sum=0;
    for(int i=tmp;i!=0;i/=10){
        int m=i%10;
        int prod=1;
        for(int j=0;j<cnt;j++){
            prod*=m;
        }
        sum+=prod;
    
    }
    if(sum==n){
        cout<< n <<" is armstrong number"<<"\n";
    }
    else{
        cout<< n <<" is not armstrong number"<<"\n";
    }
return 0;
}
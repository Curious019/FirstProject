#include<bits/stdc++.h>
using namespace std;

int Swap(int a,int b){
    int temp=a;
    a=b;
    b=temp;
    printf("After swap the values in swap function a=%d and b=%d \n",a,b);
    return 0;
}

int main(){
   
    int a,b;cin>>a>>b;
    printf("Before swap a=%d and b=%d\n",a,b); 
    Swap(a,b);
    printf("After swap the values in main function a=%d and b=%d \n",a,b);



}
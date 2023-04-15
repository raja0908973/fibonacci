#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of number to calculate fibonacci:\n";
    cin>>n;
    int a=0,b=1;

    if(n==1)
    cout<<a<<endl;

    else if(n==2){
    cout<<a<<ends;
    cout<<b<<endl;}

    else if(n>2){
       cout<<a<<ends;
       cout<<b<<ends;
    for(int i=3;i<=n;i++){
        int c=a+b;
        cout<<c<<ends;
        a=b;
        b=c;
    }
    }
    
return 0;
}
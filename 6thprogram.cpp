#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the number:";
    cin>>a;
    if(a%2==0){
        cout<<a<<" is a even number:";
    }
    else{
        cout<<a<<" is a odd number:";
    }
    return 0;
}
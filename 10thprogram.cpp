#include<iostream>
using namespace std;
int main(){
    int a=10,b=20;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"The value of 'a' after swapping is "<<a<<" and the value of 'b' is "<<b;
    return 0;
}
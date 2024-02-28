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


//Another program.
#include<iostream>
using namespace std;
int main(){
int a,b;
cout<<"Enter the a"<<endl;
cin>>a;
cout<<"Enter the b"<<endl;
cin>>b;
cout<<"Before Swapping the value of a and b is "<<a<<" "<<b<<endl;
int t;
t=a;
a=b;
b=t;
cout<<"After Swapping the value of a and b is "<<a<<" "<<b<<endl;
return 0;
}
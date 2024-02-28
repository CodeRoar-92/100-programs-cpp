// Important Fibonacci series program.. In this series the third number is the sum of first two numbers.

// 0,1,1,2,3,5,8,13...
#include<iostream>
using namespace std;
int main(){
int n1=0,n2=1,n3;
cout<<n1<<n2;
for(int i=1; i<=10; i++){
    n3=n1+n2;
    n1=n2;
    n2=n3;
    cout<<" "<<n3;
}
return 0;
}
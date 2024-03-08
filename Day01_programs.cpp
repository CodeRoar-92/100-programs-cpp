#include<iostream>
using namespace std;
int main(){
char ch;
cout<<"Enter the character: "<<endl;
cin>>ch;
if((ch >= 'A' && ch<= 'Y') || (ch >='a' && ch<='z')){
    cout<<ch<<" is an Alphabet";
}
else if (ch >='0'&& ch <='9')
{
    cout<<ch<<" is a digit:";

}
else{
    cout<<ch<<" is a special character:";
}
return 0;
}

// porgram #3

#include<iostream>
using namespace std;
#define pi 3,1415;
int main(){
float r,area;
cout<<"Enter radius in centimeters: ";
cin>>r;
area = 2.0 * pi *r;
cout<<"Area is = "<<area;
return 0;
}


// program #3.4;
#include<iostream>
using namespace std;
int main(){
int a=10;
cout<<"The value of a:"<<a<<endl;
a +=5;//a=15;
cout<<"The value of a+=5 is : "<<a<<endl;
a -=5;//a=10;
cout<<"The value of a-=5 is : "<<a<<endl;
a *=5;//a=50;
cout<<"The value of a*=5 is : "<<a<<endl;
a /=5;//a=10;
cout<<"The value of a/=5 is : "<<a<<endl;
a %=5;//a=0;
cout<<"The value of a%=5 is : "<<a<<endl;
return 0;
}

// program #3.6;

// postfix Examples;
#include<iostream>
using namespace std;
int main(){
int x,y,a,b;
x=y=a=b=0;
a++;
x=a;
b++;
y=b;
cout<<"a="<<a<<endl<<"b="<<b<<endl;
cout<<"x="<<x<<endl<<"y="<<y<<endl;
return 0;
}


// program #3.7;

#include<iostream>
using namespace std;
int main(){
int x,y,a,b;
x=y=a=b=0;
x=a++;
cout<<"x= "<<x<<endl;
y=++b;
cout<<"b= "<<y<<endl;
return 0;
}


// program #3.8;
#include<iostream>
using namespace std;
int main(){
int x,y,a,b;
x=y=a=b=0;
x=--a;
y=--b;
cout<<"a="<<a<<endl<<"b="<<b<<endl;
cout<<"x="<<x<<endl<<"y="<<y<<endl;

return 0;
}

// program# 3.9;
#include<iostream>
using namespace std;
int main(){
int x,y,a,b;
x=y=a=b=0;
x=--a;
y=b--;
cout<<"a="<<a<<endl<<"b="<<b<<endl;
cout<<"x="<<x<<endl<<"y="<<y<<endl;
return 0;
}


#include<iostream>
using namespace std;
int main(){
float a,b;
int c;
a=12.4;
b=2.2;
c=(int)a*(int)b;
cout<<"The value of c:"<<c;
return 0;
}

// sizeof "Operator:"
#include<iostream>
using namespace std;
int main(){
cout<<"The size of int is "<<sizeof(int)<<endl;
cout<<"The size of char is "<<sizeof(char)<<endl;
cout<<"The size of float is "<<sizeof(float)<<endl;
cout<<"The size of double  is "<<sizeof(double)<<endl;
cout<<"The size of long is "<<sizeof(long)<<endl;
cout<<"The size of long double is "<<sizeof(long double)<<endl;
return 0;
}
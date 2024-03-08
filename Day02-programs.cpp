program No#1;
 #include<iostream>

using namespace std;
int main(){
int a,b,c,max;
cout<<"Enter the value of a"<<endl;
cin>>a;
cout<<"Enter the value of b"<<endl;
cin>>b;
cout<<"Enter the value of b"<<endl;
cin>>c;
max=a;
if(b>max)
max=b;
if(c>max)
max=c;
cout<<"Maximum number is "<<max;
return 0;
}

program #1

#include<iostream>
using namespace std;
int main(){
int n=10;
char ch='*';
cout<<"Testing output ...";
cout<<n;
cout<<ch;
return 0;
}

program#4.2
#include<iostream>
using namespace std;
int main(){
float a,b,res;
a=24.23;
b=45.67;
res=a+b;
cout<<"Result = "<<res;
return 0;
}

program 4.3

#include<iostream>
using namespace std;
int main(){
int width,height,area;
width=4;
height=5;
area =width*height;
cout<<"Area of rectangle= "<<area;
return 0;
}

program #4.4

#include<iostream>
using namespace std;
int main(){
cout<<"* \n"<<"* * \n"<<"* * * \n"<<"* * * * \n";
return 0;
}

program #4.5;
#include<iostream>
using namespace std;
int main(){
cout<<"1 \t"<<"2 \t"<<"3 \t"<<"4 \t"<<"5 \n"<<"6 \t"<<"7 \t"<<"8 \t"<<"9 \t"<<"10";
return 0;
}

program #4.6;

#include<iostream>
using namespace std;
int main(){
cout<<"Pakistan \t"<<"is \t"<<"my \t"<<"country \n"<<"Islamabad \t"<<"is \t"<<"its \t"<<"capital.";
return 0;
}

program #4.8

#include <iostream>
using namespace std;
int main()
{
    cout << "............." << endl;
    cout << "..........." << endl;
    cout << "............." << endl;
    cout << "..........." << endl;
    cout << "............." << endl;
    cout << "..........." << endl;
    cout << "............." << endl;
    cout << "..........." << endl;
    return 0;
}
program # 4.14;

#include <iostream>
using namespace std;
int main()
{
    char name[24], city[20];
    int age;
    cout << "Enter your age:";
    cin >> age;
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter your city: ";
    cin >> city;
    cout << "Your age is: " << age<<endl;
    cout << "Your name is: " << name<<endl;
    cout << "Your city is: " << city<<endl;
    return 0;
}
#include<iostream>
using namespace std;
int main(){
float width,height,area;
cout<<"Enter the width:";
cin>>width;
cout<<"Enter the height: ";
cin>>height;
area=width*height;
cout<<"Area of rectangle = "<<area;
return 0;
}

program #4.16

#include<iostream>
using namespace std;
int main(){
int a,b,c,d,s,p;
float ave;
cout<<"Enter the 1st letter: ";
cin>>a;
cout<<"Enter the 2nd letter: ";
cin>>b;
cout<<"Enter the 3rd letter: ";
cin>>c;
cout<<"Enter the 4th letter: ";
cin>>d;
s=a+b+c+d;
p=a*b*c*d;
ave =a+b+c+d/4.0;
cout<<"Sum is = "<<s<<endl;
cout<<"Product is = "<<p<<endl;
cout<<"Average is = "<<ave<<endl;
return 0;
}

program #4.17

#include<iostream>
using namespace std;
int main(){
int total_marks,obtained_marks;
float percentage;
cout<<"Enter the Total marks: ";
cin>>total_marks;
cout<<"Enter the Obtained marks: ";
cin>>obtained_marks;
percentage =(float)obtained_marks/(float)total_marks*100;
cout<<"Percentage: "<<percentage;
return 0;
}

#include<iostream>
using namespace std;
int main(){
int p,i,r,t;
cout<<"Enter the principal amount, rate, time"<<endl;
cin>>p>>r>>t;
i=(p*t*r)/100;
cout<<"\n Princpal Amount: "<<p<<endl;
cout<<"\n Rate: "<<r<<"%"<<endl;
cout<<"\n Time: "<<t<<" Yrs"<<endl;
cout<<"Simple Interset amount is: "<<i<<endl;
return 0;
}

program #4.19:
#include<iostream>
using namespace std;
int main(){
char ch;
cout<<"Enter the letter:";
cin>>ch;
int n1=ch;
cout<<"The ASCII for "<<ch<<" is "<<n1<<endl;
return 0;
}

program #4.20;
#include<iostream>
using namespace std;
int main(){
int div,dis,q,r;
cout<<"Enter the Divider & diviser: "<<endl;
cin>>div>>dis;
q =div/dis;
r=div%dis;
cout<<"Qoutient is = "<<q<<endl;
cout<<"Reminder is = "<<r;
return 0;
}
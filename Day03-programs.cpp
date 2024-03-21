#include<iostream>
using namespace std;
int main(){
int marks;
cout<<"Enter the marks:"<<endl;
cin>>marks;
if(marks>=40){

    cout<<"Congralution! you have passed.";
}
return 0;
}

#include<iostream>
using namespace std;
int main(){
int a,b;
cout<<"Enter the two Numbers:";
cin>>a>>b;
if(a==b){
    cout<<"Both Numbers are equal:";
}
return 0;
}

#include<iostream>
using namespace std;
int main(){
int a,b;
cout<<"Enter the Number a:"<<endl;
cin>>a;
cout<<"Enter the number b : "<<endl;
cin>>b;
if( a*a == b){
    cout<<"Second Number is the Square of First Number: ";
}
return 0;
}

#include<iostream>
using namespace std;
int main(){
int marks1,marks2,marks3;
float average_marks;
cout<<"Enter the marks the subject1: "<<endl;
cin>>marks1;
cout<<"Enter the marks the subject2: "<<endl;
cin>>marks2;
cout<<"Enter the marks the subject3: "<<endl;
cin>>marks3;
average_marks = marks1+marks2+marks3/3.0;
if(average_marks > 80 ){
    cout<<"You are above Standard "<<endl;
    cout<<"Addmission granted: ";
}
return 0;
}

Very imporatant Program

Find which one is maximum in above numbers

#include<iostream>
using namespace std;
int main(){
int a,b,c,max;
cout<<"Enter the maximum number: ";
cin>>a>>b>>c;
max =a;
if(b>= max ){
max =b;
}
if(c >= max){
    max =c;
}
cout<<"The maximum value is "<<max;
return 0;
}

#include<iostream>
using namespace std;
int main(){
int a;
cout<<"Enter the number: ";
cin>>a;
if(a > 0){
    cout << a<< " is the Positive Number: ";
}
if ( a< 0){
    cout << a<< " is the Negative Number: ";
}
if( a==0){
    cout<<a<<" is the Zero Number: ";
}
return 0;
}

very Important Program:
#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d, e, max, min;
    cout << "Enter the numbers: ";
    cin >> a >> b >> c >> d >> e;
    max = a;
    if (b > max)
    {
        max = b;
    }
    if (c > max)
    {
        max = c;
    }
    if (d > max)
    {
        max = d;
    }
    if (e > max)
    {
        max = e;
    }
    min = a;
    if (b < min)
    {
        min = b;
    }
    if (c < min)
    {
        min = c;
    }
    if (d < min)
    {
        min = d;
    }
    if (e < min)
    {
        min = e;
    }
    cout << "The largest Number is : " << max << endl;
    cout << "The miminum Number is the " << min << endl;
    return 0;
}

#include<iostream>
using namespace std;
int main(){
int grade;
float salary,total_salary,bonus;
cout<<"Enter the salary: "<<endl;
cin>>salary;
cout<<"Enter the grade: "<<endl;
cin>>grade;
if(grade > 15)
bonus = salary * 50.0/100.0;
else
bonus = salary *15.0/100.0;
total_salary =salary +bonus;
cout<<"Your total salary is "<<total_salary<<" Rs.";
return 0;
}

#include<iostream>
using namespace std;
int main(){
int a,b;
cout<<"Enter the first integer: "<<endl;
cin>>a;
cout<<"Enter the Second integer: "<<endl;
cin>>b;
if(a%b == 0){
    cout<<"First Number is a multiple of second: ";
}
else
cout<<"First Number is not a multiple of second: ";
return 0;
}

#include<iostream>
using namespace std;
int main(){
int score;
cout<<"Enter the score: ";
cin>>score;
if(score >= 90)
cout<<"Your grade is A";
else if(score <= 90 || score >=80){
    cout<<"Your grade is B";}             //Consult with teacher
else if( score <=80 || score >=70)
cout<<"Your grade is C";
else if(score <= 70 || score >=60){
cout<<"Your grade is D";}
else
cout<<"Your grade is F";
return 0;
}

#include <iostream>
using namespace std;
int main()
{
    int units;
    float bill;
    cout << "Enter the units consumed: ";
    cin >> units;
    if (units > 500)
    {
        bill = units * 7.0;
    }
    else if (units > 300)
    {
        bill = units * 5.0;
    }
    else
        bill = units * 2.0;
    bill = bill + 150.0;
    if (bill > 2000)
    {
        bill = bill + (bill * 5.0 / 100.0);
    }
    cout << "Total bill is: " << bill;
    return 0;
}

#include<iostream>
using namespace std;
int main(){
float area,radius,circumference;
int choice;
cout<<"Enter the radius: ";
cin>>radius;
cout<<"Enter the choice: ";
cin>>choice;
if(choice == 1){
    area = radius * radius *3.141;
    cout<<"Area: "<<area;
}
else if( choice == 2){
    circumference = 2 * 3.141 * radius;
    cout<<"Circumfernce : "<<circumference;
} 
else{
    cout<<"Invalid Choice: ";
}
return 0;
}


#include<iostream>
using namespace std;
int main(){
int salary;
float net_worth;
cout<<"Enter your Salary: ";
cin>>salary;
if(salary >= 20000)
    net_worth= salary - (salary * 7.0/100.0);
else if( salary > 10000)
net_worth = salary - 1000;
else 
net_worth =salary;
cout<<"Your total salary = " <<net_worth;
return 0;
}


Decreasing pattern
#include<iostream>
using namespace std;
int main(){
int n=10;
for(int i=1; i<=n; i++){
    for(int j=i;j<=n;j++){
        cout<<" #";
    }
    cout<<endl;
}
return 0;
}


Increasing patterns
#include<iostream>
using namespace std;
int main(){
int n=10;
for(int i=1; i<=n; i++){
    for(int j=1;j<=i;j++){
        cout<<" *";
    }
    cout<<endl;
}
return 0;
}

        #include<iostream>
        using namespace std;
        int main(){
        char ch;
        cout<<"Enter the alphabet: ";
        cin>>ch;
        if(ch == 'A' || ch == 'a' || ch == 'E' || ch == 'e' || ch == 'I' || ch == 'i' || ch == 'O' || ch == 'o' || ch == 'U' || ch == 'u')
        {
            cout<<ch<<" is a vowel alphabet: ";
        }
        else{
            cout<<ch<<" is not a alphabet: ";
        }
        return 0;
        }


        #include<iostream>
        using namespace std;
        int main(){
        int m;
        cout<<"Enter the month: ";
        cin>>m;
        if(m== 1 || m==3 || m==5 ||m==7 || m==8 || m==10 ||m==12){
            cout<<"31 days";
        }
        else if(m==4 || m==6 || m==9 || m==11){
            cout<<"30 days";
        }
        else if(m==2){
cout<<"28 or 29 days: ";
        }
        else{
            cout<<"Invalid month: ";
        }
        return 0;
        }



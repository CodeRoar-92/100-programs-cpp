//Find the vowel from here;
#include<iostream>
using namespace std;
int main(){
    char r;
    cout<<"Enter the letter:";
    cin>>r;
  if(r =='a'  || r=='A' || r=='e' || r=='E' || r=='i' || r=='I' || r=='o' || r=='O' || r=='u' || r=='U')
  {
    cout<<"You Enter the vowel:";}

    else{
        cout<<"You Enter the consonent:";
    }
    return 0;
}

// second methode;

#include <iostream>
using namespace std;
int main()
{
    char r;
    cout << "Enter the Letter:";
    cin >> r;
    switch (r)
    {
    case 'a':
        cout << "Vowel";
        break;
case 'A':
        cout << "Vowel";
        break;
        case 'e':
        cout << "Vowel";
        break;
        case 'E':
        cout << "Vowel";
        break;
        case 'i':
        cout << "Vowel";
        break;
        case 'I':
        cout << "Vowel";
        break;
        case 'o':
        cout << "Vowel";
        break;
        case 'O':
        cout << "Vowel";
        break;
        case 'u':
        cout << "Vowel";
        break;
        case 'U':
        cout << "Vowel";
        break;
    default:
    cout<<"Consonent:";
        break;
    }
    return 0;
}
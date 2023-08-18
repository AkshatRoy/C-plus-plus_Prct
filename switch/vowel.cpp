#include<iostream>
using namespace std;

int main()
{
    char a;
    cout<<"Enter a Character to be checked : ";
    cin>>a;

    switch (a)
    {
    case 'a':
        cout<<"Given charater is a vowel";
        break;

        case 'e':
        cout<<"Given charater is a vowel";
        break;
        
        case 'i':
        cout<<"Given charater is a vowel";
        break;
        
        case 'o':
        cout<<"Given charater is a vowel";
        break;

        case 'u':
        cout<<"Given charater is a vowel";
        break;
    
    default:
    cout<<"A consonant was entered";
        break;
    }

    return 0;
}
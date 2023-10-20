#include <iostream>
using namespace std;

/*
Question -> find out the input alphabet is vowels or consonants

*/
 
int main(){
     char c;
     int isLowerCaseVowel, isUpperCaseVowel;

     cout << "Enter an alphabet ";
     cin  >> c;


 
// Using switch case  have to check
 switch (c){
    case ('a'):
        cout << c << " is a vowel" << endl;
        break;
    case ('e || E'):
        cout << c << " is a vowel" << endl;
        break;
    case 'i'  :
        cout << c << " is a vowel" << endl;
        break;
    case 'o':
        cout << c << " is a vowel" << endl;
        break;
    case 'u':
        cout << c << " is a vowel" << endl;
        break;
    default:
        cout << c << " is a Consonant" << endl;
        break;

 }
 
}
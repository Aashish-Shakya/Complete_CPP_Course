#include <iostream>
using namespace std;

/*
Question -> find out the input alphabet is vowels or consonants

*/

//What I did
// int main(){
//     char ch ;
//     cout << "Enter a alphabet" << endl;
//     cin >> ch ;

//     if( ch == 'a' || ch == 'e'|| ch == 'i' || ch =='o' || ch == 'u'){
//         cout << ch << " is a vaowel" << endl;
//     } else {
//         cout << ch << " is consonant" << endl;
//     }

// }

//Given Solution 
int main(){
     char c;
     int isLowerCaseVowel, isUpperCaseVowel;

     cout << "Enter an alphabet ";
     cin  >> c;

     isLowerCaseVowel = (c == 'a' || c == 'e'|| c == 'i' || c =='o' || c == 'u' );
    
     isUpperCaseVowel = (c == 'A' || c == 'E'|| c == 'I' || c =='O' || c == 'U' );


    if(isLowerCaseVowel || isUpperCaseVowel) {
        cout << c << " is a vowel" << endl;
    }else{
        cout << c << " is a consonants" << endl;
    }

/*
// Using switch case 
 switch (c){
    case 'a':
        cout << c << " is a vowel" << endl;
        break;
    case 'e':
        cout << c << " is a vowel" << endl;
        break;
    case 'i':
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
 */
}
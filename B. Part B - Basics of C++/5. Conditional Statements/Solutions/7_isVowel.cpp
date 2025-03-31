#include <iostream>
using namespace std;

// Program to check if an alphabet is Vowel or a consonant
int main()
{




    char alp;
    int isLowerCaseVowel, isUpperCaseVowel;
    cout << "Enter an alphabet " << endl;
    cin >> alp;

//What I did
/*
    if (alp == 'a' || alp == 'e' || alp == 'i' || alp == 'o' || alp == 'u' || alp == 'A' || alp == 'E' || alp == 'I' || alp == 'O' || alp == 'U')
    {
        cout << " It's a vowel" << endl;
    }
    else
    {
        cout << "It's a consonant" << endl;
    }
*/
    // Given Sol


    isLowerCaseVowel = (alp == 'a' || alp == 'e' || alp == 'i' || alp == 'o' || alp == 'u');
    isUpperCaseVowel = (alp == 'A' || alp == 'E' || alp == 'I' || alp == 'O' || alp == 'U');
    if (isLowerCaseVowel || isUpperCaseVowel)
    {
        cout << " It's a vowel" << endl;
    }
    else
    {
        cout << "It's a consonant" << endl;
    }
    return 0;
}
#include <iostream>
#include <string.h>
using namespace std;

/*

CHARACTER AND ASCII
ASCII -> American standard code of information interchange
A character variable holds ASCII value [integer number b/w 0 to 127 ] rather than that character itself this integer value is called ASCII code of character.

STRINGS  -->
    * Are a sequence of characters
    * Represented as an object of a class std::string
    * String classs store characters as a squence of bytes
    * Aloows user ti access sibgle byte characters


C-STRINGS -->
    * Are implemented as a character array, terminated by a null character['\0']
    * All c strings are char array but not all char array are c-strings
    * Reuires to end with the null character

DISADVANTAGES OF C-STRING
    * Can't track their own size
    * Use of Null charcter is imp.
    * Are of fixed size.
    *  Can't campare/concatenate two strings directly have use functions



STRINGS IN C++  --> std::string
    * ==,<,>,+ is used to compareand concatenate strings
    * Inbuilt method --> compare, append...
    * Also have other interfaces like size(), clear(), ...
    
*/
//Not able to understand this clearly
void replaceBlankWithChar(string &str, char ch){
    int n ;
    while(n = str.find(' ', n) != string::npos ){
        str[n] = ch;
    }
}
int main(){
/*
//C- Strings 
    char arr[100] = "Hello";
    char arr2[100] = "Hello4";

//Below line in not allowed in c++ anymore
    // char *arr3 = "New String";

    cout << strlen(arr) << endl;
    cout << strcmp(arr, arr2) << endl;
    // cout << arr3 << endl;

    for(char ch: arr) {
        cout << (int)ch << endl;
        if((int)ch == 0) break;
        //Ascii value of '\0' is indeed 0
    }
*/

// C++ Strings

//String are object of std::string class
    string s;
    getline(cin, s);

    cout <<"S before: "<< s << endl;
    cout <<s.length() << endl;

    s.push_back('!');
    // s.pop_back
    cout << "S Ater: " << s << endl;
    cout <<s.length() << endl;

    cout << s.substr(1,3 )<< endl;
    string s2(s, 2,2);
    cout <<"S2: " << s2 << endl;

    int pos = s.find('a');
    if( pos == string::npos){
        cout << "Not found" << endl;
    } else{
        cout << "Found: " << pos << " , " << s.at(pos) << endl;
    }

    cout << s.compare(s2) << endl;
    cout << s+ s2 << endl;
    s.append(s2);
    cout << s << endl;



}


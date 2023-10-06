#include <iostream>
#include <iomanip>

#include <ios>
#include <limits>
using namespace std;

int main(){
    int a;
    float b;
    char ch;
    string str;
/*
    cout << "Devtown";
    cout << "Devtown" << endl;

    cout << "Enter a number: " << endl;
    cin >> a;
    cout << a << endl;
    
        
    cout << "Enter numbers: ";
    cin >> b >>a;
    cout <<b << "," << a << endl;
 
//Take only one character
    cout << "Enter Character: ";
    cin >> ch;
    cout << ch << endl;

    cout << "Enter a word: " << endl;
    cin >> str;
    cout << str << endl;

//Getline - used to take input of string with whitespace
// SYntax: getline(cin, variablename, delimator[ends at this point])
    cout << "Enter a Sentence: " << endl;
    // getline(cin, str, '$');
            // OR
    getline(cin, str ); // delimator is newline
    cout << str << endl;

*/

/*
// Special Case -> WHat if we take input of number first then a string
    cout << "Input number : " << endl;
    cin >> a;
    cout << "Input sentence : " << endl;
    getline(cin, str ); 
    cout << a << "," << str << endl;

//Here we can see that Its only take input of Number and skip the string part
// Whatever you type in cosole it is read as stream and stored as a buffer

//Input buffer/stream -> 12<\n> 
// cin >> a ;
//  Input bufer/stream -> <\n>
//  getline(cin, str) -> It ends after new line So we have alredy presrnt that in buffer that's why it skip the string part

// To resolve this we can store that empty character into a new vaiable


    cout << "Input number : " << endl;
    cin >> a;
    cout << "Input sentence : " << endl;
    cin >> ws; // ws is a keyword that take first white space
    getline(cin, str ); 
    cout << a << "," << str << endl;

// What if we take two string one after another using getline, In this case afer dollar symbol if you press something then
// It will store it in new getline variable and u don;t get chance to input, 
// So tp resolve that we use ignore method -> It will clear buffer after dollar symbol and then we are able to give input in next getline method
 
  cout << "Input number : " << endl;
    cin >> a;
    cout << "Input sentence : " << endl;
    cin >> ws;  
    getline(cin, str, '$' ); 
    cout << str << endl;

    cout << "--------------------" << endl;

    cout << "Enter new sentence" << endl;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin, str);
    cout << str << endl;

*/

/*
// ------Manipulators---------
Manipulators -> iomanip library
    Functions that help to modify/formatting output stram
    Some common example -->>
    endl        -> enter new line
    setw(val)   -> set width of field of output operations
    setfill(c)  -> fill leading space of the width with character
    left        -> aligns output to left of width
    right       -> aligns output to right of width

    by defualt its left
*/

    string s = "Aashish";
    cout <<s << endl;

    cout << setw(10) << setfill('#');
    cout <<s << endl;

    cout << setw(20) << setfill('#');
    cout << left << s << endl;
    
    cout << setw(20) << setfill('#');
    cout << right << s << endl;


}

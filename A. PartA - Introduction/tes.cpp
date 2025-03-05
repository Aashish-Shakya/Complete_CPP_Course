#include <iostream>
using namespace std;
/*
<< - Insertion operator - cout
 It inserts data into the output stream (cout), which means it sends the data to the console (screen)

 >> - extraction operator - cin
 It extracts data from an input stream (like cin) and stores it into a variable.

*/
// \n -> endl

int main(){
    string a ;


    cout << "Enter a Sentence: " << endl;
 
    getline(cin, a, ',' ); // whitespace

    cout << a ;

    return 0;

}
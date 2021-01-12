/*
Convert a boolean method to "Yes" if the value is true and then "No" if the value is false.
*/
#include <iostream>
using namespace std;

string boolToWord(bool value){
    return value ? "Yes" : "No";
}

int main(){
    cout << boolToWord(true) << endl;
    cout << boolToWord(false) << endl;
}

//DUPLICATE
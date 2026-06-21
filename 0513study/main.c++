#include <iostream>
#include <string>
using namespace std;

string input_command(){
    string input_string;
    getline(cin, input_string);
    return input_string;
}

int main(){

    string get_input = input_command();
    cout << get_input << endl;

    return 0;
}
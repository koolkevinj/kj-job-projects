#include <iostream>
#include <string>
using namespace std;

string removeVowels(string& input){
    string result;
    for (char ch : input){
        if(ch != 'a' && ch != 'A' && ch != 'e' && ch != 'E' && ch != 'i' && ch != 'I' && ch != 'o' && ch != 'O' && ch != 'u' && ch != 'U' && ch != ' '){
            result += ch;
        }
    }
    return result;
}
int main(){
    string inputString;
    cout << "Enter a string: ";
    getline(cin, inputString);

    string resultString = removeVowels(inputString);
    cout << "String without vowels: '" << resultString << "'" << endl;
}
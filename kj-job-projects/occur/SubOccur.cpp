#include <iostream>
#include <string>
using namespace std;

int main() {
    string parent;
    string child;
    int occurrences = 0;
    int pos = 0;

    cout << "Enter parent string: ";
    std::getline(std::cin,parent);  //cin doesn't work by itself if spaces/tabs/etc is entered
    
    //If the child string is empty (when the user just typed enter)
    //the find command returns 0 instead of string::npos and the loop below never exists
    while(child.empty()) {
        cout << "Enter substring: ";
        std::getline(std::cin,child);
    }

    while((pos = parent.find(child, pos)) != string::npos) {
        occurrences++;
        pos += child.length();
    }
    cout << "Number of occurrences: " << occurrences << endl;
}
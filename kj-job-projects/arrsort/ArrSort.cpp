#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    cout << "Enter the size of the array: ";
    size_t size;
    cin >> size;


    vector<int> num(size);
    cout << "Enter " << size << " numbers: " << endl;
    for(size_t i = 0; i < size; i++){
        cin >> num[i];
    }

    sort(num.begin(), num.end());

    for(int j = 0; j < num.size(); j++){
        cout << num[j] << " ";
    }
    cout << endl;

    for(size_t i = 0; i < num.size(); i += 1){
        num.erase(num.begin() + i);
    }

    cout << "Array after every second element removed: ";
    for(int number : num){
        cout << number << " ";
    }
    cout << endl;
}
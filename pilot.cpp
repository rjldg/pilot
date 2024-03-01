#include <iostream>

using namespace std;

int main(){

    cout << "This is a string of text" << endl;

    int n;

    cout << "Enter a number: "; cin >> n;

    for(int i = 0; i < n; ++i){
        cout << "This is another string of text" << endl;
    }

    return 0;
}
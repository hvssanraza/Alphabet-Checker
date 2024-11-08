#include <iostream>
using namespace std;

int main() {
    char ch;

    cout<<"Enter an Alphabet: "<<endl;
    cin>> ch;

    if (ch >= 65 && ch <= 90) {
        cout<<"Entered Alphabet " << ch << " is an uppercase letter."<<endl;
    }
    else if (ch >= 97 && ch <= 122) {
        cout<<"Entered Alphabet " << ch << " is a lowercase letter."<<endl;
    }
    else {
        cout<<"Entered value " << ch<< " is not an Alphabet"<<endl;
    }

    return 0;
}

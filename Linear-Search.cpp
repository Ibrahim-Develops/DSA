#include <iostream>

using namespace std;

int main() {
    int SearchElement;
    int Array[4] = {5, 4, 8, 1};
    cout << "Enter Value: ";
    cin >> SearchElement;
    bool found = false;
    
    for (int i = 0; i < 4; i++) {
        if (SearchElement == Array[i]) {
            cout << "Value is at Index: " << i << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Not found" << endl;
    }
}

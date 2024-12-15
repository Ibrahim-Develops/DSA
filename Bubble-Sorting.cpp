#include <iostream>

using namespace std;

int main() {
    
    int Array[4] = {5,4,8,1};  
    int temp;
    
    for (int i = 0; i < 4 - 1; i++) {
        for (int j = 0; j < 4 - i - 1; j++) {

            if (Array[j] > Array[j + 1]) {
                temp = Array[j];
                Array[j] = Array[j + 1];
                Array[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < 4; i++) {
        cout << Array[i] << " ";
    }


    // int Array[10];
    // int temp;

    // cout << "Enter 10 values for the array:" << endl;
    // for (int i = 0; i < 10; i++) {
    //     cin >> Array[i];
    // }

    // for (int i = 0; i < 10 - 1; i++) {
    //     for (int j = 0; j < 10 - i - 1; j++) {
    //         if (Array[j] > Array[j + 1]) {
    //             temp = Array[j];
    //             Array[j] = Array[j + 1];
    //             Array[j + 1] = temp;
    //         }
    //     }
    // }

    // cout << "Sorted array:" << endl;
    // for (int i = 0; i < 10; i++) {
    //     cout << Array[i] << " ";
    // }
}




#include <iostream>
using namespace std;

int main() {
    int Array[4] = {5, 4, 8, 1};
    int temp;
    
    for (int i = 0; i < 4 - 1; i++) {
        int minIndex = i;  
        for (int j = i + 1; j < 4; j++) {
            if (Array[j] < Array[minIndex]) {
                minIndex = j;  
            }
        }
        if (minIndex != i) {
            temp = Array[i];
            Array[i] = Array[minIndex];
            Array[minIndex] = temp;
        }
    }
    for (int i = 0; i < 4; i++) {
        cout << Array[i] << " ";
    }
}

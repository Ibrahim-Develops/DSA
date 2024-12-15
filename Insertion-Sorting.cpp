#include <iostream>

using namespace std;

int main() {
    
    int Array[4] = {5, 4, 8, 1};
    int temp;
    int j;

    for (int i = 1; i < 4; i++) { 
        temp = Array[i];
        j = i - 1;
        while (j >= 0) {
            if (temp < Array[j]) {
                Array[j + 1] = Array[j];  
                j--;
            }   
            else{
                break;
            }
        }
        Array[j + 1] = temp;  
    }
    for (int i = 0; i < 4; i++) {
        cout << Array[i] << " ";
    }
}



#include <iostream>

using namespace std;

int main() {

    int Array[4] = {2,5,1,4};
    int temp;

    for (int i = 0; i < 3; i++){
        for(int j = 3; j > i; j--){

            if(Array[j] < Array[j-1]){
                temp = Array[j];
                Array[j] = Array[j-1];
                Array[j-1] = temp;
            }
        }
    }
    for(int k = 0; k < 4; k++){
        cout << Array[k] << " ";
    }
}
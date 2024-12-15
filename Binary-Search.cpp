#include <iostream>
#include <algorithm>

using namespace std;

int BS(int A[], int N, int item) {
    int loc = -1;
    int B = 0;
    int E = N - 1;
    int mid;

    while (B <= E) {
        mid = (B + E) / 2;
        if (item == A[mid]) {
            loc = mid;  
            break;
        }
        else if (item > A[mid]) {
            B = mid + 1;
        }
        else {
            E = mid - 1;
        }
    }
    return loc;
}

int main() {
    int A[4] = {5, 4, 8, 1};
    int N = sizeof(A) / sizeof(A[0]);
    sort(A, A + N);
    int item = 4;
    int result = BS(A, N, item);

    if (result != -1) {
        cout << "Item found at index " << result << endl;
    } else {
        cout << "Item not found" << endl;
    }
}

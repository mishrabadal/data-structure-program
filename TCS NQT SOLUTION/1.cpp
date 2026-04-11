#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;   // Number of packets

    int arr[N];
    
    // Input array elements
    for(int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int result[N];
    int index = 0;

    // Step 1: Copy all non-zero elements
    for(int i = 0; i < N; i++) {
        if(arr[i] != 0) {
            result[index] = arr[i];
            index++;
        }
    }

    // Step 2: Add zeros at the end
    while(index < N) {
        result[index] = 0;
        index++;
    }

    // Output the result
    for(int i = 0; i < N; i++) {
        cout << result[i] << " ";
    }

    return 0;
}

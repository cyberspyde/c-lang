#include <stdio.h>

void rev(int arr[], int n){
    int i, temp_arr[n];

    for(i = 0; i < n; i++){
        temp_arr[i] = arr[n - 1 - i];
    }

    for(i = 0; i < n; i++){
        arr[i] = temp_arr[i];
    }

}

int main(){

    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    rev(arr, n);

    for (int i = 0; i < n; i++){
        printf("%d, ", arr[i]);
    }
    return 0;
}
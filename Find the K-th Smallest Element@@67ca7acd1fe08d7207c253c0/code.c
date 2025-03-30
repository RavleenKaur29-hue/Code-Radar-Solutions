void sortArray(int arr[], int n) {
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to find the k-th smallest element
int kthSmallest(int arr[], int n, int k) {
    sortArray(arr, n);  // Sorting the array
    return arr[k - 1];  // Return k-th smallest element
    for (int i = 0; i < n ; i++){
    if(k!=arr[i]){
        return -1;
}
    }
}
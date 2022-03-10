// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
    int i = 0, j = size - 1, count  = 0; // i - левая граница массива, j - правая, count - счетчик
    while(i < j) {
        int mid = i + (j - i) / 2;
        if(arr[mid] == value)
            count+=1;
        else if(arr[mid] > number)
            j = mid;
        else
            i = mid + 1;
    }
    return count;
}

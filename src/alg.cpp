// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
    int i = 0, j = size - 1, count  = 0;
    while (i < j) {
        int mid = i + (j - i) / 2;
        if (arr[mid] == value) {
            //count+=1;
            i = mid;
            while (arr[i] == value) {
                i--;
            }
            while (arr[j] != value) {
                j--;
            }
            while (i < j) {
                count++;
                i++;
            }
        } else if (arr[mid] > value)
            j = mid;
        else
            i = mid + 1;
    }
    return count;
}

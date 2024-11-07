#include<stdio.h>

//selection sort without function

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    //selection sort
    for(int i = 0; i < n - 1; i++) {
        int min = i;
        for(int j= i + 1; j < n; j++) {
            if (arr[min] > arr[j]) 
            {
                min = j;
            }
            
        }
        if (min != i)
        {
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
        
    }

    printf("Sorted array in ascending order:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
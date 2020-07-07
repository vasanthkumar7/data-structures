#include<stdio.h>
#include<stdlib.h>

void product_subarrays(int arr[], int n)
{
    // Variable to store the product
    int product = 1;

    // Compute the product while
    // traversing for subarrays
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            for (int k = i; k <= j; k++)
            {
                  product *= arr[j];
            }
        }
    }

    printf("%d ",product);

    // Printing product of all subarray

}

int main()
{

    int arr[]={10,3,7};
    product_subarrays(arr, 3);

}

// #include<stdio.h>


#define MAX_VALUE 1000

int main(){

    int arr[] = {3, 1, 5, 2, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 9;


    int hash[MAX_VALUE] = {0};

    for( int i = 0; i < size; i++){
       int complement = target  - arr[i];

       if(complement >=0 && complement < MAX_VALUE && hash[complement]){
          printf("pair foundL %d and %d\n", complement, arr[i]);
          printf("sum: %d\n", target);

       }
       hash[arr[i]] = 1;


    }
    printf("No pair found that sums to %d", target);
    return 0;
}
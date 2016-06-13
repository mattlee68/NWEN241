int main(void){
    int arr1[5];
    int arr2[] = {1,2,3,4,5};
    int arr3[] = {1,2,3,4,5};

    arrayAdd(arr1,arr2,arr3, 5);
    int i;
    for(i = 0; i < 5; i++){
        printf("%d ", arr1[i]);
    }
}

void arrayAdd(int *arr1, int *arr2, int *arr3, int arr_size){
    int i;
    for(i = 0; i < arr_size; i++){
        *(arr1+i) = *(arr2 + i) + *(arr3 + i);
    }
}


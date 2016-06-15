#include <stdio.h>

float max_diff(const float *, int);

int main(void){
    float arr[] = {1.2,2.2,4.5,0.3,9.9,6.5};
    printf("%f", max_diff(arr, 6));
}

float max_diff(const float *a, int n){
    int i;
    float min = 9999;
    float max = -9999;
    for(i = 0; i < n; i++){
        if(a[i] < min){
            min = a[i];
        }
        if(a[i] > max){
            max = a[i];
        }
    }
    return max - min;
}

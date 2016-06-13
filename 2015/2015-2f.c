int main(void){
    char a[2][10] = {"black", "red"};
    swap(*a, *(a+1));
    printf("%s, %s\n", *a, *(a+1));
    return 0;
}

void swap(char str1[], char str2[]){
    int i;
    for(i = 0; i < 10; i++){
        char temp = str1[i];
        str1[i] = str2[i];
        str2[i] = temp;
    }
}

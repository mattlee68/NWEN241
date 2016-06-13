int main(void){
    char a1[] = "black";
    char a2[] = "white";
    swap(a1, a2);
    printf("%s, %s \n", a1, a2);
    return 0;
}

void swap(char a1[], char a2[]){
    int i;
    for(i = 0; a1[i] != '\0'; i++){
        char temp = a1[i];
        a1[i] = a2[i];
        a2[i] = temp;
    }
}

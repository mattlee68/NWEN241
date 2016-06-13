int main(void){
    printf("%d", string_length("testing"));
    return 0;
}

int string_length(char *str){
    int i = 0;
    while(str[i] != '\0'){
        i++;
    }
    return i;
}

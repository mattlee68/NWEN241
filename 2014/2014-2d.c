int func(char c, const char *str);

int main(void){
    printf("%d", func('c', "NWEN241c"));
}

int func(char c, const char *str){
    int i;
    for(i = 0; str[i] != '\0'; i++){
        if(str[i] == c){
            return 1;
        }
    }
    return 0;
}

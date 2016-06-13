int main(void){
    char *str = "Monday";
    func(str);
}

void func(char *str){
    while(*str != '\0'){
        printf("%s, ", str);
        *str++;
    }
}

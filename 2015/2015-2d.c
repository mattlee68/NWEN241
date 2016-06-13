int main(void){
    char str[] = "apple";
    strSearch('a', str);
    printf("%s", str);
}

void strSearch(char c, char str[]){
    int i;
    for(i = 0; str[i] != '\0'; i++){
        if(str[i] == c){
            str[i] = 'F';
        }
    }
}

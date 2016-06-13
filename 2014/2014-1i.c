typedef struct{
    int age;
    char gender;
    char *name;
}Person;

typedef union{
    int i;
    char c;
    char *p;
}int_char;

int main(void){
    printf("%d ", sizeof(Person));
    printf("%d ", sizeof(int_char));
}

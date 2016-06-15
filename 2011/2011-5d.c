#include <stdio.h>

void removeEs(FILE *, FILE *);

int main(int argv, char **argc){
    FILE *f_read = fopen(argc[1], "r");
    FILE *f_write = fopen(argc[2], "w");
    removeEs(f_read, f_write);
    fclose(f_read);
    fclose(f_write);
    return 0;
}

void removeEs(FILE *f_read, FILE *f_write){
    char c;
    while((c=fgetc(f_read)) != EOF){
        if(c == 'e' || c == 'E'){
        }else{
            fprintf(f_write, "%c", c);
        }
    }
}

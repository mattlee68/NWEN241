#include <stdio.h>

int main(int argc, char *argv[]){
    FILE *f_read = fopen(argv[1], "r");
    FILE *f_write = fopen(argv[2], "w");

    char c;

    while((c = fgetc(f_read)) != EOF){
        fprintf(f_write, "%c", c);
    }
    fclose(f_read);
    fclose(f_write);
    return 0;
}

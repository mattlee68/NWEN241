#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]){
    FILE *f_read = fopen(argc[1], "r");
    FILE *f_write = fopen(argc[2], "w");
    char c;
    while((c = fgetc(f_read)) != EOF){
        fprintf(f_write, "%c", c);
    }
    fclose(f_read);
    fclose(f_write);
}

#include <stdio.h>

int round_me(float);

int main(void){
    int i;
    float f = 3.1;
    i = round_me(f);
    return i;
}

int round_me(float f){
    return (int) (f < 0 ? f - 0.5: f + 0.5);
}

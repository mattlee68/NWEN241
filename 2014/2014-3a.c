#include <stdlib.h>

typedef enum {metric, imperial} Scale;

typedef struct{
    int feet;
    int inches;
}FeetAndInches;

typedef union{
    float metres;
    FeetAndInches feetandinches;
}Value;

typedef struct{
    Scale scale;
    Value reading;
}Height;

int main(void){
    Height *h = malloc(sizeof(Height));
    h->scale = imperial;
    h->reading.feetandinches.feet = 6;
    h->reading.feetandinches.inches = 5;
    tometres(h);
    printf("%d\n", h->scale);
    printf("%f\n", h->reading.metres);
}

void tometres(Height *h){
    h->reading.metres = (h->reading.feetandinches.feet * 0.3048) + (h->reading.feetandinches.inches * 0.0254);
    h->scale = metric;
}

#include <stdlib.h>
#include <stdio.h>

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
    printheight(*h);
    tometres(h);
    printheight(*h);
}

void printheight(Height h){
    if(h.scale == metric){
        printf("%fm\n", h.reading.metres);
    }else{
        printf("%d foot %d in.\n", h.reading.feetandinches.feet, h.reading.feetandinches.inches);
    }
}

void tometres(Height *h){
    h->reading.metres = (h->reading.feetandinches.feet * 12 * 0.0254) + (h->reading.feetandinches.inches * 0.0254);
    h->scale = metric;
}

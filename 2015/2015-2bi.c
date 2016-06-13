int main(void){
    int m[4][4] = {{0,1,2,3},{4,5,6,7},{8,9,10,11},{12,13,14,15}};
    int (*p)[4] = m;
    printf("%d ", m[0][0]);
    printf("%d ", **m);
    printf("%d ", *(*m+3));
    printf("%d ", *(m[2]+2));
    printf("%d ", (*(m+2))[3]);
    printf("%d ", (*(p+2))[2]);
}

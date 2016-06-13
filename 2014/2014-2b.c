int main(void){
    char m[5][7] = {"abcdef", "ghijkl", "mnopqr", "stuvwx", "yz"};
    char (*p)[7] = m;

    printf("%c ", **m);
    printf("%c ", *(*m+2));
    printf("%c ", *(*(m+1)+1));
    printf("%c ", *(m[1] + 2));
    printf("%c ", (*(m+2))[3]);
    printf("%c ", (*(p+3))[2]);
    p++;
    printf("%d ", (int)p - (int)m);
}

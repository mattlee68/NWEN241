#include <stdio.h>

#define Node_Size sizeof(node)

typedef struct node{
    char data;
    struct node *next;
}Node;

int main(int argc, char **argv){
    //FILL WITH APPROPRIATE METHOD
}

void writelisttofile(Node *node){
    FILE *fp;
    if((fp = fopen("list.dat", "w")) == NULL){
        fprintf(stderr, "file %s could not be opened.\n", "list.dat");
    }else{
        for(; node != NULL; node->next){
            fwrite(node, Node_Size, 1, fp);
        }
        fclose(fp);
    }
}

void readlistfromfile(Node *node){
    FILE *fp = fopen("list.dat", "r");
    Node n;

    while(!feof(fp)){
        fread(&node, Node_Size, 1, fp);
        if(!feof(fp)){
            fprintf(fp, "%c\t%h\n", n.data, n.next);
        }
    }
    fclose(fp);

}

#include <stdio.h>
#include <stdlib.h>

#define Node_Size sizeof(Node)

typedef struct node{
    char data;
    struct node *next;
}Node;

typedef Node *ptrNode;

ptrNode createlisti(char *);
ptrNode createlistr(char *);
void printList(ptrNode);

int main(void){
    ptrNode mylisti = createlisti("testing");
    printList(mylisti);
    printf("\n");

    ptrNode mylistr = createlisti("recursion");
    printList(mylistr);
    return 0;
}

ptrNode createlisti(char *str){
    ptrNode head = malloc(Node_Size);
    head->data = str[0];
    head->next = NULL;
    ptrNode prev = head;
    int i;
    for(i = 1; str[i] != '\0'; i++){
        ptrNode node = malloc(Node_Size);
        node->data = str[i];
        node->next = NULL;
        prev->next = node;
        prev = node;
    }
    return head;
}

ptrNode createlistr(char *str){
    if(str[0] == '\0'){return NULL;}
    ptrNode node = malloc(Node_Size);
    node->data = str[0];
    node->next = &str[1];
    return node;
}

void printList(ptrNode node){
    for(; node != NULL; node = node->next){
        printf("%c\n", node->data);
    }
}

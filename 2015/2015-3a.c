#include <stdlib.h>

#define char_node_size sizeof(ToBePacked)
typedef struct ToBePacked ToBePacked;
typedef ToBePacked *ptrToBePacked;

ptrToBePacked charList(char *);

struct ToBePacked{
    char data;
    ptrToBePacked next;
};

int main(void){
    char *str = "testing";
    ptrToBePacked head = charList(str);
    printList(head);
}

ptrToBePacked charList(char *str){
    ptrToBePacked head = malloc(char_node_size);
    head->data = str[0];
    head->next = NULL;
    ptrToBePacked prev = head;
    int i;
    for(i = 1; str[i] != '\0'; i++){
        ptrToBePacked node = malloc(char_node_size);
        node->data = str[i];
        node->next = NULL;
        prev->next = node;
        prev = node;
    }
    return head;
}

void printList(ptrToBePacked node){
    for(; node != NULL; node = node->next){
        printf("%c\n", node->data);
    }
}

#include <stdlib.h>

#define char_node_size sizeof(ToBePacked)
#define int_node_size sizeof(Packed)
typedef struct ToBePacked ToBePacked;
typedef ToBePacked *ptrToBePacked;
typedef struct Packed Packed;
typedef Packed *ptrPacked;

ptrToBePacked charList(char *);
ptrPacked packCharacters(ptrToBePacked p);

struct Packed{
    int data;
    ptrPacked next;
};

struct ToBePacked{
    char data;
    ptrToBePacked next;
};

int main(void){
    char *str = "test";
    ptrToBePacked head = charList(str);
    printList(head);
    int val = packCharacters(head);
    printf("%d", val);
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


ptrPacked packCharacters(ptrToBePacked p){
    //shit this is bad code
    int val = 0;
    val |= (p->data);
    val |= (p->next->data) << 1;
    val |= (p->next->next->data) << 2;
    val |= (p->next->next->next->data) << 3;
    ptrPacked head = malloc(int_node_size);
    head->data = val;
    head->next = NULL;
    free(p->next->next->next);
    free(p->next->next);
    free(p->next);
    free(p);
    return head;
}

void printList(ptrToBePacked node){
    for(; node != NULL; node = node->next){
        printf("%c\n", node->data);
    }
}



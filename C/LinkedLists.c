#include <stdio.h>
#include <stdlib.h>

struct LinkedList { 
    int data; 
    struct LinkedList* next; 
};

int main() 
{

struct LinkedList* head = NULL;
struct LinkedList* second = NULL;
struct LinkedList* third = NULL;
struct LinkedList* fourth = NULL;

head = (struct LinkedList*) malloc(sizeof(struct LinkedList));
second = (struct LinkedList*) malloc(sizeof(struct LinkedList));
third = (struct LinkedList*) malloc(sizeof(struct LinkedList));
fourth = (struct LinkedList*) malloc(sizeof(struct LinkedList));

head -> data = 1;
head -> next = second;

second -> data = 5;
second -> next = third;

third -> data = 8;
third -> next = fourth;

fourth -> data = 90;
fourth -> next = NULL;

printf("%d \n",head->data);
printf("%d \n",second->data);
printf("%d \n",third->data);
printf("%d \n",fourth->data);

    return 0;
}

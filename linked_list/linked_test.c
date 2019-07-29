#include<stdio.h>
#include"linked.h"


void printList(LinkedList* list){
    for(Node* i=list->head;i;i=i->next){
        printf("\n%d",i->value);
    }
}


void main(){

    
    LinkedList* list;
    list=new_linked_list();
    int v=pop_list(list);
    printf("\nValue %d",v);
  
    push_list(list,3);
  
    push_list(list,5);
    push_list(list,1);
    push_list(list,4);
    push_list(list,0);
    push_list(list,8);
    push_list(list,7);
    printList(list);
     v=pop_list(list);
    printf("\nValue %d",v);
    printList(list);
    printf("\nLength is %d",length_list(list));
    delete_list(list);




}
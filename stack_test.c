#include"linked_list/stack.h"
#include<stdio.h> 
 void main(){
     BasicStack* s;
     s=new_basic_stack(5);
     push_basic_stack(s,10);
     push_basic_stack(s,11);
     push_basic_stack(s,12);
     push_basic_stack(s,13);
     push_basic_stack(s,14);
     printf("\nPrinting Top\t%d\n",top_basic_stack(s)); 

    int x;
     for(;x=pop_basic_stack(s);){
         
         printf("\t%d",x);
     
     }

     delete_basic_stack(s);
 }
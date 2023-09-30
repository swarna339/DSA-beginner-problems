#include <stdio.h>
#include <stdlib.h>
struct node{ //node creation
    int data;
    struct node *next;
};
// struct node *head; //head creation
int size=0; //LL size

void insertatbegin( struct node **head , int d){                  //head for ref and data
    // struct node *t=head;
    struct node *new_node=(struct node *)malloc(sizeof(struct node)); //new node creation
    new_node->data=d;                                   //assigning data 
    new_node->next=*head;        // pointing to head
    *head=new_node;       //making it to head 
    size++;
    
}
void insertatend(struct node **head,int d){
    struct node *t=*head;
    struct node *new_node=(struct node *)malloc(sizeof(struct node));
    new_node->data=d;
    new_node->next=NULL;
    while(t->next!=NULL){
        t=t->next;
    }
    t->next=new_node;
    size++;
    
}
void insertatposition(int pos , int d, struct node **head){
    struct node *t=*head;
    struct node *new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=d;
     new_node->next=NULL;
    if(pos<1 || pos>size+1){
        printf("INVALID");
    }
   
    while(--pos>1){
        t=t->next;
    }
    new_node->next=t->next;
    t->next=new_node;
    size++;
}
void display( struct node *node){
     
    while(node!=NULL){
        printf("%d->",node->data);
        node=node->next;
    }
    printf("NULL");
    printf("\n");
    
}
void deleteatbegin(struct node **head){
    struct node *t=*head;
    if(*head==NULL){
        printf("EMPTY LIST");
    }
    *head = (*head)-> next;
    free(t);
    size--;
}
void deleteatend(struct node **head){
    struct node *t =  *head;
    struct node *prev;
    if(*head==NULL){
        printf("EMPTY LIST");
    }
    if(t -> next ==NULL){
        *head=NULL;
        return;
    }
    while(t -> next != NULL){
        prev=t;
        t = (t)->next;
    }
    prev->next=NULL;
    free(t);
}
void deleteatposition(int pos,struct node **head){
    struct node *t= *head;
    struct node *prev;
    if(pos<1||pos>size+1){
        printf("INVALID");
    }
    while(--pos){
        prev=t;
        t=t->next;
    }
    prev->next=t->next;
    free(t);
    
}
int main()
{
    struct node *head=NULL;
    
    insertatbegin(&head,3);
    insertatbegin(&head,7);
    display(head);
    insertatend(&head,8);
    display(head);
    insertatposition(2,9,&head);
    display(head);
    deleteatbegin(&head);
    display(head);
    deleteatend(&head);
    display(head);
    insertatbegin(&head,10);
    insertatbegin(&head,4);
    deleteatposition(3,&head);
    display(head);
}

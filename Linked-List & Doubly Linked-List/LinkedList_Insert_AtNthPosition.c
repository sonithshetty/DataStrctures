#include<stdlib.h>
#include<stdio.h>

struct Node{
  int data;
  struct Node* next;
};

struct Node* head;

void Insert(int data, int n){
  struct Node* temp = (struct Node*)malloc(sizeof(struct Node*));
  temp->data = data;
  temp->next = NULL;
  if(n==1){
    temp->next = head;
    head = temp;
    return;
    //printf("%d ", temp->data);
    //return;
  }
  struct Node* temp1 = head;
  for(int i=0; i<n-2; i++){
    temp1= temp1->next;
  }
  temp->next=temp1->next;
  temp1->next = temp;
  //printf("%d ", temp->data);
}

void Print(){
  struct Node* temp = head;
  //temp = head;
  while(temp!=NULL){
    printf("%d ", temp->data);
    temp = temp->next;
  }
  printf("\n");
}

int main(){
  head = NULL;
  Insert(2,1);
  Insert(3,2);
  Insert(4,1);
  Insert(5,2);
  Print();
}
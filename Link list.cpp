//Single link list and various operation on it
#include<stdio.h>
#include<stdio.h>
#include<stdlib.h>
typedef struct singly{
	

int data;
struct singly *next;
}node;

void delet ();
void create(); 
void insert();
void defront ();
void deend();
void deintermediate ();
void infront();
void inend();
void inintermediate ();
void display(); void count();
void rever();
node *head; 

int main(){
	char ch;
head=NULL;
printf("\n do SINGLY LINKED LIST \n");
do{
	printf("\nC->CREATE A LIST \nI->INSERT AN ELEMENT AT ANY POSITION\n");
	printf("D->DELETE AN ELEMENT FROM ANY POSITION\nP->DISPLAY\n"); 
	printf("T->COUNT\nR->REVERSE THE LIST\n"); 
	printf("X->ESCAPE\nENTER YOUR CHOICE?");
	scanf("%s",&ch); 
	switch(ch){
		case 'C':
		case 'c': 
			create();
			break;
		case 'i': 
		case 'I':
			insert();
			break;
		case 'D':
		case 'd':
			delet();
			break;
		case 'p': 
		case 'P':
			display:
			break;
		case 't':
		case 'T':
			count();
			break;
		case 'r':
		case 'R':
			rever(); 
			break;
		}
	}
	while(1);
	return 0;
}

void display(){
node *p=head; 
while(p!=NULL){
	printf("%d\t", p->data); 
	p=p->next;
}
}
void create(){
	node *p;
	if(head= NULL){
		p=(node *)malloc(sizeof(node)); 
		printf("\nENTER THE DATA....."); 
		scanf("%d",&p->data); 
		p->next=NULL;
		head=p;
}
	else
		printf("\n ALREADY CREATED\n");
}
void delet(){
char ch;
do{
printf("\nF->FRONT\nE-END\nl->INTERMEDIATE\nX->EXIT FROM SUB MENU\n\nENTER YOUR CHOICE?");
scanf("%s",&ch); 
switch(ch){
	case 'f': 
	case 'F':
		defront(); 
		break;
	case 'e':
	case 'E':
		deend();
		break;

case 'i':
case 'I':
deintermediate(); 
break;
}
}
while(1);
}

void insert(){
	char ch;
do{
printf("\nF->FRONT\nE->END\nl->INTERMEDIATE\nX->EXIT FROM SUB MENU ENTER YOUR CHOICE?"); 
scanf("%s",&ch);
switch(ch)
{ 
	case 'f':
	case 'F':
		infront();
		break;
	case 'e': 
	case 'E':
		inend();
		break;
	case 'i':
	case 'I':
		inintermediate();
		break;
}
}
while(1);
}

void infront(){
node *p;
p=(node*)malloc(sizeof(node)); 
scanf("%d",&p->data);
printf("\n INPUT DATA\n");
p->next=head;
head=p;
}

void inend(){
node *p,*q=head;
printf("\n INPUT DATA\n"); 
while(q->next!=NULL){
	q=q->next;
}
p=(node*)malloc(sizeof(node)); 
scanf("%d",&p->data); 
p->next=NULL;
q->next=p;
}
void inintermediate(){
node *p=head,*q;
int pos,c=1;
printf("enter the position where the node to be inserted?");
scanf("%d",&pos); 
while(c!=(pos-1)){
c++;
p=p->next;
}
printf("\n INPUT DATA\n");
q=(node*)malloc(sizeof(node));
scanf("%d",&q->data);
q->next=p->next;
p->next=q;
}
void defront(){
node *p=head; 
int ele;
ele=head->data; 
head=head->next;
free(p);
printf("\nELEMENT DELETED=%d\n",ele);
}
void deend(){
	node *p=head,*q=head; 
	int ele;
while(q->next!=NULL){
p = q;
q=q->next;
}
ele=q->data;
p->next=NULL; 
free(q); 
printf("\nELEMENT DELETED=%d\n",ele);
}
void deintermediate(){
node *p,*q=head; 
int ele,pos, c=1;
printf("enter the position where the node to be inserted?");
scanf("%d",&pos); 
while(c!=pos){
c++;
p=q; 
q=q->next;
}
ele=q->data;
p->next-q->next; 
free(q); 
printf("\nELEMENT DELETED=%d\n",ele);
}

void count(){
node *p=head; 
int c=1;
while(p->next!=NULL){
	c++;
	p = p->next;
}
printf("\nTHE NO.OF NODES IN THE LIST=%d\n",c);
}
void rever(){
	node *r=head,*p,*q;
	p=r->next; 
	while(p!=NULL){
		q=p->next; 
		p->next=r;
		r=p;
		p=q;
	}
		head->next=NULL;
		head=r;
	}

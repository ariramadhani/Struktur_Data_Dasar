#include <stdio.h>
#include <stdlib.h>
int main(){
typedef struct TNode{
int nim;
TNode *next;
TNode *prev;
TNode *data;
}*head;
TNode *baru;
baru = new TNode;
baru ->data = NULL;
baru ->next = NULL;
baru->prev = NULL;
int isEmpty() {
if(head==NULL) return 1;
else return 0;
}
void tambahdata (int databaru){
TNode *baru;
baru = new TNode;
baru -> data = databaru;
baru -> next = NULL;
baru -> prev = NULL;
if (isEmpty()==1) {
head=baru;
head->next=NULL;
head->prev=NULL;
}
else {
baru->next=head;
head->prev=baru;
head=baru;
}
printf("data masuk");
}
void insertBelakang (int databaru){
TNode *baru,*bantu;
//digunakan untuk mengetahui data terbelakang
baru = new TNode;
baru->data = databaru;
baru->next = NULL;
baru->prev = NULL;
if(isEmpty()==1){
head=baru;
head->next = NULL;
head->prev = NULL;
}
else {
bantu=head;
while(bantu->next!=NULL){
bantu=bantu->next;
}
bantu->next = baru;
baru->prev = bantu;
}
printf("data masuk");
}
void tampil(){
TNode *bantu;
bantu = head;
if(isEmpty()==0){
while(bantu!=NULL){
printf("%i ",bantu->data);
bantu=bantu->next;
}
printf("\n");
}
else printf("Masih Kosong");
}
void hapusDepan (){
TNode *hapus;
int d;
if (isEmpty()==0){
if(head->next != NULL){
hapus = head;
d = hapus->data;
head = head->next;
head->prev = NULL;
delete hapus;
} else {
d = head->data;
head = NULL;
}
prinf("%i terhapus",d);
} else printf("Masih Kosong");
}
void hapusBelakang(){
TNode *hapus;
int d;
if (isEmpty()==0){
if(head->next != NULL){
hapus = head;
while(hapus->next!=NULL){
hapus = hapus->next;
}
d = hapus->data;
hapus->prev->next = NULL;
delete hapus;
} else {
d = head->data;
head = NULL;
}
printf("%i terhapus",d);
} else printf("Masih Kosong");
}
    return 0;
}

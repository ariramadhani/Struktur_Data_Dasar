#include <stdio.h>
#include <conio.h>

typedef struct Node{
int data;
	Node *kiri;
	Node *kanan;
}*atas;

void tambah(Node **root,int databaru){
if((*root) == NULL){
	Node *baru;
	baru = new Node;
	baru->data = databaru;
	baru->kiri = NULL;
	baru->kanan = NULL;
		(*root) = baru;
		(*root)->kiri = NULL;
		(*root)->kanan = NULL;
	printf("Data bertambah!");
}
else if(databaru < (*root)->data)
	tambah(&(*root)->kiri,databaru);
else if(databaru > (*root)->data)
	tambah(&(*root)->kanan,databaru);
else if(databaru == (*root)->data)
	printf("Data sudah ada!");
}

void preOrder(Node *root){
if(root != NULL){
	printf("%d ",root->data);
	preOrder(root->kiri);
	preOrder(root->kanan);
}
}

void inOrder(Node *root){
if(root != NULL){
	inOrder(root->kiri);
	printf("%d ",root->data);
	inOrder(root->kanan);
}
}

void postOrder(Node *root){
if(root != NULL){
	postOrder(root->kiri);
	postOrder(root->kanan);
	printf("%d ",root->data);
}
}

int hitung(Node *root)//untuk menghitung jumlah node
{
if(root==NULL)
   return 0;
   else;
   return hitung(root->kiri)+ hitung(root->kanan)+1;
}

void main(){
int pil,c;
	Node *pohon,*t;
	pohon = NULL;
do{
clrscr();

int data;
	printf("MENU\n");
	printf("1. Tambah\n");
	printf("2. Lihat pre-order\n");
	printf("3. Lihat in-order\n");
	printf("4. Lihat post-order\n");
   printf("5. Jumlah Node\n");
	printf("6. Exit\n");
	printf("Pilihan : ");
   scanf("%d",&pil);

   switch(pil){

   case 1: printf("Data baru : ");
   	scanf("%d", &data);
		tambah(&pohon,data);
		break;
	case 2: if(pohon!=NULL)
   	preOrder(pohon);
		else
		printf("Masih kosong!");
		break;
	case 3: if(pohon!=NULL)
   	inOrder(pohon);
		else
      printf("Masih kosong!");
		break;
	case 4: if(pohon!=NULL)
   	postOrder(pohon);
		else
      printf("Masih kosong!");
		break;
   case 5: if(pohon!=NULL)
   	printf("\nJumlah Node = %d", hitung(pohon));
      else
      printf("Masih Kosong!");
   	getch();
      break;
}

getch();
}while(pil!=6);
}

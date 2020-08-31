#include <stdio.h>
#include <stdlib.h>
struct node
{
int info;
struct node *ptr;
}*top,*top1,*temp;
int elemen_atas();
void push(int data);
void pop();
void empty();
void tampil();
void musnahkan();
void hitung_stack();
void buat();
int hitung = 0;
void main()
{
int no, ch, e;
printf("\n 1 - Push");
printf("\n 2 - Pop");
printf("\n 3 - Top");
printf("\n 4 - Kosong");
printf("\n 5 - Keluar");
printf("\n 6 - Tampilkan");
printf("\n 7 – hitung stack");
printf("\n 8 - Musnahkan stack");
buat();
while (1)
{
printf("\n Masukan pilihan : ");
scanf("%d", &ch);
switch (ch)
{
case 1:
printf("Masukan data: ");
scanf("%d", &no);
push(no);
break;
case 2:pop();
break;
case 3:
if (top == NULL)
printf("Tidak ada elemen dalam stack");
else
{
e = elemen_atas();
printf("\n Elemen Atas/Top : %d", e);
}
break;
case 4:
empty();
break;
case 5:
exit(0);
case 6:
tampil();
break;
case 7:
hitung_stack();
break;
case 8:
musnahkan();
break;
default :
printf(" Pilihan salah, Masukan pilihan yang benar ");
break;
}
}
}
/* Membuat stack kosong */
void buat()
{
top = NULL;
}
/* Menghitung Elemen stacks */
void hitung_stack()
{
printf("\n No. elemen dalam stack : %d", hitung);
}
/* Push data into stack */
void push(int data)
{
if (top == NULL)
{
top =(struct node *)malloc(1*sizeof(struct node));
top->ptr = NULL;top->info = data;
}
else
{
temp =(struct node *)malloc(1*sizeof(struct node));
temp->ptr = top;
temp->info = data;
top = temp;
}
hitung++;
}
/* Menampilkan elemen stack */
void tampil()
{
top1 = top;
if (top1 == NULL)
{
printf("Stack kosong");
return;
}
while (top1 != NULL)
{
printf("%d ", top1->info);
top1 = top1->ptr;
}
}
/* Operasi Pop pada stack */
void pop()
{
top1 = top;
if (top1 == NULL)
{
printf("\n Error : Coba POP dari stack kosong ");
return;
}
else
top1 = top1->ptr;
printf("\n Nilai yg di POP : %d", top->info);
free(top);
top = top1;
hitung--;
}
/* Kembali elemen atas/ TOP */
int elemen_atas()
{return(top->info);
}
/* Mengecek jika stack kosong atau tidak ada */
void empty()
{
if (top == NULL)
printf("\n Stack kosong");
else
printf("\n Stack tidak kosong dengan %d elemen", hitung);
}
/* Musnahkan seluruh stack */
void musnahkan()
{
top1 = top;
while (top1 != NULL)
{
top1 = top->ptr;
free(top);
top = top1;
top1 = top1->ptr;
}
free(top1);
top = NULL;
printf("\n seluruh elemen stack di musnahkan");
hitung = 0;
}

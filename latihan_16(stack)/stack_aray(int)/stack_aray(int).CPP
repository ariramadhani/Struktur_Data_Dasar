#include <stdio.h>
#include <conio.h>
#define UKURAN 10
int ar[UKURAN];
int top1 = -1;
int top2 = UKURAN;
//Fungsi untuk push data
void push_stack1 (int data)
{
if (top1 < top2 - 1)
{
ar[++top1] = data;
}
else
{
printf ("Stack penuh! Tidak dapat di Push\n");
}
}
void push_stack2 (int data)
{
if (top1 < top2 - 1)
{
ar[--top2] = data;
}
else
{
printf ("Stack Penuh! Tidak dpt di Push\n");
}
}//Fungsi untuk pop data
void pop_stack1 ()
{
if (top1 >= 0)
{
int Nilai_Pop = ar[top1--];
printf ("%d sudah di POP dari Stack 1\n", Nilai_Pop);
}
else
{
printf ("Stack Kosong! Tidak dapat di Pop\n");
}
}
void pop_stack2 ()
{
if (top2 < UKURAN)
{
int Nilai_Pop = ar[top2++];
printf ("%sudah di POP dari Stack 2\n", Nilai_Pop);
}
else
{
printf ("Stack Kosong! Tidak dapat di Pop\n");
}
}
//Fungsi untuk mencetak Stack 1 dan Stack 2
void print_stack1 ()
{
int i;
for (i = top1; i >= 0; --i)
{
printf ("%d ", ar[i]);
}
printf ("\n");
}
void print_stack2 ()
{
int i;
for (i = top2; i < UKURAN; ++i)
{
printf ("%d ", ar[i]);
}
printf ("\n");
}main()
{
int ar[UKURAN];
int i;
int jml_elemen;
printf ("Dapat di push total 10 nilai \n");
//Jumlah elemen di push dalam stack 1 adalah 6
// Jumlah elemen di push dalam stack 2 adalah 4
for (i = 1; i <= 6; ++i)
{
push_stack1 (i);
printf ("Nilai telah di push dalam Stack 1 adalah %d\n", i);
}
for (i = 1; i <= 4; ++i)
{
push_stack2 (i);
printf ("Nilai telah di push dalam Stack 2 adalah %d\n", i);
}
//mencetak kedua Stacks
print_stack1 ();
print_stack2 ();
//Stack penuh
printf ("Nilai yang di push dalam Stack 1 adalah %d\n", 11);
push_stack1 (11);
//Seluruh elemen yang di pop dari Stack 1
jml_elemen = top1 + 1;
while (jml_elemen)
{
pop_stack1 ();
--jml_elemen;
}
//coba untuk POP dari stack kosong
pop_stack1 ();
 getch();
 return 0;
}

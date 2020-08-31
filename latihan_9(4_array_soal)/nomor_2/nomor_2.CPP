#include <stdio.h>
#include <conio.h>
void main()
{
int a[10]; //mendeklarasikan variavel tipe array
int i,total,rata;
//Masukkan data ke var array dengan memanfaatkan looping for
 printf("\tAri Ramadhani");
 printf("\n\t2016230037\n\n");
for(i=0;i<=9;i++)
{
printf("Masukkan data integer untuk a[%d] :",i);scanf("%d",&a[i]);
}
//Menghitung total pada array dengan looping for
total=0;
for(i=0;i<=9;i++)
{
total=total+a[i];
}
//mencetak data array dengan looping for
for(i=0;i<=9;i++)
printf("\nData pada var a indeks yang ke-%d adalah : %d",i,a[i]);
printf("\n\nTotal data tersebut adalah : %d",total);
rata=total/10;
printf("\n rata rata\t= %d",rata=int(total/10));
getch();
}
#include <stdio.h>
#include <conio.h>
void main()
{
int a[1000]; //mendeklarasikan variavel tipe array
int i=1,total=0,rata,n;
//Masukkan data ke var array dengan memanfaatkan looping for
 printf("\tAri Ramadhani");
 printf("\n\t2016230037\n\n");
printf("Masukkan jumlah data :");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("Masukkan data integer untuk a[%d] :",i);scanf("%d",&a[i]);
}
//Menghitung total pada array dengan looping for
total=0;
for(i=1;i<=n;i++)
{
total=total+a[i];
}
//mencetak data array dengan looping for
for(i=1;i<=n;i++)
printf("\nData pada var a indeks yang ke-%d adalah : %d",i,a[i]);
printf("\n\nTotal data tersebut adalah : %d",total);
rata=total/n;
printf("\n rata rata\t= %d",rata=int(total/n));
getch();
}

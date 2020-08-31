#include <stdio.h>
#include <conio.h>
main(){
int bil_A,bil_B;
printf("\tAri Ramadhani");
printf("\n\t2016230037\n\n");
printf("Masukan bilangan_A  =");
scanf("%d",&bil_A);
printf("Masukan bilangan_B  =");
scanf("%d",&bil_B);
if(bil_A < bil_B)
printf("\n%d Lebih kecil dari %d", bil_A,bil_B);
if(bil_A > bil_B)
printf("\n%d Lebih besar dari %d", bil_A,bil_B);
if(bil_A==bil_B)
printf("\n%d Sama dengan %d", bil_A,bil_B);
if(bil_A%2==0)
printf("\n%d Adalah bilangan genap",bil_A);else
printf("\n%d Adalah bilangan ganjil",bil_A);
if(bil_B%2==0)
printf("\n%d Adalah bilangan genap",bil_B);else
printf("\n%d Adalah bilangan ganjil",bil_B);
getch();
}




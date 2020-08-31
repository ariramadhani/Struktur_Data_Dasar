#include <stdio.h>
#include <conio.h>
void main(){
int a,r=100;
printf("Ari Ramadhani (WHILE)");
printf("\nMasukan angka: ");
scanf("%d",&a);
{
while(r>=a)
printf("\n%d - %d = %d",r--,r-a,a);
}
getch();
}


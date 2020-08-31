#include <stdio.h>
#include <conio.h>
void main(){
int a,r;
printf("Ari Ramadhani (WHILE)");
printf("\nMasukan angka: ");
scanf("%d",&a);
{
while(r<=a)
printf("\n%d + %d = %d",r++,a--,r+a);
}
getch();
}

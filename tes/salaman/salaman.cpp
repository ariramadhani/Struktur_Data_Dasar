 #include <stdio.h>
#include <conio.h>
void main(){
int a,b,r=1,i,j,k=0,t=0;
printf("Ari Ramadhani");
printf("\n \n \n \n Masukan orang dalam acara: ");
scanf("%d",&a);
	for(r;r<=a;r++){
	//printf("\n-------orang ke %d ",r);
   i=a;
   for(r;r<=i;k++){
      if(r!=i){
   		printf("\n--- orang ke %d jabat tangan dengan orang ke %d ",r,i--);
         t++;
         }else{
      	i--;
	 		}
	   }
	}
   printf("\n total berjabat tangan ada %d",t);
getch();
}
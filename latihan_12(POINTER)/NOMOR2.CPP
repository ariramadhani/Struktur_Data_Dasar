#include <stdio.h>
#include <conio.h>
int main(){
char S[] = "TEKNIK INFORMATIKA";
char *p;
//cara 1
//langsung menunjuk nama array.
 printf("\tAri Ramadhani");
 printf("\n\t2016230037\n\n");
 p=S;
for(int i=0;i<18;i++){
printf("%c",*p);
p++;
}
printf("\n");
//cara 2
p=&S[0];
for(int i=0;i<18;i++){
printf("%c",*p);
p++;
}
printf("\n");
//Membalik kalimat
p++;
p=&S[4];
for(int i=0;i<1;i++){
printf("%c",*p);
p++;
}
printf("\n");
getch();
}


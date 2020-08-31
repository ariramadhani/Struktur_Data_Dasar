#include <stdio.h>
#include <conio.h>

float rata2(float);

main()
{
int i, gagal=0, lulus=0, nilai, tinggi=0, rendah=100;
float rata, total;


for (i=1;i!=0;)
{
	printf("\nMasukkan Nilai Anda (Ketik 0 untuk selesai) = ");
	scanf("%d", &nilai);
   	if (nilai==0) {
      	break; }
   	if(nilai<=100 && nilai>=0)
      {
      lulus++;

   total=total+nilai;
   i++;
   }

}
rata=total/(i-1);
printf("-------------------------------------------------\n\n");
printf("\nNilai Total = %2.f", total);
printf("\n==SELESAI==\n");
getch();
return 0;
}



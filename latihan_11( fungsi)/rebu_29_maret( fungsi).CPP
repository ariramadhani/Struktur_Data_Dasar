#include <stdio.h>
#include <conio.h>
float rata2 (float);
main()
{	int i, gagal=0, lulus=0;
	float rata, total, nilai;
{ printf("\tAri Ramadhani");
 printf("\n\t2016230037\n\n");
for (i=1; i!=0;)
{	printf("\nInput Nilai (Ketik -1 untuk selesai) :");
	scanf ("%f", &nilai);
	{		if (nilai ==-1) break;
		else if (nilai <=100 && nilai >=0)
			{
				if(nilai <=100 && nilai >=60)
				{
					printf("\nLulus\n");
				}
				else
					{
					printf ("\nGagal\n");
					}
			total=total+nilai;
			i++;
			}
			else printf ("\nAnda Salah Memasukkan Nilai, Silahkan Input Lagi\n");
		}
	}
}
rata=total/(i-1);
printf ("========================================\n\n");
printf ("\n\nNilai Rata-rata	:%.2f", rata);
getch();
}
float rata2(float rata){
	return rata;
}
#include <stdio.h>

int main()
{
	int celcius;
	float fahrenhit, reamur;
	
	printf("PROGRAM KONVERSI SUHU SEDERHANA \n\n");
	printf("input suhu dalam celcius:");
	scanf("%i",&celcius);
	
	fahrenhit = (celcius*1.8)+32;
	reamur = (celcius*0.8);
	
	printf("fahrenhit = %.1f F\n", fahrenhit);
	printf("reamur = %.1f R\n",reamur);
	
	return 0;
}

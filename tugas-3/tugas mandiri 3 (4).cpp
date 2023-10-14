#include <stdio.h>
#include <math.h>

int main()
{
	float alas,tinggi,sisimiring;
	
	printf("masukan panjang sisi alas (cm):");
	scanf("%f",&alas);
	
	printf("masukan panjang sisi tinggi (cm):");
	scanf("%f",&tinggi);
	
	sisimiring = (alas*2+tinggi*2);
	
	printf("panjang sisi miring segitiga siku siku adalah: %.2f cm\n",sisimiring);
	
	return 0;
	
}

#include <iostream>
using namespace std;

int main ()
{
	float c,r,f;
	printf ("\nProgram Konversi Suhu");
	printf ("\nMasukkan nilai celcius : ");
	scanf ("%f", &c);
	r=4*c/5;
	f=9/5*c + 32;
	printf ("\nHasil Konversi Suhu ke Reamur adalah : %.2f",r);
	printf ("\nHasil Konversi Suhu ke Fahrenhit adalah : %.2f",f);
	
	return 0;
	
}

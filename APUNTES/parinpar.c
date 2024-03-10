#include <stdio.h>
#include <stdlib.h>

main()
{
	system("COLOR 6F");
	int a,b,c,impar,par,ed,ef,eg;
	printf("Digite tes numeros enteros\n");
	scanf("%d %d %d", &a, &b, &c);
	impar = ((a%2)+(b%2)+(c%2));
	par = 3-impar;
	ed=(a%2);
	ef=(b%2);
	eg=(c%2);
	printf("\nHay %d numero(s) impar(es)", impar);
	printf("\nHay %d numero(s) par(es)", par);
	printf("\nporque el modulo de una division entera 0 es par y 1 impar");
	printf("\nentonces el primer numero su residuo es %d el segundo numero su residuo %d el tercer numero su residuo %d\n", ed, ef, eg);
	system("pause");
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

typedef struct Coordo Coordo
struct Coordo
{
	float x;
	float y;
	float z;
};

typedef struct Parametre Parametre
struct Parametre
{
	float sigma;
	float rho;
	float beta;
	float Tmax;
	float dt;
};

void Creation_Parametre(Parametre *par)
{
	
	printf("Entrez les parametres sigma, rho, beta\n");
	
	printf("Sigma : ");
	scanf ("%f",&par.sigma);
	printf("\n");
	printf("Rho : ");
	scanf ("%f",&par.rho);
	printf("\n");
	printf("Beta : ");
	scanf ("%f",&par;beta);
	printf("\n");
	
	printf("Entrez le Tmax et l'incrementation dt");
	
	printf("Tmax : ");
	scanf ("%f",&par.Tmax);
	printf("\n");
	printf("dt : ");
	scanf ("%f",&par.dt);
}


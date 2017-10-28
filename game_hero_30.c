#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int pil1,pil2, i,sems;
	int pemain1,pemain2;
struct main
{
	int power;
	int attack;
	int defence;
	
};
struct main p[50];

void pembuka()
{
	i = 0;
	while (i<5)
	{
		p[i].power=200;
		i++;
	}
	p[0].attack=50;p[1].attack=40;p[2].attack=60;p[3].attack=50;p[4].attack=30;
	p[0].defence=28;p[1].defence=45;p[2].defence=48;p[3].defence=29;p[4].defence=56;
	printf("\t\t\tSELAMAT DATANG DI GAME PRAKTIKUM 1\n\n");
	printf("Tabel Karakter Beserta Dengan Atributnya :\n");
	printf(" ===============================================\n");
	printf("|        |  A   |  B	|  C    |  D    |  E	|\n");
	printf(" ===============================================\n");
	printf("| Power  | %d	|  %d	|  %d	|  %d	|  %d	|\n",p[0].power,p[1].power,p[2].power,p[3].power,p[4].power);
	printf("| Attack | %d	|  %d	|  %d	|  %d	|  %d	|\n",p[0].attack,p[1].attack,p[2].attack,p[3].attack,p[4].attack);
	printf("| Defence| %d   |  %d   |  %d   |  %d   |  %d   |\n",p[0].defence,p[1].defence,p[2].defence,p[3].defence,p[4].defence);
	printf(" ===============================================\n");
}
int main()
{
	pembuka();
	printf("Pilih Pemain Yang Ingin Digunakan : ");
	printf("\nPemain Pertama : "); scanf("%d",&pemain1);
	printf("\nPemain Kedua : "); scanf("%d",&pemain2);
	
	pemain1 = pemain1-1 ;//karena indeks dari pemain1 dimulai dari 0
	pemain2 = pemain2 -1 ;//karena indeks dari pemain2 dimulai dari 0

	while (p[pemain2].power > 0 && p[pemain1].power > 0)
	{
			printf(" ===================================\n");
			printf("|        |  Pemain1   |  Pemain2	|\n");
			printf(" ===================================\n");
			printf("| Power  |     %d	   |     %d    	|\n",p[pemain1].power,p[pemain2].power);
			printf("| Attack |     %d      |     %d	    |\n",p[pemain1].attack,p[pemain2].attack);
			printf("| Defence|     %d      |     %d     |\n",p[pemain1].defence,p[pemain2].defence);
			printf(" ===================================\n");
		printf("Apakah Anda Ingin : \n\t1. SERANG \n\t2. BERTAHAN\n");
		printf("\nPemain1	: "); scanf("%d",&pil1);
		p[pemain1].power=p[pemain1].power-10;
		if(pil1==1)
		{
			printf("\nPemain Pertama memilih untuk menyerang !!");
		}
		else if (pil1==2)
		{
			printf("\nPemain Pertama memilih untuk bertahan !!");
		}
		else 
		{
			printf("\nInputan Salah !");
			system("cls");
			getch();
			main();
		}
		printf("\nPemain2 :"); scanf("%d",&pil2);
		p[pemain2].power=p[pemain2].power-10;
		if(pil2==1)
		{
			printf("\nPemain Pertama memilih untuk menyerang !!");
		}
		else if (pil2==2)
		{
			printf("\nPemain Pertama memilih untuk bertahan !!");
		}
		else 
		{
			printf("\nInputan Salah !");
			system("cls");
			getch();
			main();
		}
		if(pil1==1 && pil2==1)
		{
			if(p[pemain1].attack > p[pemain2].defence)
			{
				sems = p[pemain1].attack - p[pemain2].defence;
				p[pemain2].power = p[pemain2].power-sems;
			}
			else if(p[pemain2].attack > p[pemain1].defence)
			{
				sems = p[pemain2].attack - p[pemain1].defence;
				p[pemain1].power = p[pemain1].power-sems;
			}
		}
		else if(pil1==1 && pil2==2)
		{
			if(p[pemain1].attack > p[pemain2].defence)
			{
				sems = p[pemain1].attack - p[pemain2].defence;
				p[pemain2].power = p[pemain2].power-sems;
			}
		}
		else if(pil1==2 && pil2==1)
		{
			if(p[pemain2].attack > p[pemain1].defence)
			{
				sems = p[pemain2].attack - p[pemain1].defence;
				p[pemain1].power = p[pemain1].power-sems;
			}
		}	
	}
	
	if(p[pemain1].power > p[pemain2].power)
	{
		printf("\n\n\n\t\t\tPEMAIN 1 MENANG !!");
	}
	else if(p[pemain1].power<p[pemain2].power)
	{
		printf("\n\n\n\t\t\tPEMAIN 2 MENANG !!");
	}
	else if(p[pemain1].power=p[pemain2].power)
	{
		printf("\n\n\n\t\t\tPERMAINAN SERI");
	}
	
	return 0;;
}


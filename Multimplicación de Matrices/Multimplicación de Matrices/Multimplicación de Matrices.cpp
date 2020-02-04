#include<iostream>
#include<stdio.h>
#include<conio.h>

int main(int argc, char* argv[])
{
	float matriz_1[10][10], matriz_2[10][10], multiplicacion[10][10];
	int i, j, k, L, M, N;
	
	printf_s(" ESTE PROGRAMA MULTIPLICA DOS MATRICES.");
	printf_s("\n\n Introduzca el numero de filas de la matriz 1: ");
	scanf_s("%d", &N);
	printf_s("\n\n Introduzca el numero de columnas de la matriz 1 y filas de la matriz 2: ");
	scanf_s("%d", &M);
	printf_s("\n\n Introduzca el numero de columnas de la matriz 2: ");
	scanf_s("%d", &L);
	printf_s("\n\n Introduzca los valores de la MATRIZ 1: \n");
	
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < M; j++)
		{
			printf_s(" Matriz 1 [%d][%d]= ", i, j);
			scanf_s("%f", &matriz_1[i][j]);
		}
	}
	
	printf_s("\n Introduzca los valores de la MATRIZ 2: \n");
	
	for (i = 0; i < M; i++)
	{
		for (j = 0;j < L;j++)
		{
			printf_s(" Matriz 2 [%d][%d]= ", i, j);
			scanf_s("%f", &matriz_2[i][j]);
		}
	}
	
	printf_s("\n Matriz 1: ");
	
	for (i = 0; i < N; i++)
	{
		printf_s("\n");
		for (j = 0; j < M; j++)
		{
			printf_s("%12.2f", matriz_1[i][j]);
		}
	}
	
	printf_s("\n\n Matriz 2: ");
	
	for (i = 0; i < M; i++)
	{
		printf_s("\n");
		for (j = 0; j < L; j++)
		{
			printf_s("%12.2f", matriz_2[i][j]);
		}
	}

	printf_s("\n\n Multimplicacion de las matrices: ");

	for (i = 0; i < N; i++)
	{
		printf_s("\n");
		for (j = 0; j < L; j++)
		{
			multiplicacion[i][j] = 0;
			for (k = 0;k < M;k++)
			{
				multiplicacion[i][j] = (multiplicacion[i][j] + (matriz_1[i][k] * matriz_2[k][j]));
			}
			printf_s("%12.2f", multiplicacion[i][j]);
		}
	}

	printf_s("\n\n");
	printf_s("\n\n");
}
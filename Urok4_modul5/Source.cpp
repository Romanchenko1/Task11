#include<stdio.h>
#include<iostream>
#include<time.h>
#include<locale.h>
#include<stdlib.h>


void task1()
{
//2.Ввести два массива действительных чисел, состоящих из 7 и  9 элементов
//Сформировать третий массив из упорядоченных по убыванию значений обоих массивов
	int arr1[7] = { 0 };
	int arr2[9] = { 0 };
	int arr3[16] = { 0 };
	for (int i = 0; i < 7; i++)
	{
		arr1[i] = 1 + rand() % 200;
		arr3[i] = arr1[i];
	}
	for (int i = 0; i < 9; i++)
	{
		arr2[i] = 1 + rand() % 200;
		arr3[i + 7] = arr2[i];
	}
	for (int i = 0; i < 16; i++)
	{
		for (int j = 16 - 1; j > i; j--)
		{
			if (arr3[j - 1] > arr3[j])
			{
				int s = arr3[j - 1];
				arr3[j - 1] = arr3[j];
				arr3[j] = s;
			}
		}
	}
	for (int i = 15; 0 <= i; i--)
	{
		printf("arr[%d]->%d\n", i, arr3[i]);
	}
}


void task2()
{
//3.Ввести массив, в котором только два одинаковых элемента.Определить их местоположение.
	int arr[8] = {1,2,3,4,5,6,7,2};
	int same1 = 0;
	int i;
	for (i = 0; i < 8; i++)
	{
		if (arr[1]==arr[i])
		{
			same1=i;
		printf("Местоположение одинаковых элементов->%d\n", same1);	
		}
	}
}
  


void task3()
{
//4.Задан целочисленный массив.Определить, образуют ли значения его элементов геометрическую прогрессию
//Если «да» – вывести знаменатель прогрессии, если «нет» – ответ «не образуют».
	const int n = 10;
	double a[n];
	printf("Введите массив:\n");
	for (int i = 0; i < n; i++)
	{
		printf("->");
		scanf_s("%d", &a[i]);
	}
	const double s = 1e-3;
	for (int i = 1; i < n - 1; i++)
	{
		if (fabs(a[i] * a[i] - a[i - 1] * a[i + 1]) > s)
		{
			printf("Да\n");
		}
		else
		{
			printf("Нет\n");
		}
	}
}

//#define N 3
//#define M 4
void task4()
{
//5.Отсортировать по убыванию элементов последнего столбца целочисленный двухмерный массив 5×4
	int mat[3][4] = { {0},{0} };
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 4; j++)
		{
			mat[i][j] = 0 + rand() % 10;
		}
	int col = 4 - 1;
	for (bool g = true; g; ) 
	{
		g = false;
		for (int i = 1; i < 3; ++i) 
		{
			if (mat[i - 1][col] < mat[i][col]) 
			{
				for (int j = 0; j < 4; ++j)
					std::swap(mat[i - 1][j], mat[i][j]);
				g = true;
			}
		}
	}
	for (int i = 0; i < 3; ++i)
	{
		
		for (int j = 0; j < 4; ++j)
		
			printf("%d\n\t%d\t%d\t%d\n",i,mat[i],j,mat[j]);
		
	}
}


void task5()
{
//6.В матрице А(3 - строки, 4 - столбца) поменять местами наименьшие элементы в первой и третей строке.
	int A[3][4] = { {7,8,9,12},{56,78,54,78},{6,35,1,4} };
	int min1 = A[0][0];
	int min2 = A[0][0];
	int i, j;
	for ( i = 0; i < 1; i++)
		for  (j = 0;j < 4;j++)
		{
			if (min1>A[i][j])
			{
				min1 = A[i][j];
				A[i][j] = min2;
			}
		}
	for (i = 0; i < 3; i++)
		for (j = 0; j < 4; j++)
		{
			if (min2 > A[i][j])
			{
				min2 = A[i][j];
				A[i][j] = min1;
			}
		}
	for (i = 0; i < 3; i++)
		for (j = 0; j < 4; j++)
		{
			printf("%3d", A[i][j]);
			printf("\n");
		}	

}


void task6()
{
//7.Дан двухмерный массив 5×6.Определить среднее арифметическое каждого столбца, определить максимум и минимум каждой строки.
	int Mat[5][6];
	float A[6];
	int Min[5];
	int Max[5];
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			Mat[i][j] = rand() % 61 - 10;
			printf("Mat[%d][%d]", Mat[i][j]);
		}
	}
	for (int j = 0; j < 6; j++)
	{
		float n = 0;
		for (int i = 0; i < 5; i++)
		{
			n += Mat[i][j];
		}
		A[j] = n / 5;
		printf("A[%d]\n", A[j]);
	}
	for (int i = 0; i < 5; i++)
	{
		Min[i] = Mat[i][0];
		Max[i] = Mat[i][0];
		for (int j = 0; j < 6; j++)
		{
			if (Min[i] > Mat[i][j])
			{
				Min[i] = Mat[i][j];
			}
			if (Max[i] < Mat[i][j])
			{
				Max[i] = Mat[i][j];
			}
		}
	}
	for (int i = 0; i < 5; i++)
	{
		printf("min%d\n", Min[i]);
	}
	for (int i = 0; i < 5; i++)
	{
		printf("Max[%d]\n", Max[i]);
	}
}


#define N1 3
#define M1 5
void task7()
{
//8.Дан двухмерный массив n×m элементов, найти количество четных и нечетных чисел в массиве
	int arr[N1][M1];
	int i, j;
	int even=0;
	int odd=0;
	for (i = 0; i < N1; i++)
		for (j = 0; j < M1; j++)
		{
			arr[i][j] = rand() % 20;
		}
	for (i = 0; i < N1; i++)
	{
		for (j = 0; j < M1; j++)
			printf("%3d", arr[i][j]);
		printf("\n");
	}
	for (i = 0; i < N1; i++)
	{
		for (j = 0; j < M1; j++)
			if (arr[i][j]%2==0)
			{
				even++;
			}
			else
			{
				odd++;
			}
	}
	printf("В массиве %d четных чисел\n",even);
	printf("И %d нечетных чисел\n", odd);
}



void task8()
{
//9.Дан двухмерный массив n ×m элементов.Определить, сколько раз встречается число 7 среди элементов массива.
	int arr[5][8];
	int i, j;
	int count;
	for (i = 0; i < 5; i++)

		for (j = 0; j < 8; j++)
		{
			arr[i][j] = rand() % 20;
		}
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 8; j++)
			printf("%3d", arr[i][j]);
		printf("\n");
	}
	count = 0;
	for (i = 0; i < 5; i++)
	{

		for (j = 0; j < 8; j++)
			if (7 == arr[i][j])
			{
				count++;
			}
	}
	printf("Число 7 встречается %d раза\n", count);
}


#define N 6
#define M 8
void task9()
{
//10.Дан массив из n × m элементов.Найти индексы первого наименьшего  элемента массива
	int arr[N][M], i, j;
	int min;
	int indexN = 0;
	int indexM = 0;
	for (i = 0; i < N; i++)
	
		for (j = 0; j < M; j++)
		{
			arr[i][j] = rand() % 100;
		}
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < M; j++)
			printf("%3d", arr[i][j]);
		printf("\n");
	}
	min = arr[0][0];
	for (i = 0; i < N; i++)
	{
		
		for (j = 0; j < M; j++)
			if (min>arr[i][j])
			{
				indexN = i;
				indexM = j;
			}
	}
	printf("Индексы первого наименшего элемента\n");
		printf("\n%d\t%d",indexN,indexM);
		printf("\n");
}


int main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));
	int task;
	int flag;
start:
	printf("Введите номер задания");
		scanf_s("%d", &task);
	switch (task)
	{
	case 1: {task1(); }break;
	case 2: {task2(); }break;
	case 3: {task3(); }break;
	case 4: {task4(); }break;
	case 5: {task5(); }break;
	case 6: {task6(); }break;
	case 7: {task7(); }break;
	case 8: {task8(); }break;
	case 9: {task9(); }break;
	default:
		break;
	}
	printf("Чтобы продлжить нажмите (1)->");
	scanf_s("%d", &flag);
	if (flag==1)
	{
		goto start;
	}
	system("pause");
}
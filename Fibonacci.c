#include <stdio.h>
#include <conio.h>
#include <locale.h>
// Вычисление чисел Фибоначчи

// Первые два числа последователности Фиббоначи равны 0 и 1 соответственно
// Остальные получаются суммой двух последних чисел данной последовательности
int Fibonacci(int i)
{
	if (i <= 1) // Если у нас первое в последовательности то функция вернет 0, если число второе то 1
		return i;
	else // Иначе будут вычисляться в рекурсии два последних числа, и функция будет возвращать их сумму
		return Fibonacci(i-1) + Fibonacci(i-2);
}

void main()
{
	int N;
	int a, b;
	int i;

	setlocale(LC_ALL,"Russian");

	printf("Введите сколько чисел вычислять: ");
	scanf("%d", &N);

	for (i=0; i < N; i++)
		printf ("%d ", Fibonacci(i));

	_getch();
}

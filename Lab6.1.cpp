#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void Create(int* b, const int size, const int A, const int B)
{
	for (int i = 0; i < size; i++)
		b[i] = A + rand() % (B - A + 1);
}
void Print(int* b, const int size)
{
	for (int i = 0; i < size; i++)
		cout << setw(4) << b[i] ;
	cout << endl;
}

int Sum(const int* const b, const int size)
{
	int S = 0;
	for (int i = 0; i < size; i++)
		if (b[i] % 3 != 0 || b[i] % 2 == 0)
			S += b[i];
	return S;
}

int Count(const int* const b, const int size)
{
	int a = 0;
	for (int i = 0; i < size; i++)
		if (b[i] % 3 != 0 || b[i] % 2 == 0)
			a++;
	return a;
}
void Replacement(int b[], const int size)
{
	for ( int i = 0; i < size; i++)
	{
		if (b[i] % 3 != 0 || b[i] % 2 == 0)
			b[i] = 0;
	}
}


int main()
{
	srand((unsigned)time(NULL)); 
	const int n = 21;
	int b[n];
	int A = 10;
	int B = 90;
	Create(b, n, A, B);
	Print(b, n);
	cout << "The sum of the elements that satisfy the condition = " << Sum(b, n) << endl;
	cout << "The number of elements that satisfy the condition = " << Count(b, n) << endl;
	Replacement(b, n);
	Print(b, n);
	return 0;
}	
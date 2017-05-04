#include <iostream>

#define tam 10

void inserction(int vet[], int n)
{
	int i, j, x, result = 0;
	for (j = 1; j < n; j++)
	{
		x = vet[j];
		for (i = j - 1; i >= 0 && vet[i] > x; i--)
		{
			vet[i + 1] = vet[i];
			result += 1;
		}
		vet[i + 1] = x;
		for (int k = 0; k < n; k++)
			std::cout << " " << vet[k];
		std::cout << std::endl;
		
	}
	std::cout << result << std::endl;
}
int main()
{

	int vetor[tam];
	for (int i = 0; i < tam; i++)
	{
		vetor[i] = tam - i;
		std::cout << "" << vetor[i] << std::endl;
	}
	inserction(vetor, tam);


	system("pause");
	return 0;
}
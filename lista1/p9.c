#include <stdio.h>

int main() {

	float salario, novoSalario, reajuste;
	int percentual;

	printf("Infome o valor do salario: R$");
	scanf("%f", &salario);

	if (salario < 1500) {
		reajuste = 20.0/100.0 * salario;
		percentual = 20;
	} else if (salario >= 1500 && salario < 5000) {
		reajuste = 15.0/100.0 * salario;
		percentual = 15;
	} else {
		reajuste = 10.0/100.0 * salario;
		percentual = 10;
	}

	novoSalario = salario + reajuste;
	printf("Novo salario: R$%.2f\nReajuste: R$%.2f\n(%d porcento)", novoSalario, reajuste, percentual);

	return 0;
}
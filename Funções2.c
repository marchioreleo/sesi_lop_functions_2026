#include <stdio.h>
#include <windows.h>

int fatorial(n){
	int f = 1;
	for (int i = 1; i <= n; i++){
		f *= i;
	}
	return f;
}

void main(){
	SetConsoleOutputCP(CP_UTF8);
	int n;
	printf("Digite um número inteiro para calcular o seu fatorial:\n");
	scanf("%d", &n); 
	printf("Seu número fatorial é %d", fatorial(n));
}
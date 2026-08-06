# Lista funções
## Lógica de Programação

### Exercício 1
```c
#include <stdio.h>
#include <windows.h>
void main(){
	SetConsoleOutputCP(CP_UTF8);
	char resp;
	int n1, n2;
	
	printf("Qual operação você gostaria de fazer?\nS para soma\t E para subtração\t F para multiplicação\t G para divisão\n");
	scanf(" %c", &resp);
	
	printf("Digite dois numeros\n");
	scanf("%d %d", &n1, &n2);
	
	int SomaDeNumeros(int a, int b){
		return a + b;
	}
	
	int SubDeNumeros(int a, int b){
		return a - b;
	}
	
	int MultDeNumeros(int a, int b){
		return a * b;
	}
	
	int DivDeNumeros(int a, int b){
		return a / b;
	}
	
	if (resp = 'S'){
		int resultado = SomaDeNumeros(n1,n2);
		printf("Seu resultado é %d",resultado);
	}else if(resp = 'E'){
		int resultado = SubDeNumeros(n1,n2);
		printf("Seu resultado é %d",resultado);
	}else if(resp = 'F'){
		int resultado = MultDeNumeros(n1,n2);
		printf("Seu resultado é %d",resultado);
	}else{
		int resultado = DivDeNumeros(n1,n2);
		printf("Seu resultado é %d",resultado);
	}
	
	
	
}
```
### Exercicio 2
```c
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
```
### Exercício 3
```c
#include <stdio.h>
#include <windows.h>
int primo(n){
	int i;
	if(n <= 1){
		return 0;
	}
	for(i = 2; i < n; i++){
		if(n % i == 0){
			return 0;
		}
	}
	return 1;
}
void main(){
	SetConsoleOutputCP(CP_UTF8);
	int n;
	printf("Digite um número para descobrir se ele é primo.\n");
	scanf("%d", &n);
	if(primo(n) != 0){
		printf("Seu número é primo.");
	}else{
		printf("Seu número não é primo.");
	}

	getch();
}
```
### Exercício 4
```c
#include <stdio.h>
#include <windows.h>
int media(num){
	int val, med, soma = 0;
	for(int i = 0; i<num; i++){
		printf("Digite o %dº valor:\n", i+1);
		scanf("%d", &val);
		soma += val;
	}
	med = soma / num;
	return med;
}

void main(){
	SetConsoleOutputCP(CP_UTF8);
	int num;
	printf("Digite quantos valores estarão em sua média:\n");
	scanf("%d", &num);
	printf("Sua média é %d", media(num));
	getch();
}
```
### Exercício 5
```c
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
```

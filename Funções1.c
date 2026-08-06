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
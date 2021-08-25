#include<stdio.h>
#include<stdlib.h> 
#include<locale.h>
#include<time.h> 
#include<conio.h> 
#include<ctype.h>
#include<windows.h> 

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	char frase[20];
	int i, op;
	
	printf("\t         -= CODBILL CIPHER =-\n\n");
	printf("\tOlá! Meu cód-- nome é Codbill Cipher!\n");
	printf("\tMeu trabalho é codificar qualquer frase\n");
	printf("\tque você me diga no código desejado.\n");
	printf("\tAntes, algumas informações dos códigos:\n\n");
	printf(" Cifra de César - A Cifra de César começa o alfabeto depois da 3ª letra.\n No caso inicia com as letras X, Y, e Z, e depois de ciclo, começa o alfabeto.\n\n");
	printf(" Código Atbash - Códigos Atbash são decodificado revertendo o alfabeto.\n Por exemplo, o A se torna Z.\n\n");
	printf(" O Código A1Z26 é uma cifra de substituição simples de decodificação,\n substituindo a letra n° do alfabeto pelo número em si.\n\n");
	printf(" NÃO UTILIZE ACENTOS (´, `, ^, ~, ¨)!\n");
	printf(" NÃO UTILIZE Ç (c com cedilha)!\n");
	printf(" NÃO UTILIZE CARACTERES ESPECIAIS!\n\n\n");
	printf("\tPor favor escolha o código desejado: \n\n");
	printf("\t\t[1- Cifra de César]\n");
	printf("\t\t[2- Código Atbash ]\n");
	printf("\t\t[3-     A1Z26     ]\n");
	printf("\n\n");
	
	printf(" Selecione um código: ");
	scanf("%d", &op);
	
	select:
	switch(op){
		case 1:
			goto cesar;
			break;
		case 2:
			printf("a");
			break;
		case 3:
			printf("b");
			break;
		default:
			printf(" Opção incorreta.");
			goto select;
	}
	
	cesar:
	system("cls");
	printf("\t\t-= Cifra de César =-\n\n");
	printf("  Digite sua frase: ");
	fflush(stdin);
	gets(frase);
	
	printf("\n Sua frase: %s\n", frase);
	printf(" Sua frase codificada: ");
	for(i = 0; i < strlen(frase); i++){
		
		switch(frase[i]){
			case 'a':
				printf("d");
				break;
			case 'A':
				printf("D");
				break;
			case 'b':
				printf("e");
				break;
			case 'B':
				printf("E");
				break;
			case 'c':
				printf("f");
				break;
			case 'C':
				printf("F");
			case 'd':
				printf("g");
				break;
			case 'D':
				printf("G");
				break;
			case 'e':
				printf("h");
				break;
			case 'E':
				printf("H");
				break;
			case 'f':
				printf("i");
				break;
			case 'F':
				printf("I");
				break;
			case 'g':
				printf("j");
				break;
			case 'G':
				printf("J");
				break;
			case 'h':
				printf("k");
				break;
			case 'H':
				printf("K");
				break;
			case 'i':
				printf("l");
				break;
			case 'I':
				printf("L");
				break;
			case 'j':
				printf("m");
				break;
			case 'J':
				printf("M");
				break;
			case 'k':
				printf("n");
				break;
			case 'K':
				printf("N");
				break;
			case 'l':
				printf("o");
				break;
			case 'L':
				printf("O");
				break;
			case 'm':
				printf("p");
				break;
			case 'M':
				printf("P");
				break;
			case 'n':
				printf("q");
				break;
			case 'N':
				printf("Q");
				break;
			case 'o':
				printf("r");
				break;
			case 'O':
				printf("R");
				break;
			case 'p':
				printf("s");
				break;
			case 'P':
				printf("S");
				break;
			case 'q':
				printf("t");
				break;
			case 'Q':
				printf("T");
				break;
			case 'r':
				printf("u");
				break;
			case 'R':
				printf("U");
				break;
			case 's':
				printf("v");
				break;
			case 'S':
				printf("V");
				break;
			case 't':
				printf("w");
				break;
			case 'T':
				printf("W");
				break;
			case 'u':
				printf("x");
				break;
			case 'U':
				printf("X");
				break;
			case 'v':
				printf("y");
				break;
			case 'V':
				printf("Y");
				break;
			case 'w':
				printf("z");
				break;
			case 'W':
				printf("Z");
				break;
			case 'x':
				printf("a");
				break;
			case 'X':
				printf("A");
				break;
			case 'y':
				printf("b");
				break;
			case 'Y':
				printf("B");
				break;
			case 'z':
				printf("c");
				break;
			case 'Z':
				printf("C");
				break;
			case ' ':
				printf(" ");
				break;
			case ',':
				printf(",");
				break;
			case '.':
				printf(".");
				break;
			case '!':
				printf("!");
				break;
			case '?':
				printf("?");
				break;
			default:
				printf("  COLOCOU ALGO QUE NÃO DEVIA!");
				goto cesar;
		}
		
	}
	
	return 0;
}

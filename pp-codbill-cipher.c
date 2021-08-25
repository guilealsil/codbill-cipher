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
	printf("\tOl�! Meu c�d-- nome � Codbill Cipher!\n");
	printf("\tMeu trabalho � codificar qualquer frase\n");
	printf("\tque voc� me diga no c�digo desejado.\n");
	printf("\tAntes, algumas informa��es dos c�digos:\n\n");
	printf(" Cifra de C�sar - A Cifra de C�sar come�a o alfabeto depois da 3� letra.\n No caso inicia com as letras X, Y, e Z, e depois de ciclo, come�a o alfabeto.\n\n");
	printf(" C�digo Atbash - C�digos Atbash s�o decodificado revertendo o alfabeto.\n Por exemplo, o A se torna Z.\n\n");
	printf(" O C�digo A1Z26 � uma cifra de substitui��o simples de decodifica��o,\n substituindo a letra n� do alfabeto pelo n�mero em si.\n\n");
	printf(" N�O UTILIZE ACENTOS (�, `, ^, ~, �)!\n");
	printf(" N�O UTILIZE � (c com cedilha)!\n");
	printf(" N�O UTILIZE CARACTERES ESPECIAIS!\n\n\n");
	printf("\tPor favor escolha o c�digo desejado: \n\n");
	printf("\t\t[1- Cifra de C�sar]\n");
	printf("\t\t[2- C�digo Atbash ]\n");
	printf("\t\t[3-     A1Z26     ]\n");
	printf("\n\n");
	
	printf(" Selecione um c�digo: ");
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
			printf(" Op��o incorreta.");
			goto select;
	}
	
	cesar:
	system("cls");
	printf("\t\t-= Cifra de C�sar =-\n\n");
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
				printf("  COLOCOU ALGO QUE N�O DEVIA!");
				goto cesar;
		}
		
	}
	
	return 0;
}

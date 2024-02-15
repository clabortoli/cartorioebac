#include <stdio.h> // biblioteca de comunicação do usuario
#include <stdlib.h> //biblioteca de alocação de espaço em memoria
#include <locale.h> // biblioteca de alocaçao de texto por regiao
#include <string.h> // biblioteca responsavel por cuidar das strings


int registro(){
	
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	
	printf("voce escolheu o registro de nomes!\n\n\n");
		printf("insira o cpf: \n");
			scanf("%s", cpf);
			strcpy(arquivo, cpf); // responsavel por poiar valores da string
	
		FILE *file;  //criando o arquivo
			file = fopen(arquivo, "w"); 
			fprintf(file, " CPF: ");
			fprintf(file, cpf);  // salvo o valor da variavel
			fclose(file);	// fecha o arquivo
		
		file = fopen(arquivo, "a");
			fprintf(file, "\n nome: ");
			fclose(file);
				
		printf("digite o nome a ser cadastrado: \n");
			scanf("%s", nome);
		file = fopen(arquivo, "a");
			fprintf(file,nome);
			fclose(file);
			
		file = fopen(arquivo, "a");
			fprintf(file, " ");
			fclose(file);
			
		printf("digite o sobrenome a ser cadastrado: \n");
			scanf("%s",sobrenome);
		file = fopen(arquivo, "a");
			fprintf(file, sobrenome);
			fclose(file);
			
		file = fopen(arquivo, "a");
			fprintf(file, "\n cargo: ");
			fclose(file);
			
		printf("digite o cargo do usuario: \n");
			scanf("%s", cargo);	
			
		file = fopen(arquivo, "a");
			fprintf(file, cargo);
			fclose(file);
			
		file = fopen(arquivo, "a");
			fprintf(file, ".");
			fclose(file);	
		
		system("pause");
}

int consulta(){
	
	char cpf[40];
	char conteudo[250];
	
	printf("voce escolheu o Consultar os nomes!\n\n\n");
		printf("digite o CPF a ser consultado: \n");
		scanf("%s", cpf);
		
		FILE *file;
		file = fopen(cpf, "r");
			if(file == NULL){
				printf("nao foi poissivel abrir o aquivo, nao foi localizado. \n");
			}
			printf("\nEssas são as informaçoes encontradas:\n");
			
			while(fgets(conteudo, 200, file) !=NULL){
			
				printf("%s", conteudo);
				printf("\n");
			}
	
		system("pause");
}

int deletar(){
	char cpf[40];
	
	printf("voce escolheu o Deletar nomes!\n");
	printf("digite o cpf a ser deletado: \n");
		scanf("%s",cpf);
		
		remove(cpf);
		
	FILE *file;
	file = fopen(cpf, "r");	
	
	if(file == NULL){
		printf(" o cpf a ser deletado nao existe.");
		system("pause");
	}
		
		system("pause");
}



int main()
{
	int opcao=0; // definindo variaveis 
	int x=1;
	char senhadigitada[10]="a";
	int comparacao;
	
		printf("    Cartório da EBAC  \n\n");
		printf("loguin de adminstrador!\n\nDigite a senha: ");
			scanf("%s", senhadigitada);
		
		comparacao = strcmp(senhadigitada, "admin");	
	if(comparacao == 0)
	{
		
	
		for(x=1;x=1;)
		{ 
		system("cls");
	
		setlocale(LC_ALL,"Portuguese"); // definição da linguagem
	
	
			printf("    Cartório da EBAC  \n\n"); // inicio do menu
			printf(" Escolha a opção desejada do menu:\n\n\n");
			printf("\t1 - Registrar Nomes\n");
			printf("\t2 - Consultar Nomes\n");
			printf("\t3 - Deletar Nomes\n"); // fim do menu
			printf("\t4 - sair do programa.\n\n\n");
		
			printf("opção:> ");
	 		scanf("%d",&opcao); // inicio da seleção
	
			system("cls");	
			switch(opcao)
			{
				case 1:
				registro();
				break;	
			
				case 2:	
				consulta();
				break;
			
				case 3: 
				deletar();
				break;
			
				case 4:
				printf("muito obrigado por usar o programa \n\n aperte uma tecla para sair\n\n");
				return 0;
				break;
			
				default:
				printf("essa opçao nao estar disponivel\n");
				system("pause");
				break;
			}
    
		}
    }
    
    
    else
    	printf("\n\nsenha incorreta\n");
}
   




// Aluno: Igor Baesse de Araujo
// RA: 115218364






#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <locale.h>



//Variaveis globais que serão utilizadas pelas funções 

 int M[17][20]={
2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,
2,1,1,1,1,2,1,2,1,1,2,1,1,1,1,1,1,1,1,2,
2,1,2,2,1,2,1,2,1,1,1,1,1,1,1,2,1,2,1,2,
2,1,2,2,1,2,1,2,1,1,2,2,1,2,2,2,1,2,1,2,
6,1,1,2,1,2,1,2,1,1,1,2,1,1,1,2,1,2,1,2,
2,2,2,2,1,1,1,2,1,1,1,2,1,1,1,2,1,2,1,2,
2,1,1,2,1,2,2,2,2,2,2,2,1,1,1,2,1,2,1,2,
2,1,1,2,1,1,1,2,1,1,1,1,1,1,1,2,1,2,1,2,
2,1,1,2,1,1,1,1,1,1,1,2,2,2,1,2,1,1,1,2,
2,1,1,2,2,2,2,2,2,2,1,2,1,1,1,2,2,2,1,2,
2,1,1,2,2,2,2,2,1,2,1,2,1,2,1,1,1,2,1,2,
2,1,1,1,1,1,1,1,1,2,1,2,1,2,2,2,1,2,1,2,
2,2,2,2,1,2,2,2,2,2,1,1,1,2,1,2,1,2,1,2,
2,1,1,1,1,2,1,1,1,1,1,1,2,2,1,2,1,2,1,2,
2,1,2,2,1,2,1,1,2,2,2,1,2,1,1,2,1,2,2,2,
2,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,1,1,1,2,
2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,5,2,
};  

int PJLinha=15;
int PJColuna=18;
int PPLinha=5;
int PPColuna=2;
int AL,AC;

// Fim variaveis globais





//Essa Função gera a posição inicial do bicho papão na matriz utilizando a função rand() para gerar os valores:
void PosicaoBichoPapao(){
	

   do {
   
   
   		
   	srand(time(NULL));
	PPLinha=rand()%15;// O valor 15 é pra gerar numeros entre 0 e 15 que são a qunatidade de linhas que temos 
	PPColuna=rand()%18;//O valor 18 é pra gerar numeros entre 0 e 18 que são a qunatidade de colunas que temos
     
   

}while (M[PPLinha][PPColuna]!=1);
 M[PPLinha][PPColuna]=3;


}

//Fim função posição


void PosicaoJoao (){
	
int i,j;

for(i=0;i<=16;i++){
	for(j=0;j<=19;j++){
		
		if(M[i][j]==5){
			M[i-1][j]=4;
		}
	}
}	

}








//Funcao game over imprime na tela GAME-OVER quando o bicho papão encontra o joazinho

int GameOver(){
system("cls");

int i,j;	
int Continua;
	
int GameFim[12][57]={
	

0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,0,
0,1,1,1,1,1,2,1,1,1,1,2,1,2,2,2,2,1,2,1,1,1,1,2,2,2,2,2,1,1,1,1,2,1,2,2,2,2,2,2,2,2,2,2,2,1,2,1,1,1,1,2,1,1,1,1,0,
0,1,2,2,2,2,2,1,2,2,1,2,1,1,2,2,1,1,2,1,2,2,2,2,2,2,2,2,1,2,2,1,2,2,1,2,2,2,2,2,2,2,2,2,1,2,2,1,2,2,2,2,1,2,2,1,0,
0,1,2,2,2,2,2,1,2,2,1,2,1,2,1,1,2,1,2,1,2,2,2,2,2,2,2,2,1,2,2,1,2,2,2,1,2,2,2,2,2,2,2,1,2,2,2,1,2,2,2,2,1,1,1,1,0,
0,1,1,1,1,1,2,1,1,1,1,2,1,2,2,2,2,1,2,1,1,1,1,2,1,1,1,2,1,2,2,1,2,2,2,2,1,2,2,2,2,2,1,2,2,2,2,1,1,1,1,2,1,1,2,2,0,
0,1,2,2,2,1,2,1,2,2,1,2,1,2,2,2,2,1,2,1,2,2,2,2,2,2,2,2,1,2,2,1,2,2,2,2,2,1,2,2,2,1,2,2,2,2,2,1,2,2,2,2,1,2,1,2,0,
0,1,1,1,1,1,2,1,2,2,1,2,1,2,2,2,2,1,2,1,1,1,1,2,2,2,2,2,1,1,1,1,2,2,2,2,2,2,2,1,2,2,2,2,2,2,2,1,1,1,1,2,1,2,2,1,0,
0,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,



};
	for(i = 1; i <=10; i++){
		
		
			
			
		for ( j = 1; j <=57 ; j++)
		{
			switch (GameFim[i][j])
			{
				case 1:  
					printf("$");
					break;
			 
				case 2:
					printf(" ");
					break;
			}
		}
		printf("\n");
	}
	printf("\n\n\n Deseja jogar novamente ? (1)Sim (0)Nao");
	scanf("%d",&Continua);
	
	switch(Continua){
		
		case 1:
		system("cls");
		imprimeLabirinto();			
		 AndaJoazinho();
			break;
		case 0:
			exit(0);
			break;
	}
		
	
		
	
	system("pause");
}
	


//Fim função game over 




//Essa função gera aleatoriamente uma direção em que o papao pode andar 

int  AndaPapao(){

	int caminho;
	int flag=0;
	
	srand(time(NULL));
	
	
	
	srand(time(NULL));
	caminho=rand()%3;
	
	

	
	
	if(caminho=1&&M[PPLinha+1][PPColuna]==1){
		
		PPLinha+=1;
		M[PPLinha][PPColuna]=3;
		M[PPLinha-1][PPColuna]=1;
		
		
	}
	
		if(caminho=2&&M[PPLinha-1][PPColuna]==1){
		
		PPLinha-=1;
		M[PPLinha][PPColuna]=3;
		M[PPLinha+1][PPColuna]=1;
		
		
	}
	
		if(caminho=2&&M[PPLinha][PPColuna-1]==1){
		
		PPLinha-=1;
		M[PPLinha][PPColuna]=3;
		M[PPLinha+1][PPColuna]=1;
		
		
	}
	
	

	

	
	

}

//Fim função anda papão 








//Função imprime um trofeu quando o joazinho acha a saida para o labirinto
void Vitoria(){
system ("cls");
	int i,j;
	
	int Vitoria[14][13]={
1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,
2,	1,	2,	2,	2,	2,	2,	2,	2,	2,	2,	1,	2,
2,	2,	1,	2,	2,	2,	2,	2,	2,	2,	1,	2,	2,
2,	2,	2,	1,	2,	2,	2,	2,	2,	1,	2,	2,	2,
2,	2,	2,	2,	1,	2,	2,	2,	1,	2,	2,	2,	2,
2,	2,	2,	2,	2,	1,	2,	1,	2,	2,	2,	2,	2,
2,	2,	2,	2,	2,	2,	1,	2,	2,	2,	2,	2,	2,
2,	2,	2,	2,	2,	1,	2,	1,	2,	2,	2,	2,	2,
2,	2,	2,	2,	1,	2,	1,	2,	1,	2,	2,	2,	2,
2,	2,	2,	1,	2,	1,	1,	2,	2,	1,	2,	2,	2,
2,	2,	1,	2,	2,	2,	1,	2,	2,	2,	1,	2,	2,
2,	1,	2,	2,	2,	2,	1,	2,	2,	2,	2,	1,	2,
1,	2,	2,	2,	2,	2,	1,	2,	2,	2,	2,	2,	1,
1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,

};

	for(i = 0; i <=13; i++){
		
		
			
			
		for ( j = 0; j <13 ; j++)
		{
			switch (Vitoria[i][j])
			{
				case 1:  
					printf(" $");
					break;
			 
				
				case 2:
					printf("  ");
					break;
			
			}
		}
		printf("\n");
		
	}
	printf("\n\n\n\nPARABENS VOCE VENCEU !!!!!!!!!!!!!!\n\n\n\n");
	
	

system("pause");
}



//fim função vitoria 





//função que controla o andar do joazinho seguindo a direção que o jogador quizer 

int AndaJoazinho(){

		
	int direcao;
	printf("Digite a direcao: ");
	scanf("%d",&direcao);
	
	
	
	
	
	
		
	if(direcao==8){
		
		
		if(M[PJLinha-1][PJColuna]==6){
			Vitoria();
		}	else
				if(PJLinha-1==PPLinha&&PJColuna==PPColuna){
					GameOver();
		}			else if (M[PJLinha-1][PJColuna]==2){
						 printf("\nParede");
						 printf("\a");
						 AndaJoazinho();
		}					else{
				
								M[PJLinha-1][PJColuna]=4;
								M[PJLinha][PJColuna]=1;
								PJLinha=PJLinha-1;
	}	

}


	
			
	if(direcao==2){
		
		
		if(M[PJLinha+1][PJColuna]==6){
			Vitoria();
		}	else
				if(PJLinha+1==PPLinha&&PJColuna==PPColuna){
					GameOver();
		}			else if (M[PJLinha+1][PJColuna]==2){
						 printf("\nParede");
						 printf("\a");
						 AndaJoazinho();
		}					else{
				
								M[PJLinha+1][PJColuna]=4;
								M[PJLinha][PJColuna]=1;
								PJLinha=PJLinha+1;
	}	

}
	
	
	

	
		if(direcao==6){
			
			
			if(M[PJLinha][PJColuna+1]==6){
				Vitoria();
		}		else
					if (PJLinha==PPLinha&&PJColuna+1==PPColuna){
						GameOver();
			}			else if(M[PJLinha][PJColuna+1]==2){
						 printf("\nParede");
						 printf("\a");
			 			AndaJoazinho();
			}					else{
	
									M[PJLinha][PJColuna+1]=4;
									M[PJLinha][PJColuna]=1;	
									PJColuna=PJColuna+1;
		
	}

}
	
	
	

	
	


		if(direcao==4){
			
			
			if(M[PJLinha][PJColuna-1]==6){
				Vitoria();
		}		else
					if(PJLinha==PPLinha&&PJColuna-1==PPColuna){
						GameOver();
			}			else if(M[PJLinha][PJColuna-1]==2){
								 printf("\nParede");
						 		printf("\a");
						 		AndaJoazinho();
		}						else {
									M[PJLinha][PJColuna-1]=4;
									M[PJLinha][PJColuna]=1;
									PJColuna=PJColuna-1;
	
	}
	
}

	
		
   system ("cls");
   imprimeLabirinto();//Re-imprime o labirinto a cada passo do joazinho
   AndaPapao();//Faz o bicho papao andar a cada passo do joazinho 
   AndaJoazinho();// utilizacao da recursividade para o andar do joazinho além da chamada de outras funções 
}











// Função passada para impressao do labirinto

int imprimeLabirinto(){
	int L=17,C=20;
	int i,j;
	int cont;
{
	for(i = 0; i <L; i++){
		for ( j = 0; j < C; j++)
		{
			switch (M[i][j])
			{
				case 1:  //Caminho
					printf("  ");
					break;
			 	case 2:  //Parede
					printf("%2c",254);
					break;
				case 3:  //Bicho papão
					printf("%2c",128);
					break;
				case 4: //Joãozinho
					printf(" J");
					break;
				case 5: //Entrada
					printf(" E");
					break;
				case 6: //Saída
					printf(" S");
					break;
				default:
					printf(" ?");
			}
		}
		printf("\n");
	}
	
return 0;

}
}

//fim função labirinto






//Função menu e opções

void Menu(){
	
	
	int i,j,MenuM[14][55]={
1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,
1,	0,	0,	1,	1,	1,	1,	1,	0,	0,	0,	0,	1,	0,	0,	0,	0,	1,	0,	0,	1,	0,	0,	0,	0,	0,	1,	1,	1,	0,	0,	1,	0,	0,	1,	1,	1,	1,	1,	1,	0,	0,	1,	0,	0,	0,	0,	0,	0,	1,	0,	0,	0,	0,	1,
1,	0,	0,	1,	1,	1,	1,	1,	0,	1,	1,	0,	1,	0,	1,	1,	0,	1,	0,	0,	1,	0,	0,	1,	0,	0,	1,	1,	1,	0,	0,	1,	0,	0,	0,	1,	1,	1,	1,	1,	0,	0,	1,	0,	0,	0,	0,	0,	0,	1,	0,	1,	1,	0,	1,
1,	0,	0,	1,	1,	1,	1,	1,	0,	1,	1,	0,	1,	0,	1,	1,	0,	1,	0,	0,	1,	0,	0,	1,	0,	0,	1,	1,	1,	0,	0,	1,	0,	0,	0,	0,	1,	1,	1,	1,	0,	0,	1,	1,	1,	0,	0,	1,	1,	1,	0,	1,	1,	0,	1,
1,	0,	0,	1,	1,	1,	1,	1,	0,	1,	1,	0,	1,	0,	1,	1,	0,	1,	0,	0,	1,	0,	0,	1,	0,	0,	1,	1,	1,	0,	0,	1,	0,	0,	1,	0,	0,	1,	1,	1,	0,	0,	1,	1,	1,	0,	0,	1,	1,	1,	0,	1,	1,	0,	1,
1,	0,	0,	1,	1,	1,	1,	1,	0,	1,	1,	0,	1,	0,	0,	0,	0,	1,	0,	0,	1,	0,	0,	1,	0,	0,	1,	1,	1,	0,	0,	1,	0,	0,	1,	1,	0,	0,	1,	1,	0,	0,	1,	1,	1,	0,	0,	1,	1,	1,	0,	1,	1,	0,	1,
1,	0,	0,	1,	1,	1,	1,	1,	0,	1,	1,	0,	1,	0,	0,	0,	0,	1,	0,	0,	1,	0,	0,	1,	0,	0,	1,	1,	1,	0,	0,	1,	0,	0,	1,	1,	1,	0,	0,	1,	0,	0,	1,	1,	1,	0,	0,	1,	1,	1,	0,	1,	1,	0,	1,
1,	0,	0,	1,	1,	1,	1,	1,	0,	0,	0,	0,	1,	0,	1,	1,	0,	1,	0,	0,	1,	0,	0,	0,	0,	0,	1,	1,	1,	0,	0,	1,	0,	0,	1,	1,	1,	1,	0,	0,	0,	0,	1,	1,	1,	0,	0,	1,	1,	1,	0,	1,	1,	0,	1,
1,	0,	0,	1,	1,	1,	1,	1,	0,	1,	1,	0,	1,	0,	1,	1,	0,	1,	0,	0,	1,	0,	0,	0,	1,	1,	1,	1,	1,	0,	0,	1,	0,	0,	1,	1,	1,	1,	1,	0,	0,	0,	1,	1,	1,	0,	0,	1,	1,	1,	0,	1,	1,	0,	1,
1,	0,	0,	1,	1,	1,	1,	1,	0,	1,	1,	0,	1,	0,	1,	1,	0,	1,	0,	0,	1,	0,	0,	0,	0,	1,	1,	1,	1,	0,	0,	1,	0,	0,	1,	1,	1,	1,	1,	1,	0,	0,	1,	1,	1,	0,	0,	1,	1,	1,	0,	1,	1,	0,	1,
1,	0,	0,	1,	1,	1,	1,	1,	0,	1,	1,	0,	1,	0,	1,	1,	0,	1,	0,	0,	1,	0,	0,	1,	0,	0,	1,	1,	1,	0,	0,	1,	0,	0,	1,	1,	1,	1,	1,	1,	0,	0,	1,	1,	1,	0,	0,	1,	1,	1,	0,	1,	1,	0,	1,
1,	0,	0,	0,	0,	0,	0,	1,	0,	1,	1,	0,	1,	0,	1,	1,	0,	1,	0,	0,	1,	0,	0,	1,	1,	0,	0,	1,	1,	0,	0,	1,	0,	0,	1,	1,	1,	1,	1,	1,	0,	0,	1,	1,	1,	0,	0,	1,	1,	1,	0,	1,	1,	0,	1,
1,	0,	0,	0,	0,	0,	0,	1,	0,	1,	1,	0,	1,	0,	0,	0,	0,	1,	0,	0,	1,	0,	0,	1,	1,	1,	0,	0,	1,	0,	0,	1,	0,	0,	1,	1,	1,	1,	1,	1,	0,	0,	1,	1,	1,	0,	0,	1,	1,	1,	0,	0,	0,	0,	1,
1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1	,1	,1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,	1,

	};
	
	for(i=0;i<14;i++){
		for(j=0;j<54;j++){
			
			switch (MenuM[i][j]){
				
				case 1:
					printf(" ");
					break;
				case 0:
					printf(" #");
					break;
			}
		}
	}
printf ("\tBem vindo ao labirinto ");
	
	getchar();
		
		
	}
	
	
	
	

//fim função menu 










int main (){


Menu();	
PosicaoJoao ();
PosicaoBichoPapao();
imprimeLabirinto();
AndaJoazinho();





	
	
	
}

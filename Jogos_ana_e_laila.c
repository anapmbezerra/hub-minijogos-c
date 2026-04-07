#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int menu;
    int escolha;
    int acertos = 0;
    int ganhador;

    do{
        printf(" * Menu do Jogo\n");
        printf("1 - opcao de jogos\n");
        printf("0 - sair\n");
        scanf("%i", &menu);
        system("cls");
        if (menu == 1) {
            printf("1 - Perguntas e Respostas\n ");
            printf("2 - Cobra na Caixa\n");
            printf("3 - Gousmas War \n");
            scanf("%i", &escolha);
            system("cls");
            switch (escolha) {
            case 1:
                do {
                    printf("##### PERGUNTAS E RESPOSTAS #####\n");
                    printf("Primeira pergunta: Qual filme ganhou o oscar de melhor filme em 2004?\n");
                    printf("1) Uma mente brilhante\n");
                    printf("2) Gladiador\n");
                    printf("3) Senhor dos Aneis: O Retorno do Rei\n");
                    printf("4) Beleza Americana\n");
                    printf("5) Chigaco\n");
                    scanf("%i", &escolha);
                    if (escolha == 3){
                        printf("Acertou!\n");
                        acertos += 1;
                    } else {
                        printf("Errou. A resposta correta era:  Senhor dos Aneis: O Retorno do rei\n");
                    }


                    printf("PERGUNTAS E RESPOSTAS\n");
                    printf ("Pergunta 1 :Qual foi o primeiro filme da historia a ter som sincronizado com as imagens? \n");
                    printf("1) E o vento levou\n");
                    printf("2) O Cantor de Jazz\n");
                    printf("3) Cidadao Kane\n");
                    printf("4) Tempos Modernos\n");
                    printf("5) Casablanca\n");
                    scanf("%i", &escolha);
                    if (escolha == 2){
                        printf("Acertou!\n");
                        acertos += 1;
                    } else {
                        printf("Errou. A resposta correta era: O Cantor de Jazz \n");
                    }


                    printf("PERGUNTAS E RESPOSTAS\n");
                    printf("Pergunta 2: Qual desses filmes ganhou mais oscars na historia do cinema? (empatado no recorde)\n");
                    printf("1) Titanic\n");
                    printf("2) Avatar\n");
                    printf("3) Interestelar\n");
                    printf("4) O Poderao Chefao\n");
                    printf("5) Jurassic Park \n");
                    scanf("%i", &escolha);

                    if (escolha == 1){
                        printf("Acertou!\n");
                        acertos += 1;
                    } else {
                        printf("Errou. A resposta correta era: Titanic \n");
                    }


                    printf("PERGUNTAS E RESPOSTAS\n");
                    printf("Pergunta 4: Qual desses filmes foi gravado quase inteiro em ordem cronologica? \n");
                    printf("1) Clube da Luta\n");
                    printf("2) O Iluminado \n");
                    printf("3) Boyhood: Da infancia ate a juventude\n");
                    printf("4) O Senhor dos Aneis: A socidade do anel\n");
                    printf("5) Pulp Fiction\n");
                    scanf("%i", &escolha);
                    if (escolha == 3){
                        printf("Acertou!\n");
                        acertos += 1;
                    } else {
                        printf("Errou. A resposta correta era: BoyHood: da infancia ate a juventude \n");
                    }

                    printf("PERGUNTAS E RESPOSTAS\n");
                    printf("Pergunta 5:Qual desses filmes utilizou um codigo escondido no audio que so pode ser percebido quando reproduzido ao contrario? \n");
                    printf("1) O Iluminado\n");
                    printf("2) O Clube da Luta \n");
                    printf("3) Star Wars 1: A ameaca fantasma\n");
                    printf("4) O Exorcista\n");
                    printf("5) Matrix \n");
                    scanf("%i", &escolha);
                    if (escolha == 2){
                        printf("Acertou!\n");
                        acertos += 1;
                    } else {
                        printf("Errou. A resposta correta era: Clube Luta \n");
                    }
                    printf("Fim das Perguntas! Espero que tenha gostado! Voce acertou um total de %i perguntas\n", acertos);
                    printf("jogar novamente?\n");
                    printf("1- sim\t 0-nao\n");
                    printf("escolha: \n");
                    scanf("%i", &escolha);
                    system ("cls");
                } while (escolha == 1);
            break;
             case 2:
             		srand(time(0));
             		
                	do{
                		printf("##### COBRA NA CAIXA ##### \n");
                		int botao;
                		int cobra;
                		cobra = (rand() % 5) + 1;
                		do{
                			botao = (rand() % 5) + 1;
						} while(botao == cobra);
					
						int ganhador = 0;
						int turno = 1;
						int escolhida;
						while(ganhador == 0){
							printf("Turno do jogador %i \n", turno);
							printf("Escolha uma caixa: [1], [2], [3], [4], [5]\n");
							scanf("%i", &escolhida);
						
							if(escolhida > 5 || escolhida <= 0){
								printf("Valor nao correspondente. \n");
								continue;
							}
							if(escolhida == botao){
								printf("Voce encontrou o botao! Parabens! %i! \n", escolhida);
								ganhador = turno;
							}
							else if(escolhida == cobra){
								printf("Voce encontrou uma cobra.. Que azar! \n", escolhida);
								if(turno == 1){
									ganhador = 2;
								}
								else{
									ganhador = 1;
								}
							}
							else{
								printf("Infelizmente nao tinha nada na caixa %i ...\n", escolhida);
							}
							if(turno == 1){
								turno = 2;
							}
							else{
								turno = 1;
							}
						}
						printf("O ganhador foi o jogador %i \n", ganhador);
						printf("Quer jogar novamente?\n");
						printf("1- sim\t 0- nao\n");
                		scanf("%d", &escolha);
                		system("cls");
                	}while(escolha== 1);
                	printf(" * Menu do Jogo\n");
                  	 printf("0 - opcao de jogos\n");
       				 printf("1 - sair\n");
       				 scanf("%i", &menu);
       				 system("cls");
       				 if (menu == 0) {
           			 printf("1 - Perguntas e Respostas\n ");
            		printf("2 - Cobra na Caixa\n");
           			 printf("3 - Gousmas War \n");
           			 scanf("%i", &escolha);
            		system("cls");
				break;
				case 3: 
					do{
						int gousmas [2][2] = {{1 , 1} , {1 , 1}};
						int opcao, escolha, mudanca, alvo, furia;
						int jogador = 0;
						while(true){
							int outroJogador = 1 - jogador;
							printf("\n 	TURNO DO JOGADOR %d 	\n", jogador + 1);
							printf("Suas Gousmas [Gousmas 1: %d] [Gousmas 2: %d] \n ", gousmas[jogador][0], gousmas[jogador][1]);
							printf("Gousmas Inimigas [Gousmas 1: %d] [Gousmas 2: %d] \n", gousmas[outroJogador][0], gousmas[outroJogador][1]);
							printf("1 - Ataque | 2 - Divisao:  ");
							scanf("%d", &opcao);
							if(opcao == 1){
								printf("Qual Gousmas sua ira atacar (A primeira ou a segunda)? ");
								scanf("%d", &escolha);
								escolha--;
								if(gousmas[jogador][escolha] > 0){
									printf("Qual das Gousmas inimigas ira atacar (Primeira ou Segunda)?");
									scanf("%d", &alvo);
									alvo--;
									if(gousmas[outroJogador][alvo] > 0){
										gousmas[outroJogador][alvo] += gousmas[jogador][escolha];
										printf("Voce atacou o inimigo! A furia dele agora e %d.\n", gousmas[outroJogador][alvo]);
										if(gousmas[outroJogador][alvo] > 5){
											printf("A Gousmas do inimigo foi desintegrada!\n");
											gousmas[outroJogador][alvo] = 0;
										}
									}
								}
							}	
							else if (opcao == 2){
								printf("Qual Gousmas deseja dividir (A Primeira ou a Segunda)?");
								scanf("%d", &escolha);
								escolha--;
								mudanca = 1 - escolha;
								if(gousmas[jogador][escolha] > 1 && gousmas[jogador][mudanca] >= 0){
									printf("Qual a quantidade de furia que sera transferida (De 1 a %d)?", gousmas[jogador][escolha] - 1);
									scanf("%d", &furia);
									gousmas[jogador][escolha] -= furia;
									gousmas[jogador][mudanca] += furia;
									printf("Furia foi dividida com sucesso!\n");
								}
								else{
									printf("Nao foi possivel dividir a furia (Furia Insuficiente ou Espaco Ocupado)\n");
									continue;
								}
							}
							if(gousmas[outroJogador][0] == 0 && gousmas[outroJogador][1] == 0){
								printf("\n O JOGADOR %d VENCEU!!!!\n", jogador + 1);
								break;
							}	
							jogador = outroJogador;
						}
						printf("Escolha!\n1: Jogar de novo\n0: Voltar para o Menu\n");
                		scanf("%d", &escolha);
                		system("cls");
					} while(escolha == 1);
				break;
			}
    	}
    	if(menu == 0){
    		printf("SAIR DO JOGO\n");
    		system("pause");
		}
		else{
			printf("Opcao invalida\n");
			system("pause");
			system("cls");
		}
    } 
	} while (menu != 0);
                
	return 0;
}
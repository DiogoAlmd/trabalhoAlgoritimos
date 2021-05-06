#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    system("color 0c");
    setlocale(LC_ALL, "portuguese");

    int nacionalidade, generoi, generon, musica,dev;

do{  
    system("cls");
	printf("  ====================================\n"
		   " | Bem-vindo(a) ao nosso jooj   \x0e     |\n"
	       " |------------------------------------|\n"
		   " |                                    |\n" 
	       " | Escolha a sua opção:               |\n"
	       " |                                    |\n"
           " | 1- Músicas Internacionais          |\n"
           " |                                    |\n"
           " | 2- Músicas Brasileiras             |\n"
           " |                                    |\n"
           " | 3- Desenvolvedores do programa     |\n"
           " |                                    |\n"
           " | 0- Sair                            |\n"
           " |                                    |\n"
		   " | Digite a opção desejada: ");
    scanf("%i", &nacionalidade);
    fflush(stdin);
    system("cls");

    switch(nacionalidade){
	do{
		system("cls");
        case 1: printf("  ===========================================\n"
		               " | Escolha qual gênero musical quer escutar: |\n"
		               " |-------------------------------------------|\n"
                       " | 1- Rock                                   |\n"
                       " | 2- Blues/Jazz                             |\n"
                       " | 3- Country                                |\n"
                       " | 4- Pop                                    |\n"
                       " | 5- Eletrônica                             |\n"
                       " | 6- Rap/Trap                               |\n"
                       " | 7- Lo-fi                                  |\n"
                       " | 0- Voltar                                 |\n"
                       " |                                           |\n"
                       " | Digite a sua escolha: ");
                scanf("%i", &generoi);
                fflush(stdin);
                system("cls");

                switch(generoi){
                	
                	case 0: continue;
                			break;

			        case 1: printf("  =================================================================\n"
					               " |                              Rock                               |\n"
					               " |-----------------------------------------------------------------|\n"
					               " |                                                                 |\n"
			                       " | 1- We Will Rock You — Queen                                     |\n"
			                       " |                                                                 |\n"
			                       " | 2- It’s Only Rock ‘n’ Roll (But I Like It) — The Rolling Stones |\n"
			                       " |                                                                 |\n"
			                       " | 3- My Generation — The Who                                      |\n"
			                       " |                                                                 |\n"
			                       " | 4- Stairway To Heaven — Led Zeppelin                            |\n"
			                       " |                                                                 |\n"
			                       " | 5- Enter Sandman — Metallica                                    |\n"
			                       " |                                                                 |\n"
			                       " | 0- Voltar                                                       |\n"
								   " |                                                                 |\n"
								   " | Digite que musica quer escutar: ");
			        		scanf("%i", &musica);
			        		fflush(stdin);
			        		
			        		switch(musica){
			        			case 0: continue;
                			            break;
								case 1: system("start \musicas./m1.mp3");
										break;
								case 2: system("start \musicas./m2.mp3");
										break;
			        			case 3: system("start \musicas./m3.mp3");
										break;
								case 4: system("start \musicas./m4.mp3");
										break;
								case 5: system("start \musicas./m5.mp3");
										break;
			        			default: printf("\n  ================\n"
					               				" | Opção inválida |\n"
								   				"  ----------------\n");
								   		printf("\n\n");
				                        system("pause");
			        					 break;
							
							}//fim do switch Rock Internacional
			        		break;
			    
			    	case 2: printf("  ===========================================\n"
					               " |                 Blues/Jazz                |\n"
					               " |-------------------------------------------|\n"
					               " |                                           |\n"
			                       " | 1- Hellhound On My Trail - Robert Johnson |\n"
			                       " |                                           |\n"
			                       " | 2- How Many More Years - Howlin’ Wolf     |\n"
			                       " |                                           |\n"
			                       " | 3- Gimme a Pigfoot - Bessie Smith         |\n"
			                       " |                                           |\n"
			                       " | 4- So What - Miles Davis                  |\n"
			                       " |                                           |\n"
			                       " | 5- My Favorite Things - John Coltrane     |\n"
			                       " |                                           |\n"
			                       " | 0- Voltar                                 |\n"
								   " |                                           |\n"
								   " | Digite que musica quer escutar: ");
			        		scanf("%i", &musica);
			        		fflush(stdin);
			        		
			        		switch(musica){
			        			case 0: continue;
                						break;
								case 1: system("start \musicas./.mp3");
										break;
								case 2: system("start \musicas./.mp3");
										break;
			        			case 3: system("start \musicas./.mp3");
										break;
								case 4: system("start \musicas./.mp3");
										break;
								case 5: system("start \musicas./.mp3");
										break;
			        			default: printf("\n  ================\n"
					               				" | Opção inválida |\n"
								   				"  ----------------\n");
								   		printf("\n\n");
										system("pause");
			        					 break;
							
							}//fim do switch blues/jazz
			        		break;
			        		
			        case 3: printf("  ===========================================\n"
					               " |                  Country                  |\n"
					               " |-------------------------------------------|\n"
					               " |                                           |\n"
			                       " | 1- I Walk the Line – Johnny Cash          |\n"
			                       " |                                           |\n"
			                       " | 2- $ 1000 Wedding – Willie Nelson         |\n"
			                       " |                                           |\n"
			                       " | 3- Need You Now – Lady Antebellum         |\n"
			                       " |                                           |\n"
			                       " | 4- I Will Always Love You – Dolly Parton  |\n"
			                       " |                                           |\n"
			                       " | 5- The Gambler – Kenny Rogers             |\n"
			                       " |                                           |\n"
			                       " | 0- Voltar                                 |\n"
								   " |                                           |\n"
								   " | Digite que musica quer escutar: ");
			        		scanf("%i", &musica);
			        		fflush(stdin);
			        		
			        		switch(musica){
			        			case 0: continue;
                						break;
								case 1: system("start \musicas./.mp3");
										break;
								case 2: system("start \musicas./.mp3");
										break;
			        			case 3: system("start \musicas./.mp3");
										break;
								case 4: system("start \musicas./.mp3");
										break;
								case 5: system("start \musicas./.mp3");
										break;
			        			default: printf("\n  ================\n"
					               				" | Opção inválida |\n"
								   				"  ----------------\n");
								   		printf("\n\n");
										system("pause");
			        					 break;
							
							}//fim do switch Country
							break;
										
					case 4: printf("  ========================================\n"
					               " |                   Pop                  |\n"
					               " |----------------------------------------|\n"
					               " |                                        |\n"
			                       " | 1- Sugar - Maroon 5                    |\n"
			                       " |                                        |\n"
			                       " | 2- Shape Of You - Ed Sheeran           |\n"
			                       " |                                        |\n"
			                       " | 3- You're Beautiful - James Blunt      |\n"
			                       " |                                        |\n"
			                       " | 4- Someone You Loved - Lewis Capaldi   |\n"
			                       " |                                        |\n"
			                       " | 5- All Of Me - John Legend             |\n"
			                       " |                                        |\n"
			                       " | 0- Voltar                              |\n"
								   " |                                        |\n"
								   " | Digite que musica quer escutar: ");
			        		scanf("%i", &musica);
			        		fflush(stdin);
			        		
			        		switch(musica){
			        			case 0: continue;
                						break;
								case 1: system("start \musicas./.mp3");
										break;
								case 2: system("start \musicas./.mp3");
										break;
			        			case 3: system("start \musicas./.mp3");
										break;
								case 4: system("start \musicas./.mp3");
										break;
								case 5: system("start \musicas./.mp3");
										break;
			        			default: printf("\n  ================\n"
					               				" | Opção inválida |\n"
								   				"  ----------------\n");
								   		printf("\n\n");
										system("pause");
			        					 break;
							
							}//fim do switch pop
			        		break;
			        		
			        case 5: printf("  ==================================\n"
					               " |            Eletrônica            |\n"
					               " |----------------------------------|\n"
					               " |                                  |\n"
			                       " | 1- The Nights - Avicii           |\n"
			                       " |                                  |\n"
			                       " | 2- The Days - Avicii             |\n"
			                       " |                                  |\n"
			                       " | 3- Addicted To You - Avicii      |\n"
			                       " |                                  |\n"
			                       " | 4- I Could Be The One - Avicii   |\n"
			                       " |                                  |\n"
			                       " | 5- Lay Me Down - Sam Smith       |\n"
			                       " |                                  |\n"
			                       " | 0- Voltar                        |\n"
								   " |                                  |\n"
								   " | Digite que musica quer escutar: ");
			        		scanf("%i", &musica);
			        		fflush(stdin);
			        		
			        		switch(musica){
			        			case 0: continue;
                						break;
								case 1: system("start \musicas./.mp3");
										break;
								case 2: system("start \musicas./.mp3");
										break;
			        			case 3: system("start \musicas./.mp3");
										break;
								case 4: system("start \musicas./.mp3");
										break;
								case 5: system("start \musicas./.mp3");
										break;
			        			default: printf("\n  ================\n"
					               				" | Opção inválida |\n"
								   				"  ----------------\n");
								   		printf("\n\n");
										system("pause");
			        					 break;
							
							}//fim do switch eletronica			        		
			        		break;
			        		
			        case 6: printf("  ======================================\n"
					               " |               Rap/Trap               |\n"
					               " |--------------------------------------|\n"
					               " |                                      |\n"
			                       " | 1- Travis Scott - Goosebumps         |\n"
			                       " |                                      |\n"
			                       " | 2- Circles - Post Malone             |\n"
			                       " |                                      |\n"
			                       " | 3- Spoil My Light - Post Malone      |\n"
			                       " |                                      |\n"
			                       " | 4- Drake - God's Plan                |\n"
			                       " |                                      |\n"
			                       " | 5- Hold On, We're Going Home - Drake |\n"
			                       " |                                      |\n"
			                       " | 0- Voltar                            |\n"
								   " |                                      |\n"
								   " | Digite que musica quer escutar: ");
			        		scanf("%i", &musica);
			        		fflush(stdin);
			        		
			        		switch(musica){
			        			case 0: continue;
                						break;
								case 1: system("start \musicas./.mp3");
										break;
								case 2: system("start \musicas./.mp3");
										break;
			        			case 3: system("start \musicas./.mp3");
										break;
								case 4: system("start \musicas./.mp3");
										break;
								case 5: system("start \musicas./.mp3");
										break;
			        			default: printf("\n  ================\n"
					               				" | Opção inválida |\n"
								   				"  ----------------\n");
								   		printf("\n\n");
										system("pause");
			        					 break;
							
							}//fim do switch Rap/trap
			        		break;        
			
			        case 7: printf("  ==================================\n"
					               " |               Lo-fi              |\n"
					               " |----------------------------------|\n"
					               " |                                  |\n"
			                       " | 1- Sunflower - Snuggles          |\n"
			                       " |                                  |\n"
			                       " | 2- Now that you're gone - Kavv   |\n"
			                       " |                                  |\n"
			                       " | 3- Snowman - WYS                 |\n"
			                       " |                                  |\n"
			                       " | 4- Too ugly - Natural Flavor     |\n"
			                       " |                                  |\n"
			                       " | 5- Feblu - Flughand              |\n"
			                       " |                                  |\n"
			                       " | 0- Voltar                        |\n"
								   " |                                  |\n"
								   " | Digite que musica quer escutar: ");
			        		scanf("%i", &musica);
			        		fflush(stdin);
			        		
			        		switch(musica){
			        			case 0: continue;
                						break;
								case 1: system("start \musicas./.mp3");
										break;
								case 2: system("start \musicas./.mp3");
										break;
			        			case 3: system("start \musicas./.mp3");
										break;
								case 4: system("start \musicas./.mp3");
										break;
								case 5: system("start \musicas./.mp3");
										break;
			        			default: printf("\n  ================\n"
					               				" | Opção inválida |\n"
								   				"  ----------------\n");
								   		printf("\n\n");
										system("pause");
			        					 break;
							
							}//fim do switch Lofi
			        		break;
					        
					default:printf("  ================\n"
					               " | Opção inválida |\n"
								   "  ----------------\n");
							printf("\n\n");
							system("pause");
			                break;
			    }// fim do switch generoi
                break;
    } while(generoi != 0);
    			break;
	do{
		system("cls");
        case 2: printf("  ===========================================\n"
		               " | Escolha qual gênero musical quer escutar: |\n"
		               " |-------------------------------------------|\n"
                       " | 1- Sertanejo                              |\n"
                       " | 2- MPB                                    |\n"
                       " | 3- Rock                                   |\n"
                       " | 4- Samba/Pagode                           |\n"
                       " | 5- Rap/Trap                               |\n"
                       " | 6- Funk                                   |\n"
                       " | 7- Pop                                    |\n"
                       " | 8- Eletrônica                             |\n"
                       " | 0- Voltar                                 |\n"
                       " |                                           |\n"
					   " | Digite a sua escolha: ");
                scanf("%i", &generon);
                fflush(stdin);
                system("cls");
                
                switch(generon){
                	case 0: continue;
                			break;
			        case 1: printf("  ===============================================\n"
					               " |                   Sertanejo                   |\n"
					               " |-----------------------------------------------|\n"
					               " |                                               |\n"
			                       " | 1- Na Linha do Tempo - Victor & Leo           |\n"
			                       " |                                               |\n"
			                       " | 2- Romântico Anônimo - Marcos & Belutti       |\n"
			                       " |                                               |\n"
			                       " | 3- O que 'ce' vai fazer - Fernando & Sorocaba |\n"
			                       " |                                               |\n"
			                       " | 4- Singular - Loubet                          |\n"
			                       " |                                               |\n"
			                       " | 5- O Nosso Santo Bateu - Matheus & Kauan      |\n"
			                       " |                                               |\n"
			                       " | 0- Voltar                                     |\n"
								   " |                                               |\n"
								   " | Digite que musica quer escutar: ");
			        		scanf("%i", &musica);
			        		fflush(stdin);
			        		
			        		switch(musica){
			        			case 0: continue;
			        					break;
								case 1: system("start \musicas./.mp3");
										break;
								case 2: system("start \musicas./.mp3");
										break;
								case 3: system("start \musicas./.mp3");
										break;	
			        			case 4: system("start \musicas./.mp3");
										break;
								case 5: system("start \musicas./.mp3");
										break;
								default:printf("\n  ================\n"
					                           " | Opção inválida |\n"
								               "  ----------------\n");
								        printf("\n\n");
										system("pause");
			                            break;
			        	    } // fim do switch musicas sertanejo
			    			break;
			    			
			    	case 2: printf("  =====================================\n"
					               " |                 MPB                 |\n"
					               " |-------------------------------------|\n"
					               " |                                     |\n"
			                       " | 1- Aquarela - Toquinho              |\n"
			                       " |                                     |\n"
			                       " | 2- Admirável Gado Novo - Zé Ramalho |\n"
			                       " |                                     |\n"
			                       " | 3- Chega de Saudade - João Gilberto |\n"
			                       " |                                     |\n"
			                       " | 4- País Tropical - Jorge Ben        |\n"
			                       " |                                     |\n"
			                       " | 5- Vambora - Adriana Calcanhotto    |\n"
			                       " |                                     |\n"
			                       " | 0- Voltar                           |\n"
								   " |                                     |\n"
								   " | Digite que musica quer escutar: ");
			        		scanf("%i", &musica);
			        		fflush(stdin);
			        					        		
			        		switch(musica){
			        			case 0: continue;
                						break;
								case 1: system("start \musicas./.mp3");
										break;
								case 2: system("start \musicas./.mp3");
										break;
								case 3: system("start \musicas./.mp3");
										break;	
			        			case 4: system("start \musicas./.mp3");
										break;
								case 5: system("start \musicas./.mp3");
										break;
								default:printf("\n  ================\n"
					                           " | Opção inválida |\n"
								               "  ----------------\n");
								        printf("\n\n");
										system("pause");
			                            break;
			        	    } // fim do switch musicas MPB
			        		break;
			        		
			        case 3: printf("  =============================================\n"
					               " |                     Rock                    |\n"
					               " |---------------------------------------------|\n"
					               " |                                             |\n"
			                       " | 1- Tempo Perdido - Legião Urbana            |\n"
			                       " |                                             |\n"
			                       " | 2- Os cegos do castelo - Titãs              |\n"
			                       " |                                             |\n"
			                       " | 3- Le Premier Bonheur Du Jour - Os Mutantes |\n"
			                       " |                                             |\n"
			                       " | 4- Índios - Legião Urbana                   |\n"
			                       " |                                             |\n"
			                       " | 5- Nem 5 minutos guardados - Titãs          |\n"
			                       " |                                             |\n"
			                       " | 0- Voltar                                   |\n"
								   " |                                             |\n"
								   " | Digite que musica quer escutar: ");
			        		scanf("%i", &musica);
			        		fflush(stdin);
			        		
			    			switch(musica){
			    				case 0: continue;
                						break;
								case 1: system("start \musicas./.mp3");
										break;
								case 2: system("start \musicas./.mp3");
										break;
								case 3: system("start \musicas./.mp3");
										break;	
			        			case 4: system("start \musicas./.mp3");
										break;
								case 5: system("start \musicas./.mp3");
										break;
								default:printf("\n  ================\n"
					                           " | Opção inválida |\n"
								               "  ----------------\n");
								        printf("\n\n");
										system("pause");
			                            break;
			        	    } // fim do switch musicas rock
			        		break;
			
					case 4: printf("  ==========================================\n"
					               " |               Samba/Pagode               |\n"
					               " |------------------------------------------|\n"
					               " |                                          |\n"
			                       " | 1- Camisa 10 - Turma do Pagode           |\n"
			                       " |                                          |\n"
			                       " | 2- Sua Mãe Vai Me Amar - Turma do Pagode |\n"
			                       " |                                          |\n"
			                       " | 3- Desencana - Thiaguinho                |\n"
			                       " |                                          |\n"
			                       " | 4- Deixa Tudo Como Tá - Thiaguinho       |\n"
			                       " |                                          |\n"
			                       " | 5- Vou pro Sereno - Turma do Pagode      |\n"
			                       " |                                          |\n"
			                       " | 0- Voltar                                |\n"
								   " |                                          |\n"
								   " | Digite que musica quer escutar: ");
			        		scanf("%i", &musica);
			        		fflush(stdin);
										        		
			    			switch(musica){
			    				case 0: continue;
                						break;
								case 1: system("start \musicas./.mp3");
										break;
								case 2: system("start \musicas./.mp3");
										break;
								case 3: system("start \musicas./.mp3");
										break;	
			        			case 4: system("start \musicas./.mp3");
										break;
								case 5: system("start \musicas./.mp3");
										break;
								default:printf("\n  ================\n"
					                           " | Opção inválida |\n"
								               "  ----------------\n");
								        printf("\n\n");
										system("pause");
			                            break;
			        	    } // fim do switch musicas samba/pagode
			        		break;
			        		
			        case 5: printf("  ======================================\n"
					               " |               Rap/Trap               |\n"
					               " |--------------------------------------|\n"
					               " |                                      |\n"
			                       " | 1- Até quando? - Gabriel, o Pensador |\n"
			                       " |                                      |\n"
			                       " | 2- Negro Drama - Racionais MC's      |\n"
			                       " |                                      |\n"
			                       " | 3- Mun-Rá - Sabotage                 |\n"
			                       " |                                      |\n"
			                       " | 4- Só Deus pode me julgar - MV Bill  |\n"
			                       " |                                      |\n"
			                       " | 5- Mandume - Emicida                 |\n"
			                       " |                                      |\n"
			                       " | 0- Voltar                            |\n"
								   " |                                      |\n"
								   " | Digite que musica quer escutar: ");
			        		scanf("%i", &musica);
			        		fflush(stdin);
			        					        		
			    			switch(musica){
			    				case 0: continue;
                						break;
								case 1: system("start \musicas./.mp3");
										break;
								case 2: system("start \musicas./.mp3");
										break;
								case 3: system("start \musicas./.mp3");
										break;	
			        			case 4: system("start \musicas./.mp3");
										break;
								case 5: system("start \musicas./.mp3");
										break;
								default:printf("\n  ================\n"
					                           " | Opção inválida |\n"
								               "  ----------------\n");
								        printf("\n\n");
										system("pause");
			                            break;
			        	    } // fim do switch musicas rap/trap
			        		break;
			        		
			        case 6: printf("  ==============================================================\n"
					               " |                            Funk                              |\n"
					               " |--------------------------------------------------------------|\n"
					               " |                                                              |\n"
			                       " | 1- Saudade Né? - Kevin O Chris e Dilsinho                    |\n"
			                       " |                                                              |\n"
			                       " | 2- Vai Ter Que Aguentar - MC Don Juan part. Maiara e Maraisa |\n"
			                       " |                                                              |\n"
			                       " | 3- Artigo 157 - Biel & Tatá                                  |\n"
			                       " |                                                              |\n"
			                       " | 4- Loco - Anitta                                             |\n"
			                       " |                                                              |\n"
			                       " | 5- Desce Pro Play - MC Zaac, Anitta, Tyga                    |\n"
			                       " |                                                              |\n"
			                       " | 0- Voltar                                                    |\n"
								   " |                                                              |\n"
								   " | Digite que musica quer escutar: ");
			        		scanf("%i", &musica);
			        		fflush(stdin);
			        					        		
			    			switch(musica){
			    				case 0: continue;
                						break;
								case 1: system("start \musicas./.mp3");
										break;
								case 2: system("start \musicas./.mp3");
										break;
								case 3: system("start \musicas./.mp3");
										break;	
			        			case 4: system("start \musicas./.mp3");
										break;
								case 5: system("start \musicas./.mp3");
										break;
								default:printf("\n  ================\n"
					                           " | Opção inválida |\n"
								               "  ----------------\n");
								        printf("\n\n");
										system("pause");
			                            break;
			        	    } // fim do switch musicas funk
			        		break;        
			
			        case 7: printf("  ============================================\n"
					               " |                     Pop                    |\n"
					               " |--------------------------------------------|\n"
					               " |                                            |\n"
			                       " | 1- Amor de Que - Pabllo Vittar             |\n"
			                       " |                                            |\n"
			                       " | 2- Meu Abrigo - Melim                      |\n"
			                       " |                                            |\n"
			                       " | 3- Inesquecível - Giulia Be e Luan Santana |\n"
			                       " |                                            |\n"
			                       " | 4- Lei da Vida - Sabrina Lopes             |\n"
			                       " |                                            |\n"
			                       " | 5- Ouvi Dizer - Melim                      |\n"
			                       " |                                            |\n"
			                       " | 0- Voltar                                  |\n"
								   " |                                            |\n"
								   " | Digite que musica quer escutar: ");
			        		scanf("%i", &musica);
			        		fflush(stdin);
			        					        		
			    			switch(musica){
			    				case 0: continue;
                						break;
								case 1: system("start \musicas./.mp3");
										break;
								case 2: system("start \musicas./.mp3");
										break;
								case 3: system("start \musicas./.mp3");
										break;	
			        			case 4: system("start \musicas./.mp3");
										break;
								case 5: system("start \musicas./.mp3");
										break;
								default:printf("\n  ================\n"
					                           " | Opção inválida |\n"
								               "  ----------------\n");
								        printf("\n\n");
										system("pause");
			                            break;
			        	    } // fim do switch musicas pop
			        		break;
			        		
			         case 8: printf("  ===================================================\n"
					                " |                     Eletrônica                    |\n"
					                " |---------------------------------------------------|\n"
					                " |                                                   |\n"
			                        " | 1- Hear Me Now - Alok, Bruno Martini feat. Zeeba  |\n"
			                        " |                                                   |\n"
			                        " | 2- Ocean Alok - Zeeba and IRO                     |\n"
			                        " |                                                   |\n"
			                        " | 3- Piece Of Your Heart - Alok ft. Goodboys Meduza |\n"
			                        " |                                                   |\n"
			                        " | 4- On & On - Alok & Dynoro.                       |\n"
			                        " |                                                   |\n"
			                        " | 5- Vale Vale - Alok & Zafrir.                     |\n"
			                        " |                                                   |\n"
			                        " | 0- Voltar                                         |\n"
								    " |                                                   |\n"
									" | Digite que musica quer escutar: ");
			        		scanf("%i", &musica);
			        		fflush(stdin);
			        					        		
			    			switch(musica){
			    				case 0: continue;
                						break;
								case 1: system("start \musicas./.mp3");
										break;
								case 2: system("start \musicas./.mp3");
										break;
								case 3: system("start \musicas./.mp3");
										break;	
			        			case 4: system("start \musicas./.mp3");
										break;
								case 5: system("start \musicas./.mp3");
										break;
								default:printf("\n  ================\n"
					                           " | Opção inválida |\n"
								               "  ----------------\n");
								        printf("\n\n");
				                        system("pause");
			                            break;
			        	    } // fim do switch musicas eletronica
			        		break;       		
					        
					default:printf("\n  ================\n"
					               " | Opção inválida |\n"
								   "  ----------------\n");
							printf("\n\n");
				            system("pause");
			                break;
			    }// fim do switch generon
		        break;              
    } while(generon != 0);
    			break;
	do{
		system("cls");
        case 3: printf( "  ============================\n"
						" | Programa desenvolvido por: |\n"
						" |----------------------------|\n"
                        " |                            |\n"
						" | Diogo Pereira Almeida      |\n"
						" |                            |\n"
                        " | Fernando Silva Martins     |\n"
                        " |                            |\n"
                        " | João Victor Rosa Tagliarini|\n"
						" |                            |\n"
						" | 0- Voltar  ");
				scanf("%i", &dev);
				fflush(stdin);
				
				if(dev==0)
					continue;
				else{
					printf("\n  ================\n"
					       " | Opção inválida |\n"
					       "  ----------------\n");
					printf("\n\n");
					system("pause");
			    } 
    } while(dev != 0);
    			break;
		
		case 0: printf("\n  =================\n"
					   " | Muito obrigado! |\n"
					   "  -----------------\n");
				break;
		
        default:printf("\n  ================\n"
					   " | Opção inválida |\n"
					   "  ----------------\n");
				printf("\n\n");
				system("pause");
                break;
    }//fim do switch nacionalidade
} while(nacionalidade!=0);

    printf("\n\n");
    system("pause");
    return 0;
}//fim da main

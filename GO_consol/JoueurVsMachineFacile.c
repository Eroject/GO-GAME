int JouerVsMachineFacile(char tableaudynamique[21][45],char *tab_p/*,char nom_joueurM[100]*/,int *tab_de_position_noires,int *je,int *existe){
int scoreBa,scoreNo;
    char MotPasseJM[20];
  char nom_joueurM[100];
    scoreBa=0;
    scoreNo=0;
    int *scoreB,*scoreN;
    scoreB=malloc(4);
    scoreN=malloc(4);
    *scoreB=0;
    *scoreN=0;
    char lignet[1000],colonnet[1000];
    int ligne,colonne;
    char test_de_fin_variable_tab[1000];
    revenir_au_menu_facile:
        printf(".");
        system("cls");
    printf("\t\t--- Vous avez choisi de jouer contre la machine _ Niveau facile:\n");
            printf("\n\t\t\t>> Veuillez entrer votre nom :");
             scanf("%s",&nom_joueurM);
             printf("\n\t\t\t>> Veuillez entrer  un Mot de Passe (ne depassant pas 19 lettre):");
             scanf("%s",&MotPasseJM);
             system("cls");

   if(QuiCommence()==1){
           int interditN[10][10];
           int interditB[10][10];
           for(int i=0;i<=9;i++){
              for(int j=0;j<=9;j++){
                interditN[i][j]=0;
                interditB[i][j]=0;
                }
        }


        int test_de_fin_variable=1;
        PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'N',2);
        while(test_de_fin_variable==1){
            demande_de_positon_1_jM1:
            printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \n",205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205);
           printf("le joueur %s (N), veuillez choisir une position: \n",nom_joueurM);
                    printf(">>>>ligne: ");
                    scanf("%s",&lignet);
                    printf("\n>>>>colonne: ");
                    scanf("%s",&colonnet);
                    system("cls");
            if( ChoixEstStablefinal(lignet,10)==-1){
        PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'N',2);
                        goto demande_de_positon_1_jM1;
                     }
                     else{  ligne=ChoixEstStablefinal(lignet,10);}
                    if( ChoixEstStablefinal(colonnet,10)==-1){
        PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'N',2);
                        goto demande_de_positon_1_jM1;
                     }
                     else{  colonne=ChoixEstStablefinal(colonnet,10);}


            if(test_de_position_du_jeton(tableaudynamique,ligne,colonne,'N',1)==0){
                    red();
                printf("\t\t\tcette position est pleine:\n");
        PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'N',2);
            green();
                goto demande_de_positon_1_jM1;
                }
            if(interditN[ligne][colonne]==1){
                    printf("passer par ici");getch();
                red();
                         printf("\t\t\tcette position est interdite:\n");
        PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'N',2);
                         green();
                         goto demande_de_positon_1_jM1;

                       }
            if(test_de_position_du_jeton(tableaudynamique,ligne,colonne,'N',1)==1){
                AfficherTabDynamique(tableaudynamique,ligne,colonne,'N');

                #include "RegleKo_du_noir.c"

                (scoreNo)=(scoreNo)+ATARI_GO_du_noir(tableaudynamique,scoreN,tab_de_position_noires,je,existe,tab_p);
                (scoreBa)=(scoreBa)+ATARI_GO_du_blanc(tableaudynamique,scoreB,tab_de_position_noires,je,existe,tab_p);
        PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'E',2);
            }
            if(TestDeFin(tableaudynamique)==0){
                    red();
                   printf(">>>>la fin de partie;\n ");
            green();
                   if(scoreBa<scoreNo){printf("\n\t\t\t>>>> Bravoo %s vous avez ganee :\n ",nom_joueurM);}
                   if(scoreBa==scoreNo){printf("\n\t\t\t>>>>Pas de gagnat , parties egales \n");}
                   if(scoreBa>scoreNo){printf("\n\t\t\t>>>> OOOOPS Vous avez perdu:\n");}
                     printf("<<<<< cliquez sur un bouton pour revenir au menu precedent\n");
                             getch();
                              system("cls");
                    return 0;
                }
            iciM2:
                            printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \n",205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205);

            printf("pour revenir au menu precedent tapez 1:\npour continuer tapez 2:");
             scanf("%s",test_de_fin_variable_tab);

                    if( ChoixEstStablefinal(test_de_fin_variable_tab,2)==-1){
                        PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'E',1);
                        goto iciM2;
                     }
                     else{  test_de_fin_variable=ChoixEstStablefinal(test_de_fin_variable_tab,2)-1;}
            if(test_de_fin_variable==0){
                    printf("--Score finale: \n");
                    printf("<<<<< score de la  Machine:%d\n",(scoreBa));
                    printf("<<<<< score du joueur:%d\n",(scoreNo));
                      printf("<<<<< cliquez sur un bouton pour revenir au menu precedent\n");
                             getch();
                              system("cls");
                     return 0;
            }
            printf("\ntour de machine, la machine a jouee\n");
            demande_de_positon_1_jM2: //fct jouer la machine aleatoire
            //system("cls");
            ligne=ligne_aleatoire();
            colonne=colonne_aleatoire();
            if(test_de_position_du_jeton(tableaudynamique,ligne,colonne,'B',1)==0){
                goto demande_de_positon_1_jM2;
                }
            if(interditB[ligne][colonne]==1){
                    red();

            green();
                         goto demande_de_positon_1_jM2;

                }
            if(test_de_position_du_jeton(tableaudynamique,ligne,colonne,'B',1)==1){
                AfficherTabDynamique(tableaudynamique,ligne,colonne,'B');

            #include "RegleKo_du_blanc.c"

                (scoreBa)=(scoreBa)+ATARI_GO_du_blanc(tableaudynamique,scoreB,tab_de_position_noires,je,existe,tab_p);
                (scoreNo)=(scoreNo)+ATARI_GO_du_noir(tableaudynamique,scoreN,tab_de_position_noires,je,existe,tab_p);
                        PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'E',1);
            }

            if(TestDeFin(tableaudynamique)==0){
                   printf(">>>>la fin de partie;\n ");
                   if(scoreBa>scoreNo){printf("\n\t\t\t>>>> Bravoo %s vous avez ganee :\n ",nom_joueurM);}
                   if(scoreBa==scoreNo){printf("\n\t\t\t>>>>Pas de gagnat , parties egales \n");}
                   if(scoreBa<scoreNo){printf("\n\t\t\t>>>> OOOOPS Vous avez perdu:\n");}
                     printf("<<<<< cliquez sur un bouton pour revenir au menu precedent\n");
                             getch();
                              system("cls");
                    return 0;
                              }
           /* printf("pour revenir au menu precedent tapez 0:\n pour continuer tapez 1:");
            scanf("%d",&test_de_fin_variable);
            system("cls");*/
            if(test_de_fin_variable==0){
                 printf("--Score finale: \n");
                 printf("<<<<< score de la  Machine:%d\n",(scoreBa));
                 printf("<<<<< score du joueur:%d\n",(scoreNo));
                   printf("<<<<< cliquez sur un bouton pour revenir au menu precedent\n");
                             getch();
                              system("cls");
                   return 0;
            }
          }
   }
         if(QuiCommence()==2){
            int interditN[9][9];
            int interditB[9][9];
            for(int i=0;i<9;i++){
              for(int j=0;j<9;j++){
                interditN[i][j]=0;
                interditB[i][j]=0;
                }
             }
         //PrintTabDynamique(tableaudynamique);

                int test_de_fin_variable=1;
                while(test_de_fin_variable==1){

                   printf("\n tour de machine,machine à jouee:\n") ;
                   demande_de_positon_2_jM1:
                    ligne=ligne_aleatoire();
                    colonne=colonne_aleatoire();
                    if(test_de_position_du_jeton(tableaudynamique,ligne,colonne,'N',1)==0){
                       goto demande_de_positon_2_jM1;
                     }
                     if(interditN[ligne][colonne]==1){
                            red();
                         //printf("cette position est interdite:\n");
                     green();
                         goto demande_de_positon_2_jM1;

                       }
                    //fct jouer la machine aleatoire qui returnera le ligne et la colonne
                    if(test_de_position_du_jeton(tableaudynamique,ligne,colonne,'N',1)==1){
                             AfficherTabDynamique(tableaudynamique,ligne,colonne,'N');

                             #include "RegleKo_du_noir.c"
                            (scoreNo)=(scoreNo)+ATARI_GO_du_noir(tableaudynamique,scoreN,tab_de_position_noires,je,existe,tab_p);
                            (scoreBa)=(scoreBa)+ATARI_GO_du_blanc(tableaudynamique,scoreB,tab_de_position_noires,je,existe,tab_p);
                        PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'E',2);
                    }

                    if(TestDeFin(tableaudynamique)==0){
                            printf(">>>>la fin de partie;\n ");
                           if(scoreBa>scoreNo){printf("\n\t\t\t>>>> Bravoo %s vous avez ganee : \n",nom_joueurM);}
                           if(scoreBa==scoreNo){printf("\n\t\t\t>>>>Pas de gagnat , parties egales \n ");}
                           if(scoreBa<scoreNo){printf("\n\t\t\t>>>> OOOOPS Vous avez perdu:\n");}
                             printf("<<<<< cliquez sur un bouton pour revenir au menu precedent\n");
                             getch();
                             system("cls");
                                return 0;
                              }
                    system("cls");
                    PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'B',2);

                    demande_de_positon_2_jM2:


            printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \n",205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205);
           // printf("le joueur %s (N), veuillez choisir une position: \n",nom_joueurM);
                    printf(">>>>ligne: ");
                    scanf("%s",&lignet);
                    printf("\n>>>>colonne: ");
                    scanf("%s",&colonnet);
                    system("cls");
            if( ChoixEstStablefinal(lignet,10)==-1){
                    PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'B',2);
                        goto demande_de_positon_2_jM2;
                     }
                     else{  ligne=ChoixEstStablefinal(lignet,10);}
                    if( ChoixEstStablefinal(colonnet,10)==-1){
                    PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'B',2);
                        goto demande_de_positon_2_jM2;
                     }
                     else{  colonne=ChoixEstStablefinal(colonnet,10);}

                    if(test_de_position_du_jeton(tableaudynamique,ligne,colonne,'B',1)==0){
                            red();
                         printf("\t\t\tcette position est pleine:\n ");
                    green();
                    PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'B',2);
                         goto demande_de_positon_2_jM2;


                       }
                    if(interditB[ligne][colonne]==1){
                            red();
                         printf("\t\t\tcette position est interdite:\n");
                    green();
                    PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'B',2);
                         goto demande_de_positon_2_jM2;

                       }

                    if(test_de_position_du_jeton(tableaudynamique,ligne,colonne,'B',1)==1  )
                         {
                            AfficherTabDynamique(tableaudynamique,ligne,colonne,'B');

                            #include "RegleKo_du_blanc.c"
                               (scoreBa)=(scoreBa)+ATARI_GO_du_blanc(tableaudynamique,scoreB,tab_de_position_noires,je,existe,tab_p);
                               (scoreNo)=(scoreNo)+ATARI_GO_du_noir(tableaudynamique,scoreN,tab_de_position_noires,je,existe,tab_p);

                    PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'E',2);
                         }


                   if(TestDeFin(tableaudynamique)==0)
                    {
                            printf(">>>>la fin de partie;\n ");
                           if(scoreBa>scoreNo){printf("\n\t\t\t>>>> Bravoo %s vous avez ganee : \n",nom_joueurM);}
                           if(scoreBa==scoreNo){printf("\n\t\t\t>>>>Pas de gagnat , parties egales \n");}
                           if(scoreBa<scoreNo){printf("\n\t\t\t>>>> OOOOPS Vous avez perdu:\n");}
                             printf("<<<<< cliquez sur un bouton pour revenir au menu precedent\n");
                             getch();
                              system("cls");
                             return 0;
                    }
                    iciM1:
                  printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \n",205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205);

                   printf("pour revenir au menu precedent tapez 1:\npour continuer tapez 2:");
             scanf("%s",test_de_fin_variable_tab);

                    if( ChoixEstStablefinal(test_de_fin_variable_tab,2)==-1){
                    PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'B',2);
                        goto iciM1;
                     }
                     else{  test_de_fin_variable=ChoixEstStablefinal(test_de_fin_variable_tab,2)-1;}
                    if(test_de_fin_variable==0){
                            printf("--Score finale: \n");
                            printf("<<<<< score de la  Machine:%d\n",(scoreNo));
                            printf("<<<<< score du joueur %s :%d\n",nom_joueurM,(scoreBa));
                             printf("<<<<< cliquez sur un bouton pour revenir au menu precedent\n");
                             getch();
                              system("cls");
                             return 0;
                }
            }

       }

}



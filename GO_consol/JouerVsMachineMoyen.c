int JouerVsMachineMoyen(char tableaudynamique[21][45],char *tab_p/*,char nom_joueurM[100]*/,int *tab_de_position_noires,int *je,int *existe){
int coupB=0,coupN=0,be;
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
    int *li,*colo;
    li=malloc(4);
    colo=malloc(4);
    char test_de_fin_variable_tab[1000];
    revenir_au_menu_facile:
    printf("--- Vous avez choisi de jouer contre la machine _ Niveau  Moyen:\n");
            printf("\n\t\t\t>> Veuillez entrer votre nom :");
             scanf("%s",&nom_joueurM);
             printf("\n\t\t\t>> Veuillez entrer  un Mot de Passe (ne depassant pas 19 lettre):");
             scanf("%s",&MotPasseJM);
             system("cls");
if(QuiCommence()==1){
            int interditN[9][9];
           int interditB[9][9];
           for(int i=0;i<9;i++){
              for(int j=0;j<9;j++){
                interditN[i][j]=0;
                interditB[i][j]=0;
                }
        }
        PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'N',2);
        int test_de_fin_variable=1;

        while(test_de_fin_variable==1){
            demande_de_positon_1_jM1:
            system("cls");
        PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'N',2);
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


            if(test_de_position_du_jeton(tableaudynamique,ligne,colonne,'N',0)==0){
                    red();
                printf("cette position est invalide :\n");
            green();
                system("cls");
                PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'N',2);
                goto demande_de_positon_1_jM1;
                }
            system("cls");
            if(interditN[ligne][colonne]==1){
                    red();
                         printf("cette position est interdite:\n");
                system("cls");
             green();
                        PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'N',2);
                         goto demande_de_positon_1_jM1;

                       }

            if(test_de_position_du_jeton(tableaudynamique,ligne,colonne,'N',0)==1){
                AfficherTabDynamique(tableaudynamique,ligne,colonne,'N');

                #include "RegleKo_du_noir.c"
                (scoreNo)=(scoreNo)+ATARI_GO_du_noir(tableaudynamique,scoreN,tab_de_position_noires,je,existe,tab_p);
                (scoreBa)=(scoreBa)+ATARI_GO_du_blanc(tableaudynamique,scoreB,tab_de_position_noires,je,existe,tab_p);

        PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'E',2);}

            if(TestDeFin(tableaudynamique)==0){
                   printf(">>>>la fin de partie;\n ");
                   if(scoreBa<scoreNo){printf("\n\t\t\t>>>> Bravoo %s vous avez ganee :\n ",nom_joueurM);
                    TraitementDeFinDePartie("MACHINE","AAAA", nom_joueurM,MotPasseJM);}
                   if(scoreBa==scoreNo){printf("\n\t\t\t>>>>Pas de gagnant , parties egales \n");}
                   if(scoreBa>scoreNo){printf("\n\t\t\t>>>> OOOOPS Vous avez perdu:\n");
                   TraitementDeFinDePartie( nom_joueurM,MotPasseJM,"MACHINE","AAAA");}
                    printf("<<<<< cliquez sur un bouton pour revenir au menu precedent\n");
                    getch();
                              system("cls");
                             return 0;
                }
                iciM4:
             printf("pour revenir au menu precedent tapez 1:\n pour continuer tapez 2:");
             scanf("%s",test_de_fin_variable_tab);

                    if( ChoixEstStablefinal(test_de_fin_variable_tab,2)==-1){
        PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'E',2);
                        goto iciM4;
                     }
                     else{  test_de_fin_variable=ChoixEstStablefinal(test_de_fin_variable_tab,2)-1;}

                            system("cls");
        PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'E',2);
            if(test_de_fin_variable==0){
                    printf("--Score finale: \n");
                    printf("<<<<< score de la  Machine:%d\n",(scoreBa));
                    printf("<<<<< score du joueur:%d\n",(scoreNo));
                             printf("<<<<< cliquez sur un bouton pour revenir au menu precedent\n");
                   printf(">>>>la fin de partie;\n ");
                   if(scoreBa<scoreNo){printf("\n\t\t\t>>>> Bravoo %s vous avez ganee :\n ",nom_joueurM);
                    TraitementDeFinDePartie("MACHINE","AAAA", nom_joueurM,MotPasseJM);}
                   if(scoreBa==scoreNo){printf("\n\t\t\t>>>>Pas de gagnant , parties egales \n");}
                   if(scoreBa>scoreNo){printf("\n\t\t\t>>>> OOOOPS Vous avez perdu:\n");
                   TraitementDeFinDePartie( nom_joueurM,MotPasseJM,"MACHINE","AAAA");}
                    printf("<<<<< cliquez sur un bouton pour revenir au menu precedent\n");
                    getch();
                              system("cls");
                             return 0;
            }
            red();
            printf("\ntour de machine, la machine a jouee\n");
            system("cls");
            green();
            int *mB;
             mB=malloc(4);
            demande_de_positon_1_jM2:
                *mB=0;

            ligne=ligne_aleatoire();
            colonne=colonne_aleatoire();
            ici34B:
                 {
        #include "TsumeGoFondamental_du_B.c"
        #include "TsumeGoFondamental_Defense_du_blanc.c"
        #include "CoupInterditMMoyen_du_blanc.c"
        #include "TsumeGoattaqueOblligatoireB.c"
            if(test_de_position_du_jeton(tableaudynamique,ligne,colonne,'B',0)==0){
               goto demande_de_positon_1_jM2;
                }


            if(interditB[ligne][colonne]==1){

                                       system("cls");
        PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'N',2);
                green();
                         goto demande_de_positon_1_jM2;

                }
            // #include "TsumeGoUn_du_blanc.c"
            #include "TsumeGoDeux_du_blanc.c"
           #include "TsumeGoTrois_du_blanc.c"

            if(test_de_position_du_jeton(tableaudynamique,ligne,colonne,'B',0)==1){

                AfficherTabDynamique(tableaudynamique,ligne,colonne,'B');
                ici1:

                #include "RegleKo_du_blanc.c"
                 (scoreBa)=(scoreBa)+ATARI_GO_du_blanc(tableaudynamique,scoreB,tab_de_position_noires,je,existe,tab_p);
                (scoreNo)=(scoreNo)+ATARI_GO_du_noir(tableaudynamique,scoreN,tab_de_position_noires,je,existe,tab_p);

        PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'E',2);}


            if(TestDeFin(tableaudynamique)==0){
                   printf(">>>>la fin de partie;\n ");
                   if(scoreBa>scoreNo){printf("\n\t\t\t>>>> Bravoo %s vous avez ganee :\n ",nom_joueurM);
                   TraitementDeFinDePartie("MACHINE","AAAA", nom_joueurM,MotPasseJM);}
                   if(scoreBa==scoreNo){printf("\n\t\t\t>>>>Pas de gagnat , parties egales \n");}
                   if(scoreBa<scoreNo){printf("\n\t\t\t>>>> OOOOPS Vous avez perdu:\n");
                   TraitementDeFinDePartie( nom_joueurM,MotPasseJM,"MACHINE","AAAA");}
                             printf("<<<<< cliquez sur un bouton pour revenir au menu precedent\n");
                             getch();
                              system("cls");
                             return 0;
                              }
           /* printf("pour revenir au menu precedent tapez 0:\n pour continuer tapez 1:");
            scanf("%d",&test_de_fin_variable);
            if(test_de_fin_variable==0){
                 printf("--Score finale: \n");
                 printf("<<<<< score de la  Machine:%d\n",(scoreBa));
                 printf("<<<<< score du joueur:%d\n",(scoreNo));
                             printf("<<<<< cliquez sur un bouton pour revenir au menu precedent\n");
                             getch();
                              system("cls");
                             return 0;
            }*/
            }

       }
}


  if(QuiCommence()==2){
            int interditN[9][9];
            int interditB[9][9];
            for(int i=0;i<=9;i++){
              for(int j=0;j<=9;j++){
                interditN[i][j]=0;
                interditB[i][j]=0;
                }
             }
                AfficherTabStatique();
                int test_de_fin_variable=1;
                while(test_de_fin_variable==1){
                 system("cls");
                 red();
                   printf("\n                         tour de machine,machine a jouee:\n") ;

                   green();
                  //m est utiliser dans coupInterdits il nous aide a compter le nombre de fois dont le coup est interdit
                int *mN;
                mN=malloc(4);
                   demande_de_positon_2_jM1:

                *mN=0;

                    ligne=ligne_aleatoire();
                    colonne=colonne_aleatoire();

                ici34N:
                   {
                   #include "TsumeGoFondamental_du_N.c"
                    #include "TsumeGoUn_du_noir.c"
                    #include "TsumeGoDeux_du_noir.c"
                     #include "TsumeGoTrois_du_noir.c"
                    #include "TsumeGoFondamental_Defense_du_noir.c"
                     #include "CoupInterditMMoyen_du_noir.c"
                     #include "TsumeGoattaqueOblligatoireN.c"

                   if(test_de_position_du_jeton(tableaudynamique,ligne,colonne,'N',0)==0){
                       goto demande_de_positon_2_jM1;
                     }



                     if(interditN[ligne][colonne]==1){
                          ligne=ligne_aleatoire();
                        colonne=colonne_aleatoire();
                         goto demande_de_positon_2_jM1;

                       }

                    //fct jouer la machine aleatoire qui returnera le ligne et la colonne
                    if(test_de_position_du_jeton(tableaudynamique,ligne,colonne,'N',0)==1){
                             AfficherTabDynamique(tableaudynamique,ligne,colonne,'N');


                                ici2:
                              for(int i=0;i<=9;i++){
                                for(int j=0;j<=9;j++){
                                interditN[i][j]=0;}
                                }
                           #include "RegleKo_du_noir.c"
                            (scoreNo)=(scoreNo)+ATARI_GO_du_noir(tableaudynamique,scoreN,tab_de_position_noires,je,existe,tab_p);
                            (scoreBa)=(scoreBa)+ATARI_GO_du_blanc(tableaudynamique,scoreB,tab_de_position_noires,je,existe,tab_p);

                                    PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'B',2);}

                    if(TestDeFin(tableaudynamique)==0){
                            printf(">>>>la fin de partie;\n ");
                           if(scoreBa>scoreNo){printf("\n\t\t\t>>>> Bravoo %s vous avez ganee : \n",nom_joueurM);
                           TraitementDeFinDePartie("MACHINE","AAAA", nom_joueurM,MotPasseJM);}
                           if(scoreBa==scoreNo){printf("\n\t\t\t>>>>Pas de gagnat , parties egales \n ");}
                           if(scoreBa<scoreNo){printf("\n\t\t\t>>>> OOOOPS Vous avez perdu:\n");
                           TraitementDeFinDePartie( nom_joueurM,MotPasseJM,"MACHINE","AAAA");}
                             printf("<<<<< cliquez sur un bouton pour revenir au menu precedent\n");
                             getch();
                              system("cls");
                             return 0;
                              }

                       }
                    demande_de_positon_2_jM2:
                  //  printf("le joueur %s (B), veuillez choisir une position: \n",nom_joueurM);
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


                    if(test_de_position_du_jeton(tableaudynamique,ligne,colonne,'B',0)==0){
                            red();
                         printf("cette position est invalide:\n");
                    green();
                                     system("cls");
        PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'B',2);
                         goto demande_de_positon_2_jM2;

                       }
                    if(interditB[ligne][colonne]==1){
                            red();
                         printf("cette position est interdite:\n");
                                         system("cls");
                    green();
        PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'B',2);
                         goto demande_de_positon_2_jM2;

                       }
                    /*if(interditB[ligne][colonne]==1){
                         printf("cette position est interdite:\n");
                         goto demande_de_positon_2_jM2;

                       }*/
                    if(test_de_position_du_jeton(tableaudynamique,ligne,colonne,'B',0)==1  )
                         {
                            AfficherTabDynamique(tableaudynamique,ligne,colonne,'B');
                             for(int i=0;i<=9;i++){
                               for(int j=0;j<=9;j++){
                                interditB[i][j]=0;
                                    }
                                }
                            #include "RegleKo_du_blanc.c"
                              (scoreBa)=(scoreBa)+ATARI_GO_du_blanc(tableaudynamique,scoreB,tab_de_position_noires,je,existe,tab_p);
                              (scoreNo)=(scoreNo)+ATARI_GO_du_noir(tableaudynamique,scoreN,tab_de_position_noires,je,existe,tab_p);

        PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'E',2);}
                            if(TestDeFin(tableaudynamique)==0)
                    {
                            printf(">>>>la fin de partie;\n ");
                           if(scoreBa>scoreNo){printf("\n\t\t\t>>>> Bravoo %s vous avez ganee : \n",nom_joueurM);
                           TraitementDeFinDePartie("MACHINE","AAAA", nom_joueurM,MotPasseJM);}
                           if(scoreBa==scoreNo){printf("\n\t\t\t>>>>Pas de gagnat , parties egales \n");}
                           if(scoreBa<scoreNo){printf("\n\t\t\t>>>> OOOOPS Vous avez perdu:\n");
                           TraitementDeFinDePartie( nom_joueurM,MotPasseJM,"MACHINE","AAAA");}
                             printf("<<<<< cliquez sur un bouton pour revenir au menu precedent\n");
                             getch();
                              system("cls");
                             return 0;
                    }
                    iciM3:
                    printf("pour revenir au menu precedent tapez 1:\n pour continuer tapez 2:");
                    scanf("%s",test_de_fin_variable_tab);
                    if( ChoixEstStablefinal(test_de_fin_variable_tab,2)==-1){
                        PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'E',2);
                        goto iciM3;
                     }
                     else{  test_de_fin_variable=ChoixEstStablefinal(test_de_fin_variable_tab,2)-1;}
                    //  system("cls");
                    if(test_de_fin_variable==0){
                            printf("--Score finale: \n");
                            printf("<<<<< score de la  Machine:%d\n",(scoreNo));
                            printf("<<<<< score du joueur %s :%d\n",nom_joueurM,(scoreBa));
                            printf("<<<<< cliquez sur un bouton pour revenir au menu precedent\n");
                            printf(">>>>la fin de partie;\n ");
                           if(scoreBa>scoreNo){printf("\n\t\t\t>>>> Bravoo %s vous avez ganee : \n",nom_joueurM);
                           TraitementDeFinDePartie("MACHINE","AAAA", nom_joueurM,MotPasseJM);}
                           if(scoreBa==scoreNo){printf("\n\t\t\t>>>>Pas de gagnat , parties egales \n");}
                           if(scoreBa<scoreNo){printf("\n\t\t\t>>>> OOOOPS Vous avez perdu:\n");
                           TraitementDeFinDePartie( nom_joueurM,MotPasseJM,"MACHINE","AAAA");}
                             printf("<<<<< cliquez sur un bouton pour revenir au menu precedent\n");
                             getch();
                              system("cls");
                             return 0;
                }
            }

       }
}


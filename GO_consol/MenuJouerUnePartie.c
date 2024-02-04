
int QuiCommence(){
    srand(time(NULL));
    return((rand()%2)+1);
    }
int MenuJouerUnePartie(int num){

    revenir_au_menu_prcedent:
        red();
        printf("\n\n\n\t\t\t Bienvenue:\n\n\n");

    int *tab_de_position_noires,*je;
        je=malloc(4);
        *je=0;
        tab_de_position_noires=malloc(4*45*13);
            for(int r=0;r<586;r++){
                   {
                        *(tab_de_position_noires+r)=0;
                    }
                }
        int *existe;
        existe=malloc(4);
        *existe=0;

    char num_char[1000];// num pour permettre au joueur de choisir soit jouer contre un amie ou de jouer contre la machine
    char nom_joueur1[100];
    char nom_joueur2[100];
    char nom_joueurM[100];
    char MotPasseJ1[20];
    char MotPasseJ2[20];
    char MotPasseJM[20];

///TSUMEGO 1
char tableaudynamique[21][45]={
                        {"  1    2    3    4    5    6    7    8    9 "},
                        {"                                            "},
                        {"1 _________________________________________ "},
                        {"  |    |    |    |    |    |    |    |    | "},
                        {"2 |____|____|____|____|____|____|____|____| "},
                        {"  |    |    |    |    |    |    |    |    | "},
                        {"3 |____|____|____|____|____|____|____|____| "},
                        {"  |    |    |    |    |    |    |    |    | "},
                        {"4 |____|____|____|____|____|____|____|____| "},
                        {"  |    |    |    |    |    |    |    |    | "},
                        {"5 |____|____|____|____|____|____|____|____| "},
                        {"  |    |    |    |    |    |    |    |    | "},
                        {"6 |____|____|____|____|____|____|____|____| "},
                        {"  |    |    |    |    |    |    |    |    | "},
                        {"7 |____|____|____|____|____|____|____|____| "},
                        {"  |    |    |    |    |    |    |    |    | "},
                        {"8 |____|____|____|____|____|____|____|____| "},
                        {"  |    |    |    |    |    |    |    |    | "},
                        {"9 |____|____|____|____|____|____|____|____| "},
                        {"                                            "}};

     char *tab_p;
     tab_p=malloc((45*13));
     tab_p=tableaudynamique;

        if (num==1){
            int scoreBa,scoreNo;
            scoreBa=0;
            scoreNo=0;
            int *scoreB,*scoreN;
            scoreB=malloc(4);
            scoreN=malloc(4);
            *scoreB=0;
            *scoreN=0;
             char lignet[1000],colonnet[1000];
             int ligne,colonne;
             green();
             printf("--- Vous avez choisi de jouer contre un ami:\n");

             printf("\t\t\t>> le joueur 1, veuillez entrer ");
             red();
             printf("votre nom :");
             green();
             scanf("%s",&nom_joueur1);
             printf("\n\t\t\t>> veuillez entrer  ");
             red();
             printf("un Mot de Passe (ne depassant pas 19 lettre):");
             green();
             scanf("%s",&MotPasseJ1);
             printf("\n\t\t\t>> le joueur 2, veuillez entrer ");
              red();
             printf("votre nom :");
             green();
             scanf("%s",&nom_joueur2);
             printf("\n\t\t\t>> veuillez entrer  ");
             red();
             printf("un Mot de Passe (ne depassant pas 19 lettre):");
             green();
             scanf("%s",&MotPasseJ2);
             system("cls");

             ///ici on ajoute la fonction qui déterminera si ona une partie à handicap ou non
            int HandicapOuNon= DetermineHandicap(nom_joueur1,MotPasseJ1,nom_joueur2,MotPasseJ2);
             int interditN[9][9];
             int interditB[9][9];
             for(int i=0;i<9;i++){
                for(int j=0;j<9;j++){
                    interditN[i][j]=0;
                    interditB[i][j]=0;
                }
             }

             int CountPassedJ1=0;int CountPassedJ2=0;

char test_de_fin_variable_tab[100];
///********************* si on n'a pas partie à handicap ie la fonction DetermineHandicap(nom_joueur1,MotPasseJ1,nom_joueur2,MotPasseJ2) return 0;
            if(HandicapOuNon==0){
              if(QuiCommence()==1)
                {

        PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'N',1);

                int test_de_fin_variable=1;

                while(test_de_fin_variable==1){
                 CountPassedJ1=0;CountPassedJ2=0;
                    demande_de_positon_j1:

                    scanf("%s",test_de_fin_variable_tab);

                    if( ChoixEstStablefinal(test_de_fin_variable_tab,3)==-1){
        PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'N',1);
                        goto demande_de_positon_j1;
                     }
                     else{  test_de_fin_variable=ChoixEstStablefinal(test_de_fin_variable_tab,3);}
        PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'N',1);


                    if(test_de_fin_variable==3){
                           printf("\n\t>> le joueur %s ,a quitte, le gagnant est : %s",nom_joueur1,nom_joueur2);
                           TraitementDeFinDePartie(nom_joueur2,MotPasseJ2, nom_joueur1, MotPasseJ1);
                           exit(1); //goto revenir_au_menu_prcedent;
                      }
                    if(test_de_fin_variable==2){

                                if(CountPassedJ2==1){
                                    printf(">>>>la fin de partie;\n ");
                             #include "TestDeFinT.c"
                            if(scoreBa<scoreNo){printf("\n\t\t\t>>le gagnant est : %s",nom_joueur1);
                            TraitementDeFinDePartie(nom_joueur1,MotPasseJ1, nom_joueur2, MotPasseJ2);}
                            if(scoreBa==scoreNo){printf("\n\t\t\t>>Pas de gagnant , parties egales ");
                            }
                            if(scoreBa>scoreNo){printf("\n\t\t\t>>le gagnant est : %s\n",nom_joueur2);
                            TraitementDeFinDePartie(nom_joueur2,MotPasseJ2, nom_joueur1, MotPasseJ1);}
                            exit(1);
                            goto  revenir_au_menu_prcedent;
                                }
                                if(CountPassedJ2==0){
                                    CountPassedJ1=1;
                                    system("cls");
                                    PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'B',1);
                                    goto demande_de_positon_j2;
                                }




                    }
                    system("cls");
                    PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'N',2);

                    CountPassedJ2=0;
                   choix1:
                    printf(">>>>ligne: ");
                    scanf("%s",&lignet);
                    printf("\n>>>>colonne: ");
                    scanf("%s",&colonnet);
                    system("cls");
                    if( ChoixEstStablefinal(lignet,10)==-1){
                    PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'N',2);
                        goto choix1;
                     }
                     else{  ligne=ChoixEstStablefinal(lignet,10);}
                    if( ChoixEstStablefinal(colonnet,10)==-1){
                    PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'N',2);
                        goto choix1;
                     }
                     else{  colonne=ChoixEstStablefinal(colonnet,10);}

                    if(test_de_position_du_jeton(tableaudynamique,ligne,colonne,'N',1)==0){
                         printf("cette position est invalide :\n");
                    PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'N',2);
                         goto choix1;}
                    if(interditN[ligne][colonne]==1){
                         printf("cette position est interdite:\n");
                    PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'N',2);
                         goto choix1;
                       }


                    if(test_de_position_du_jeton(tableaudynamique,ligne,colonne,'N',1)==1)
                         {
                            AfficherTabDynamique(tableaudynamique,ligne,colonne,'N');


                            #include "RegleKo_du_noir.c"

                    //PrintTabDynamique(tableaudynamique);
                            (scoreNo)=(scoreNo)+ATARI_GO_du_noir(tableaudynamique,scoreN,tab_de_position_noires,je,existe,tab_p);
                            (scoreBa)=(scoreBa)+ATARI_GO_du_blanc(tableaudynamique,scoreB,tab_de_position_noires,je,existe,tab_p);
                    PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'B',1);

                          }
                    if(TestDeFin(tableaudynamique)==0)
                    {
                            printf(">>>>la fin de partie;\n ");
                             #include "TestDeFinT.c"
                            if(scoreBa<scoreNo){printf("\n\t\t\t>>le gagnant est : %s",nom_joueur1);
                            TraitementDeFinDePartie(nom_joueur1,MotPasseJ1, nom_joueur2, MotPasseJ2);}
                            if(scoreBa==scoreNo){printf("\n\t\t\t>>Pas de gagnant , parties egales ");}
                            if(scoreBa>scoreNo){printf("\n\t\t\t>>le gagnant est : %s\n",nom_joueur2);
                            TraitementDeFinDePartie(nom_joueur2,MotPasseJ2, nom_joueur1, MotPasseJ1);}
                           exit(1); //goto  revenir_au_menu_prcedent;
                    }
                    system("cls");
                    PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'B',1);

                    demande_de_positon_j2:

                    scanf("%s",test_de_fin_variable_tab);

                    if( ChoixEstStablefinal(test_de_fin_variable_tab,3)==-1){
                    PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'B',1);
                    goto demande_de_positon_j2;
                     }
                     else{  test_de_fin_variable=ChoixEstStablefinal(test_de_fin_variable_tab,3);}
                    PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'B',1);

                    if(test_de_fin_variable==3){
                           printf("\n\t>> le joueur %s ,a quitte, le gagnant est : %s",nom_joueur2,nom_joueur1);
                           TraitementDeFinDePartie(nom_joueur1,MotPasseJ1, nom_joueur2, MotPasseJ2);
                            exit(1);//goto revenir_au_menu_prcedent;
                    }
                    if(test_de_fin_variable==2){

                           if(CountPassedJ1==1){
                                 #include "TestDeFinT.c"
                                printf("\t\t\t\t\t la fin de partie;\n ");
                                if(scoreBa<scoreNo){printf("\n\t\t\t>>le gagnat est : %s",nom_joueur1);
                                TraitementDeFinDePartie(nom_joueur1,MotPasseJ1, nom_joueur2, MotPasseJ2);}
                                if(scoreBa==scoreNo){printf("\n\t\t\t>>Pas de gagnat , parties egales ");}
                                if(scoreBa>scoreNo){printf("\n\t\t\t>>le gagnat est : %s\n",nom_joueur2);
                                TraitementDeFinDePartie(nom_joueur2,MotPasseJ2, nom_joueur1, MotPasseJ1);}
                                exit(1);
                                goto revenir_au_menu_prcedent;}
                          if(CountPassedJ1==0){
                               CountPassedJ2=1;
                               system("cls");
                                    PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'N',1);
                          goto demande_de_positon_j1;
                            }


                    }system("cls");
                     PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'B',2);

                    CountPassedJ1=0;
                    if(test_de_fin_variable==1){ CountPassedJ2=0;}
                    choix2:
                    printf(">>>>ligne: ");
                    scanf("%s",&lignet);
                    printf("\n>>>>colonne: ");
                    scanf("%s",&colonnet);
                    system("cls");
                     if( ChoixEstStablefinal(lignet,10)==-1){
                     PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'B',2);
                        goto choix2;
                     }
                     else{  ligne=ChoixEstStablefinal(lignet,10);}
                    if( ChoixEstStablefinal(colonnet,10)==-1){
                     PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'B',2);
                        goto choix2;
                     }
                     else{  colonne=ChoixEstStablefinal(colonnet,10);}


                    if(test_de_position_du_jeton(tableaudynamique,ligne,colonne,'B',1)==0){
                         printf("cette position est invalide :\n");
                     PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'B',2);
                         goto choix2;
                   if(interditB[ligne][colonne]==1){
                         printf("cette position est interdite:\n");
                     PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'B',2);
                         goto choix2;
                       }
                       }
                    if(test_de_position_du_jeton(tableaudynamique,ligne,colonne,'B',1)==1)
                         {
                            AfficherTabDynamique(tableaudynamique,ligne,colonne,'B');

                            #include "RegleKo_du_blanc.c"
                            (scoreNo)=(scoreNo)+ATARI_GO_du_noir(tableaudynamique,scoreN,tab_de_position_noires,je,existe,tab_p);
                            (scoreBa)=(scoreBa)+ATARI_GO_du_blanc(tableaudynamique,scoreB,tab_de_position_noires,je,existe,tab_p);
                     PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'N',1);
                           }
                    if(TestDeFin(tableaudynamique)==0){
                            printf(">>>>la fin de partie;\n ");
                            if(scoreBa<scoreNo){
                                    printf("\n\t\t\t>>>>le gagnant est : %s",nom_joueur1);
                            /// ici on doit ajouter pour le jouer 1 une partie joueé et gaganée , et pour le j2 une partie jouée et perdues:
                            }
                            if(scoreBa==scoreNo){printf("\n\t\t\t>>Pas de gagnant , parties egales ");}
                            if(scoreBa>scoreNo){printf("\n\t\t\t>>le gagnant est : %s",nom_joueur2);
                             /// ici on doit ajouter pour le jouer 2 une partie joueé et gaganée , et pour le j1 une partie jouée et perdues:}
                            exit(1);//goto  revenir_au_menu_prcedent;
                              }
                   }

                }
             }
             if(QuiCommence()==2)
             {
                int CountPassedJ1=0;int CountPassedJ2=0;
                     PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'N',1);
                int test_de_fin_variable=1;
                while(test_de_fin_variable==1){
                CountPassedJ1=0; CountPassedJ2=0;
                    demande_de_positon_2_j1:

                    scanf("%s",test_de_fin_variable_tab);

                    if( ChoixEstStablefinal(test_de_fin_variable_tab,3)==-1){
                     PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'N',1);
                        goto demande_de_positon_2_j1;
                     }
                     else{  test_de_fin_variable=ChoixEstStablefinal(test_de_fin_variable_tab,3);}
                     PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'N',1);


                    if(test_de_fin_variable==3){
                            CountPassedJ2=0;
                            printf("\n\t\t\t>>Le joueur %s ,a quitte, le gagnat est : %s",nom_joueur2,nom_joueur1);
                            TraitementDeFinDePartie(nom_joueur1,MotPasseJ1, nom_joueur2, MotPasseJ2);
                          exit(1); // goto revenir_au_menu_prcedent;
                    }
                     if(test_de_fin_variable==2){

                           if(CountPassedJ2==1){
                                 #include "TestDeFinT.c"
                                printf("\t\t\t\t\t la fin de partie;\n ");
                                if(scoreBa<scoreNo){printf("\n\t\t\t>>le gagnat est : %s",nom_joueur2);
                                TraitementDeFinDePartie(nom_joueur2,MotPasseJ2, nom_joueur1, MotPasseJ1);}
                                if(scoreBa==scoreNo){printf("\n\t\t\t>>Pas de gagnat , parties egales ");}
                                if(scoreBa>scoreNo){printf("\n\t\t\t>>le gagnat est : %s\n",nom_joueur1);
                                TraitementDeFinDePartie(nom_joueur1,MotPasseJ1, nom_joueur2, MotPasseJ2);}
                                exit(1);
                                goto revenir_au_menu_prcedent;}
                          if(CountPassedJ2==0){
                               CountPassedJ1=1;
                               system("cls");
                                    PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'B',1);
                          goto demande_de_positon_2_j2;
                            }


                    }

                    system("cls");
                    PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'N',2);

                    choix3:
                    printf(">>>>ligne: ");
                    scanf("%s",&lignet);
                    printf("\n>>>>colonne: ");
                    scanf("%s",&colonnet);
                    system("cls");
                    if( ChoixEstStablefinal(lignet,10)==-1){
                    PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'N',2);
                        goto choix3;
                     }
                     else{  ligne=ChoixEstStablefinal(lignet,10);}
                    if( ChoixEstStablefinal(colonnet,10)==-1){
                    PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'N',2);
                        goto choix3;
                     }
                     else{ colonne=ChoixEstStablefinal(colonnet,10);}

                    if(test_de_position_du_jeton(tableaudynamique,ligne,colonne,'N',1)==0){
                         printf("cette position est invalide :\n");
                    PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'N',2);
                         goto choix3;
                       }
                    if(interditN[ligne][colonne]==1){
                         printf("cette position est interdite:\n");
                    PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'N',2);
                         goto choix3;

                       }
                    if(test_de_position_du_jeton(tableaudynamique,ligne,colonne,'N',1)==1  )
                         {
                             AfficherTabDynamique(tableaudynamique,ligne,colonne,'N');

                            #include "RegleKo_du_noir.c"
                            (scoreNo)=(scoreNo)+ATARI_GO_du_noir(tableaudynamique,scoreN,tab_de_position_noires,je,existe,tab_p);
                            (scoreBa)=(scoreBa)+ATARI_GO_du_blanc(tableaudynamique,scoreB,tab_de_position_noires,je,existe,tab_p);
                    PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'B',1);
                            }
                    if(TestDeFin(tableaudynamique)==0){
                            printf("la fin de partie;\n ");
                            if(scoreBa<scoreNo){printf("\n\t\t\t>>>>le gagnat est : %s",nom_joueur2);}
                            if(scoreBa==scoreNo){printf("\n\t\t\t>>>>Pas de gagnat , parties egales ");}
                            if(scoreBa>scoreNo){printf("\n\t\t\t>>>>le gagnat est : %s\n",nom_joueur1);}
                            exit(1);// goto  revenir_au_menu_prcedent;
                              }
                    system("cls");
                    PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'B',1);

                    demande_de_positon_2_j2:

                    scanf("%s",test_de_fin_variable_tab);

                    if( ChoixEstStablefinal(test_de_fin_variable_tab,3)==-1){
                    PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'B',1);
                        goto demande_de_positon_2_j2;
                     }
                     else{  test_de_fin_variable=ChoixEstStablefinal(test_de_fin_variable_tab,3);}
                    PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'B',1);
                     if(test_de_fin_variable==3){
                            CountPassedJ1=0;
                            printf("\n\t\t\t>>>>le joueur %s ,a quitte, le gagnat est : %s",nom_joueur1,nom_joueur2);
                            TraitementDeFinDePartie(nom_joueur2,MotPasseJ2, nom_joueur1, MotPasseJ1);
                            exit(1);//goto revenir_au_menu_prcedent;
                    }
                      if(test_de_fin_variable==2){

                           if(CountPassedJ1==1){
                                 #include "TestDeFinT.c"
                                printf("\t\t\t\t\t la fin de partie;\n ");
                                if(scoreBa<scoreNo){printf("\n\t\t\t>>le gagnat est : %s",nom_joueur2);
                                TraitementDeFinDePartie(nom_joueur2,MotPasseJ2, nom_joueur1, MotPasseJ1);}
                                if(scoreBa==scoreNo){printf("\n\t\t\t>>Pas de gagnat , parties egales ");}
                                if(scoreBa>scoreNo){printf("\n\t\t\t>>le gagnat est : %s\n",nom_joueur1);
                                TraitementDeFinDePartie(nom_joueur1,MotPasseJ1, nom_joueur2, MotPasseJ2);}
                                exit(1);
                                goto revenir_au_menu_prcedent;}
                          if(CountPassedJ1==0){
                               CountPassedJ2=1;
                               system("cls");
                                    PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'N',1);
                          goto demande_de_positon_2_j1;
                            }


                      }
                      system("cls");
                    PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'B',2);

                    choix4:
                    printf(">>>>ligne: ");
                    scanf("%s",&lignet);
                    printf("\n>>>>colonne: ");
                    scanf("%s",&colonnet);
                    system("cls");
                    if( ChoixEstStablefinal(lignet,10)==-1){
                    PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'B',2);
                        goto choix4;
                     }
                     else{  ligne=ChoixEstStablefinal(lignet,10);}
                    if( ChoixEstStablefinal(colonnet,10)==-1){
                    PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'B',2);
                        goto choix4;
                     }
                     else{  colonne=ChoixEstStablefinal(colonnet,10);}

                    if(test_de_position_du_jeton(tableaudynamique,ligne,colonne,'B',1)==0){
                         printf("cette position est invalide :\n");
                    PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'B',2);
                         goto choix4;
                       }
                    if(interditB[ligne][colonne]==1){
                         printf("cette position est interdite:\n");
                    PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'B',2);
                         goto choix4;
                       }
                    if(test_de_position_du_jeton(tableaudynamique,ligne,colonne,'B',1)==1  )
                         {
                            AfficherTabDynamique(tableaudynamique,ligne,colonne,'B');

                            #include "RegleKo_du_blanc.c"
                            (scoreNo)=(scoreNo)+ATARI_GO_du_noir(tableaudynamique,scoreN,tab_de_position_noires,je,existe,tab_p);
                            (scoreBa)=(scoreBa)+ATARI_GO_du_blanc(tableaudynamique,scoreB,tab_de_position_noires,je,existe,tab_p);
                    PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'N',1);
                             }
                   if(TestDeFin(tableaudynamique)==0)
                    {
                           #include "TestDeFinT.c"
                            printf(">>>>la fin de partie;\n ");
                            if(scoreBa<scoreNo){printf("\n\t\t\t>>>>le gagnant est : %s",nom_joueur2);
                            TraitementDeFinDePartie(nom_joueur2,MotPasseJ2, nom_joueur1, MotPasseJ1);
                             /// ici on doit ajouter pour le jouer 2 une partie joueé et gaganée , et pour le j1 une partie jouée et perdues:
                            }
                            if(scoreBa==scoreNo){printf("\n\t\t\t>>>>Pas de gagnant , parties egales ");}
                            if(scoreBa>scoreNo){printf("\n\t\t\t>>>>le gagnant est : %s\n",nom_joueur1);
                            TraitementDeFinDePartie(nom_joueur1,MotPasseJ1, nom_joueur2, MotPasseJ2);
                             /// ici on doit ajouter pour le jouer 1 une partie joueé et gaganée , et pour le j2 une partie jouée et perdues:
                            }
                            exit(1);
                           //  goto  revenir_au_menu_prcedent;
                    }

                }
            }
          }





/// ********************************ici si le joueur 1 est la partie la plus faibel, la fonction a retourné 1
         if(HandicapOuNon==1){
                    PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'N',2);
                 printf("\t\t\t\t\t\t Partie a handicap: \n ");
                int test_de_fin_variable=1;
                demande_de_positon_handiJ1_fois1_j1:
                    choix5:
                    printf(">>>>ligne: ");
                    scanf("%s",&lignet);
                    printf("\n>>>>colonne: ");
                    scanf("%s",&colonnet);
                    system("cls");
                    if( ChoixEstStablefinal(lignet,10)==-1){
                    PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'N',2);
                        goto choix5;
                     }
                     else{  ligne=ChoixEstStablefinal(lignet,10);}
                    if( ChoixEstStablefinal(colonnet,10)==-1){
                    PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'N',2);
                        goto choix5;
                     }
                     else{  colonne=ChoixEstStablefinal(colonnet,10);}

                    if(test_de_position_du_jeton(tableaudynamique,ligne,colonne,'N',1)==0){
                         printf("cette position est invalide :\n");
                    PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'N',2);
                         goto choix5;}
                    if(interditN[ligne][colonne]==1){
                         printf("cette position est interdite:\n");
                    PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'N',2);
                         goto choix5;

                       }
                    if(test_de_position_du_jeton(tableaudynamique,ligne,colonne,'N',1)==1)
                         {

                            AfficherTabDynamique(tableaudynamique,ligne,colonne,'N');

                            #include "RegleKo_du_noir.c"
                            (scoreNo)=(scoreNo)+ATARI_GO_du_noir(tableaudynamique,scoreN,tab_de_position_noires,je,existe,tab_p);
                            (scoreBa)=(scoreBa)+ATARI_GO_du_blanc(tableaudynamique,scoreB,tab_de_position_noires,je,existe,tab_p);
                    PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'E',2);

                          }
                          system("cls");
                          PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'N',1);

                 while(test_de_fin_variable==1){
                    demande_de_positon_handiJ1_fois2_j1:

                    scanf("%s",test_de_fin_variable_tab);

                    if( ChoixEstStablefinal(test_de_fin_variable_tab,3)==-1){
                          PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'N',1);
                        goto demande_de_positon_handiJ1_fois2_j1;
                     }
                     else{  test_de_fin_variable=ChoixEstStablefinal(test_de_fin_variable_tab,3);}


                    if(test_de_fin_variable==3){
                            CountPassedJ2=0;
                            printf("\n\t\t\t>>Le joueur %s ,a quitte, le gagnat est : %s",nom_joueur1,nom_joueur2);
                            TraitementDeFinDePartie(nom_joueur2,MotPasseJ2, nom_joueur1, MotPasseJ1);
                            goto revenir_au_menu_prcedent;
                    }
                     if(test_de_fin_variable==2){

                           if(CountPassedJ2==1){
                                 #include "TestDeFinT.c"
                                printf("\t\t\t\t\t la fin de partie;\n ");
                                if(scoreBa<scoreNo){printf("\n\t\t\t>>le gagnat est : %s",nom_joueur1);
                                 TraitementDeFinDePartie(nom_joueur1,MotPasseJ1, nom_joueur2, MotPasseJ2);
                                }
                                if(scoreBa==scoreNo){printf("\n\t\t\t>>Pas de gagnat , parties egales ");}
                                if(scoreBa>scoreNo){printf("\n\t\t\t>>le gagnat est : %s\n",nom_joueur2);
                                 TraitementDeFinDePartie(nom_joueur2,MotPasseJ2, nom_joueur1, MotPasseJ1);}
                                 exit(1);
                                goto revenir_au_menu_prcedent;}
                          if(CountPassedJ2==0){
                               CountPassedJ1=1;
                          goto demande_de_positon_handiJ1_fois2_j2;
                            }


                    }

                    system("cls");
                    PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'N',2);

                   choix6:
                    printf(">>>>ligne: ");
                    scanf("%s",&lignet);
                    printf("\n>>>>colonne: ");
                    scanf("%s",&colonnet);
                    system("cls");
                    if( ChoixEstStablefinal(lignet,10)==-1){
                    PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'N',2);
                        goto choix6;
                     }
                     else{  ligne=ChoixEstStablefinal(lignet,10);}
                    if( ChoixEstStablefinal(colonnet,10)==-1){
                    PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'N',2);
                        goto choix6;
                     }
                     else{  colonne=ChoixEstStablefinal(colonnet,10);}


                    if(test_de_position_du_jeton(tableaudynamique,ligne,colonne,'N',1)==0){
                         printf("cette position est invalide :\n");
                    PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'N',2);
                         goto choix6;
                       }
                    if(interditN[ligne][colonne]==1){
                         printf("cette position est interdite:\n");
                    PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'N',2);
                         goto choix6;

                       }
                    if(test_de_position_du_jeton(tableaudynamique,ligne,colonne,'N',1)==1  )
                         {
                             AfficherTabDynamique(tableaudynamique,ligne,colonne,'N');

                            #include "RegleKo_du_noir.c"
                            (scoreNo)=(scoreNo)+ATARI_GO_du_noir(tableaudynamique,scoreN,tab_de_position_noires,je,existe,tab_p);
                            (scoreBa)=(scoreBa)+ATARI_GO_du_blanc(tableaudynamique,scoreB,tab_de_position_noires,je,existe,tab_p);
                    PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'E',2);
                             }
                    if(TestDeFin(tableaudynamique)==0){
                            printf("la fin de partie;\n ");
                            #include "TestDeFinT.c"
                            if(scoreBa<scoreNo){printf("\n\t\t\t>>>>le gagnat est : %s",nom_joueur1);
                             TraitementDeFinDePartie(nom_joueur1,MotPasseJ1, nom_joueur2, MotPasseJ2);}
                            if(scoreBa==scoreNo){printf("\n\t\t\t>>>>Pas de gagnat , parties egales ");}
                            if(scoreBa>scoreNo){printf("\n\t\t\t>>>>le gagnat est : %s\n",nom_joueur2);
                             TraitementDeFinDePartie(nom_joueur2,MotPasseJ2, nom_joueur1, MotPasseJ1);}
                             goto  revenir_au_menu_prcedent;
                              }
                              system("cls");
                     PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'B',1);

                demande_de_positon_handiJ1_fois2_j2:

                    scanf("%s",test_de_fin_variable_tab);

                    if( ChoixEstStablefinal(test_de_fin_variable_tab,3)==-1){
                     PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'B',1);
                        goto demande_de_positon_handiJ1_fois2_j2;
                     }
                     else{  test_de_fin_variable=ChoixEstStablefinal(test_de_fin_variable_tab,3);}


                    if(test_de_fin_variable==3){
                            CountPassedJ1=0;
                            printf("\n\t\t\t>>>>le joueur %s ,a quitte, le gagnat est : %s",nom_joueur2,nom_joueur1);
                            TraitementDeFinDePartie(nom_joueur1,MotPasseJ1, nom_joueur2, MotPasseJ2);
                            goto revenir_au_menu_prcedent;
                    }
                      if(test_de_fin_variable==2){

                           if(CountPassedJ1==1){
                                 #include "TestDeFinT.c"
                                printf("\t\t\t\t\t la fin de partie;\n ");
                                if(scoreBa<scoreNo){printf("\n\t\t\t>>le gagnat est : %s",nom_joueur1);
                                 TraitementDeFinDePartie(nom_joueur1,MotPasseJ1, nom_joueur2, MotPasseJ2);}
                                if(scoreBa==scoreNo){printf("\n\t\t\t>>Pas de gagnat , parties egales ");}
                                if(scoreBa>scoreNo){printf("\n\t\t\t>>le gagnat est : %s\n",nom_joueur2);
                                 TraitementDeFinDePartie(nom_joueur2,MotPasseJ2, nom_joueur1, MotPasseJ1);}
                                 exit(1);
                                goto revenir_au_menu_prcedent;}
                          if(CountPassedJ1==0){
                               CountPassedJ2=1;
                          goto demande_de_positon_handiJ1_fois2_j1;
                            }


                      }
                       system("cls");
                     PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'B',2);

                   choix7:
                    printf(">>>>ligne: ");
                    scanf("%s",&lignet);
                    printf("\n>>>>colonne: ");
                    scanf("%s",&colonnet);
                    system("cls");

                    if( ChoixEstStablefinal(lignet,10)==-1){
                     PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'B',2);
                        goto choix7;
                     }
                     else{  ligne=ChoixEstStablefinal(lignet,10);}
                    if( ChoixEstStablefinal(colonnet,10)==-1){
                     PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'B',2);
                        goto choix7;
                     }
                     else{  colonne=ChoixEstStablefinal(colonnet,10);}

                    if(test_de_position_du_jeton(tableaudynamique,ligne,colonne,'B',1)==0){
                         printf("cette position est invalide :\n");
                     PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'B',2);
                         goto choix7;
                       }
                    if(interditB[ligne][colonne]==1){
                         printf("cette position est interdite:\n");
                     PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'B',2);
                         goto choix7;
                       }
                    if(test_de_position_du_jeton(tableaudynamique,ligne,colonne,'B',1)==1  )
                         {
                            AfficherTabDynamique(tableaudynamique,ligne,colonne,'B');

                            #include "RegleKo_du_blanc.c"
                            (scoreNo)=(scoreNo)+ATARI_GO_du_noir(tableaudynamique,scoreN,tab_de_position_noires,je,existe,tab_p);
                            (scoreBa)=(scoreBa)+ATARI_GO_du_blanc(tableaudynamique,scoreB,tab_de_position_noires,je,existe,tab_p);
                     PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'E',2);
                          }
                   if(TestDeFin(tableaudynamique)==0)
                    {
                           #include "TestDeFinT.c"
                            printf(">>>>la fin de partie;\n ");
                            if(scoreBa<scoreNo){printf("\n\t\t\t>>>>le gagnant est : %s",nom_joueur2);
                             TraitementDeFinDePartie(nom_joueur2,MotPasseJ2, nom_joueur1, MotPasseJ1);
                             /// ici on doit ajouter pour le jouer 2 une partie joueé et gaganée , et pour le j1 une partie jouée et perdues:
                            }
                            if(scoreBa==scoreNo){printf("\n\t\t\t>>>>Pas de gagnant , parties egales ");}
                            if(scoreBa>scoreNo){printf("\n\t\t\t>>>>le gagnant est : %s\n",nom_joueur1);
                             TraitementDeFinDePartie(nom_joueur1,MotPasseJ1, nom_joueur2, MotPasseJ2);
                             /// ici on doit ajouter pour le jouer 1 une partie joueé et gaganée , et pour le j2 une partie jouée et perdues:
                            }
                             goto  revenir_au_menu_prcedent;
                    }

                }
            }





/// ********************************** ici la partie handicap est le joueur 2 , c'est a dirre la fonction a retourné 2
           if(HandicapOuNon==2){
                PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'N',2);
                 printf("\t\t\t\t\t\t Partie a handicap: \n ");
                int test_de_fin_variable=1;
                demande_de_positon_handiJ2_fois1_j1:
                  choix8:
                    printf(">>>>ligne: ");
                    scanf("%s",&lignet);
                    printf("\n>>>>colonne: ");
                    scanf("%s",&colonnet);
                    system("cls");

                    if( ChoixEstStablefinal(lignet,10)==-1){
                PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'N',2);
                        goto choix8;
                     }
                     else{  ligne=ChoixEstStablefinal(lignet,10);}
                    if( ChoixEstStablefinal(colonnet,10)==-1){
                PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'N',2);
                        goto choix8;
                     }
                     else{  colonne=ChoixEstStablefinal(colonnet,10);}

                    if(test_de_position_du_jeton(tableaudynamique,ligne,colonne,'N',1)==0){
                         printf("cette position est invalide :\n");
                PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'N',2);
                         goto choix8;}
                    if(interditN[ligne][colonne]==1){
                         printf("cette position est interdite:\n");
                PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'N',2);
                         goto choix8;

                       }
                    if(test_de_position_du_jeton(tableaudynamique,ligne,colonne,'N',1)==1)
                         {

                            AfficherTabDynamique(tableaudynamique,ligne,colonne,'N');

                            #include "RegleKo_du_noir.c"
                            (scoreNo)=(scoreNo)+ATARI_GO_du_noir(tableaudynamique,scoreN,tab_de_position_noires,je,existe,tab_p);
                            (scoreBa)=(scoreBa)+ATARI_GO_du_blanc(tableaudynamique,scoreB,tab_de_position_noires,je,existe,tab_p);
                PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'E',2);

                         }
                 system("cls");
                PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'N',1);

                 while(test_de_fin_variable==1){
                    demande_de_positon_handiJ2_fois2_j1:
                    scanf("%s",test_de_fin_variable_tab);

                    if( ChoixEstStablefinal(test_de_fin_variable_tab,3)==-1){
                PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'N',1);
                        goto demande_de_positon_handiJ2_fois2_j1;
                     }
                     else{  test_de_fin_variable=ChoixEstStablefinal(test_de_fin_variable_tab,3);}

                    if(test_de_fin_variable==3){
                            CountPassedJ2=0;
                            printf("\n\t\t\t>>Le joueur %s ,a quitte, le gagnat est : %s",nom_joueur2,nom_joueur1);
                            TraitementDeFinDePartie(nom_joueur1,MotPasseJ1, nom_joueur2, MotPasseJ2);}
                                 exit(1);
                    }
                     if(test_de_fin_variable==2){

                           if(CountPassedJ2==1){
                                 #include "TestDeFinT.c"
                                printf("\t\t\t\t\t la fin de partie;\n ");
                                if(scoreBa<scoreNo){printf("\n\t\t\t>>le gagnat est : %s",nom_joueur2);
                                 TraitementDeFinDePartie(nom_joueur2,MotPasseJ2, nom_joueur1, MotPasseJ1);}
                                if(scoreBa==scoreNo){printf("\n\t\t\t>>Pas de gagnat , parties egales ");}
                                if(scoreBa>scoreNo){printf("\n\t\t\t>>le gagnat est : %s\n",nom_joueur1);
                                 TraitementDeFinDePartie(nom_joueur1,MotPasseJ1, nom_joueur2, MotPasseJ2);}
                                 exit(1);
                                goto revenir_au_menu_prcedent;}
                          if(CountPassedJ2==0){
                               CountPassedJ1=1;
                          goto demande_de_positon_handiJ2_fois2_j2;
                            }


                    }

                     system("cls");
                PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'N',2);

                    choix9:
                    printf(">>>>ligne: ");
                    scanf("%s",&lignet);
                    printf("\n>>>>colonne: ");
                    scanf("%s",&colonnet);
                    system("cls");
                    if( ChoixEstStablefinal(lignet,10)==-1){
                PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'N',2);
                        goto choix9;
                     }
                     else{  ligne=ChoixEstStablefinal(lignet,10);}
                    if( ChoixEstStablefinal(colonnet,10)==-1){
                PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'N',2);
                        goto choix9;
                     }
                     else{  colonne=ChoixEstStablefinal(colonnet,10);}

                    if(test_de_position_du_jeton(tableaudynamique,ligne,colonne,'N',1)==0){
                         printf("cette position est invalide :\n");
                PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'N',2);
                         goto choix9;
                       }
                    if(interditN[ligne][colonne]==1){
                         printf("cette position est interdite:\n");
                PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'N',2);
                         goto choix9;

                       }
                    if(test_de_position_du_jeton(tableaudynamique,ligne,colonne,'N',1)==1  )
                         {
                             AfficherTabDynamique(tableaudynamique,ligne,colonne,'N');

                            #include "RegleKo_du_noir.c"
                            (scoreNo)=(scoreNo)+ATARI_GO_du_noir(tableaudynamique,scoreN,tab_de_position_noires,je,existe,tab_p);
                            (scoreBa)=(scoreBa)+ATARI_GO_du_blanc(tableaudynamique,scoreB,tab_de_position_noires,je,existe,tab_p);
                PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'E',2);
                            }
                    if(TestDeFin(tableaudynamique)==0){
                            printf("la fin de partie;\n ");
                            #include "TestDeFinT.c"
                            if(scoreBa<scoreNo){printf("\n\t\t\t>>>>le gagnat est : %s",nom_joueur2);
                             TraitementDeFinDePartie(nom_joueur2,MotPasseJ2, nom_joueur1, MotPasseJ1);}
                            if(scoreBa==scoreNo){printf("\n\t\t\t>>>>Pas de gagnat , parties egales ");}
                            if(scoreBa>scoreNo){printf("\n\t\t\t>>>>le gagnat est : %s\n",nom_joueur1);
                             TraitementDeFinDePartie(nom_joueur1,MotPasseJ1, nom_joueur2, MotPasseJ2);}
                             goto  revenir_au_menu_prcedent;
                              }
                              system("cls");
                PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'B',1);

                demande_de_positon_handiJ2_fois2_j2:

                    scanf("%s",test_de_fin_variable_tab);

                    if( ChoixEstStablefinal(test_de_fin_variable_tab,3)==-1){
                PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'B',1);
                        goto demande_de_positon_handiJ2_fois2_j2;
                     }
                     else{  test_de_fin_variable=ChoixEstStablefinal(test_de_fin_variable_tab,3);}

                    if(test_de_fin_variable==3){
                            CountPassedJ1=0;
                            printf("\n\t\t\t>>>>le joueur %s ,a quitte, le gagnat est : %s",nom_joueur1,nom_joueur2);
                            TraitementDeFinDePartie(nom_joueur2,MotPasseJ2, nom_joueur1, MotPasseJ1);
                            exit(1);
                    }
                      if(test_de_fin_variable==2){

                           if(CountPassedJ1==1){
                                 #include "TestDeFinT.c"
                                printf("\t\t\t\t\t la fin de partie;\n ");
                                if(scoreBa<scoreNo){printf("\n\t\t\t>>le gagnat est : %s",nom_joueur2);
                                 TraitementDeFinDePartie(nom_joueur2,MotPasseJ2, nom_joueur1, MotPasseJ1);}
                                if(scoreBa==scoreNo){printf("\n\t\t\t>>Pas de gagnat , parties egales ");}
                                if(scoreBa>scoreNo){printf("\n\t\t\t>>le gagnat est : %s\n",nom_joueur1);
                                 TraitementDeFinDePartie(nom_joueur1,MotPasseJ1, nom_joueur2, MotPasseJ2);}
                                 exit(1);
                                goto revenir_au_menu_prcedent;}
                          if(CountPassedJ1==0){
                               CountPassedJ2=1;
                          goto demande_de_positon_handiJ2_fois2_j1;
                            }


                      }
                       system("cls");
                PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'B',2);

                    choix10:
                    printf(">>>>ligne: ");
                    scanf("%s",&lignet);
                    printf("\n>>>>colonne: ");
                    scanf("%s",&colonnet);
                    system("cls");

                    if( ChoixEstStablefinal(lignet,10)==-1){
                PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'B',2);
                        goto choix10;
                     }
                     else{  ligne=ChoixEstStablefinal(lignet,10);}
                    if( ChoixEstStablefinal(colonnet,10)==-1){
                PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'B',2);
                        goto choix10;
                     }
                     else{  colonne=ChoixEstStablefinal(colonnet,10);}

                    if(test_de_position_du_jeton(tableaudynamique,ligne,colonne,'B',1)==0){
                         printf("cette position est invalide :\n");
                PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'B',2);
                         goto choix10;
                       }
                    if(interditB[ligne][colonne]==1){
                         printf("cette position est interdite:\n");
                PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'B',2);
                         goto choix10;
                       }
                    if(test_de_position_du_jeton(tableaudynamique,ligne,colonne,'B',1)==1  )
                         {
                            AfficherTabDynamique(tableaudynamique,ligne,colonne,'B');

                            #include "RegleKo_du_blanc.c"
                            (scoreNo)=(scoreNo)+ATARI_GO_du_noir(tableaudynamique,scoreN,tab_de_position_noires,je,existe,tab_p);
                            (scoreBa)=(scoreBa)+ATARI_GO_du_blanc(tableaudynamique,scoreB,tab_de_position_noires,je,existe,tab_p);
                PrintTabDynamique(tableaudynamique,scoreNo,scoreBa,'E',2);
                          }
                   if(TestDeFin(tableaudynamique)==0)
                    {
                           #include "TestDeFinT.c"
                            printf(">>>>la fin de partie;\n ");
                            if(scoreBa<scoreNo){printf("\n\t\t\t>>>>le gagnant est : %s",nom_joueur2);
                             TraitementDeFinDePartie(nom_joueur2,MotPasseJ2, nom_joueur1, MotPasseJ1);
                             /// ici on doit ajouter pour le jouer 2 une partie joueé et gaganée , et pour le j1 une partie jouée et perdues:
                            }
                            if(scoreBa==scoreNo){printf("\n\t\t\t>>>>Pas de gagnant , parties egales ");}
                            if(scoreBa>scoreNo){printf("\n\t\t\t>>>>le gagnant est : %s\n",nom_joueur1);
                             TraitementDeFinDePartie(nom_joueur1,MotPasseJ1, nom_joueur2, MotPasseJ2);
                             /// ici on doit ajouter pour le jouer 1 une partie joueé et gaganée , et pour le j2 une partie jouée et perdues:
                            }
                             goto  revenir_au_menu_prcedent;
                    }

                }
            }



        /// Pour la pertie de la machine on n'a pas besoin de connaitre la partie la plus faible . On va just stocker ou modifer les info du joueur
          if(num==2){

            int numM;
            int interditN[9][9];
            int interditB[9][9];
            for(int i=0;i<9;i++){
               for(int j=0;j<9;j++){
                interditN[i][j]=0;
                interditB[i][j]=0;
                 }
            }system("cls");
                 revenir_au_menu_prcedent1:
                     green();
                    printf("\n");       printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \n",205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205);
printf("\n");
        printf("\t                 ____________________\t\t%c\t                   ____________________\n",186);
printf("\t                /                    \\ \t\t%c\t                  /                    \\  \n",186);
printf("\t ( 1 )-------->(    Niveau  facile.   )\t\t%c\t   ( 2 )-------->(     niveau  Moyen    )\n",186);
printf("\t                \\____________________/\t\t%c\t                  \\____________________/\n",186);
printf("\t                                      \t\t    \n");
printf("\t                 ____________________\t\t%c\t                   ____________________ \n",186);
printf("\t                /                    \\ \t\t%c\t                  /                    \\  \n",186);
printf("\t ( 3 )-------->(    revenir au menu   )\t\t%c\t   ( 4 )-------->(     quitter    jeu   )\n",186);
printf("\t                \\____________________/\t\t%c\t                  \\____________________/\n",186);
printf("\n");
printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \n",205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205);
   printf(">> choisir un nombre :");
            scanf("%d",&numM);
            system("cls");
            if(numM==1){
            if(JouerVsMachineFacile(tableaudynamique,tab_p,tab_de_position_noires,je,existe)==0)
            {
                goto  revenir_au_menu_prcedent;
            }
            }
            if(numM==2){
                    if(JouerVsMachineMoyen(tableaudynamique,tab_p,tab_de_position_noires,je,existe)==0)
            {
                goto  revenir_au_menu_prcedent;
            }


            }
            if(numM==3){
                    system("cls");
                return 0;
            }

     }
     }


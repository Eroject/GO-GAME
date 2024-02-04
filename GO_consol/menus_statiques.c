#include <stdio.h>
#include <stdlib.h>

int MenuSavoirPlus(){
 char num_char[100];
 menu_pr_de_stabilite:

printf(">>>> Histoire du jeu:  \nLe jeu de go est sans doute le seul jeu de duel et de reflexion qui, par sa complexite et la richesse de sa tradition, puisse etre valablement compare aux echecs.");
printf(" D'origine chinoise comme ce dernier jeu, il s'est surtout répandu au Japon, où encore aujourd'hui se trouvent les plus grands joueurs, qui sont des professionnels.");

printf("Le go est l'un des plus anciens jeux connus. Plusieurs legendes chinoises relatent son invention :");
printf("selon l'une d'elles, l'empereur Shun, qui regna il y a un peu plus de quatre mille ans, inventa le jeu pour developper l'intelligence de son fils Sheng Kien ;");
printf(" selon une autre, un vassal, nomme U, de l'empereur Ketsu l'imagina au XVIIIe siecle avant J.-C. pour distraire son suzerain.");
printf("En tout cas, le go etait tres probablement joué en Chine au debut du IIe millenaire avant notre ere.");
printf("Des le IIIe siecle avant J.-C., les allusions au jeu se font frequentes dans la litterature et la poesie chinoises.");
printf(" Un joueur celebre, nomme Osan, etait capable de reconstituer de mémoire une partie jouee par lui (exploit aujourd'hui à la portee d'un bon amateur  ) \n");
printf("\n>>>>les principales regles du jeu : \n");
printf("\t\t\t-Regle1:La gourmandise n'apporte pas la victoire.\n\t\t\t-Regle2:Restez pose lorsque vous entrez chez l'adversaire.\n");
printf("\t\t\t-Regle3:Quand vous attaquez votre adversaire faites attention a vous meme.\n\t\t\t-Regle4:Abandonnez des pieces pour gagner l'initiative.\n");
printf("\t\t\t-Regle5:Laissez tomber le petit pour vous interessez au gros .\n\t\t\t-Regle6:En cas de danger, abandonnez quelque chose.\n");
printf("\t\t\t-Regle7:Jouez des coups solides, evitez la precipitation.\n\t\t\t-Regle8:Gardez a l'esprit la situation globale; vos differents coups devant agir de concert.\n");
printf("\t\t\t-Regle9:Si votre adversaire est fort,jouez la securite.\n\t\t\t-Regle10:Au milieu d'une influence adverse,recherchez la paix.\n");
printf("\n\n>>>>Pour revenir au menu precedent tapez 1:\n");
            printf(">>>>Pour sortir  tapez 2:\n");
            scanf("%s",&num_char);

        if( ChoixEstStablefinal(num_char,2)==-1){
            goto menu_pr_de_stabilite;}
        else{ return ChoixEstStablefinal(num_char,2);}
}

void accueil(){
     red();
     printf("\t\t\t\t                ______    _____           \n");
     printf("\t\t\t\t               / _____|  /  _  \\           \n");
     printf("\t\t\t\t              | |        | | | |       \n");
     printf("\t\t\t\t              | |  %c%c%c%c%c | | | |      \n",205,203,205,203,205);
     printf("\t\t\t\t              | |___| |  | |_| |     \n");
     printf("\t\t\t\t               \\_____/   \\_____/     \n");
     printf("\n\n");

    red();
    printf("\t\t\t\t\tBienvenue dans l'espace des intelligents  \n\n\n");
    green();
}
int  MenuPrincipale(){
    char num_choix_au_menu_char[100];
     menu_pr:
printf("\t                 ___________________\t\t%c                   ___________________\n",186);
printf("\t                /                   \\ \t\t%c                  /                   \\  \n",186);
printf("\t ( 1 )-------->(  Jouer une partie   )\t\t%c   ( 2 )-------->(  Savoir  sur  'Go   )\n",186);
printf("\t                \\___________________/\t\t%c                  \\___________________/\n",186);
printf("\t                                      \t\t%c    \n",186);
printf("\t                 ___________________\t\t%c                   ___________________\n",186);
printf("\t                /                   \\  \t\t%c                  /                   \\  \n",186);
printf("\t ( 3 )-------->(  Consulter donnes   )\t\t%c   ( 4 )-------->(  Quitter  le  jeu   )\n",186);
printf("\t                \\___________________/\t\t%c                  \\___________________/\n",186);
printf("\n");

printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \n",205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205);
   printf(">> choisir un nombre :");
    scanf("%s",num_choix_au_menu_char);
    if( ChoixEstStablefinal(num_choix_au_menu_char,4)==-1){
            goto menu_pr;}
    else{ return ChoixEstStablefinal(num_choix_au_menu_char,4);}


}

int menu_principal_1(){
    char num_char[100];
     menu_pr_de_stabilite:
     printf("\n");
 printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \n",205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205);
printf("\n");
        printf("\t                 ___________________\t\t%c\t                   ___________________\n",186);
printf("\t                /                   \\ \t\t%c\t                  /                   \\  \n",186);
printf("\t ( 1 )-------->(  Contre   un  ami   )\t\t%c\t   ( 2 )-------->(  Contre   machine   )\n",186);
printf("\t                \\___________________/\t\t%c\t                  \\___________________/\n",186);
printf("\t                                      \t\t    \n");
printf("\t                 ____________________\t\t%c\t                   ____________________ \n",186);
printf("\t                /                    \\ \t\t%c\t                  /                    \\  \n",186);
printf("\t ( 3 )-------->(    revenir au menu   )\t\t%c\t   ( 4 )-------->(     quitter    jeu   )\n",186);
printf("\t                \\____________________/\t\t%c\t                  \\____________________/\n",186);
printf("\n");
printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c \n",205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205);
   printf(">> choisir un nombre :");
    scanf("%s",&num_char);

        if( ChoixEstStablefinal(num_char,4)==-1){
            goto menu_pr_de_stabilite;}
        else{ return ChoixEstStablefinal(num_char,4);}}




int  ConsulterVosData(){

    char num_char[100];
    int index_null=1;
    menu_pr_de_stabilite:
    green();
    printf("\t\t\t\t\    Bienvenue dans l'espace de  donnes \n");
    char NomJoueurDonne[100];char MotPasseDonne[20];
    signed char NomJoueur[100];
    signed char MotPasse[100];
    int NombreGagnee;
    int NombreJouee;
    int NombrePerdues;
    signed char categorie;
    printf("\t\t\t\t Veuilez entrer votre Nom et votre Mot de passe : \n");
    printf("\n+++ Nom:");
    scanf("%s",NomJoueurDonne);
    printf("+++ Mot de Passe:");
    scanf("%s",MotPasseDonne);
    FILE *GoData1;
    GoData1= fopen("GoData1.txt", "r");
     while (!feof(GoData1)){

        fscanf(GoData1,"%s %s %d %d %d %c \n ", &NomJoueur,&MotPasse,&NombreJouee,&NombreGagnee,&NombrePerdues,&categorie);
        if(ComparerDeuxMotsPasse(MotPasseDonne,MotPasse)==1 && ComparerDeuxNoms(NomJoueur,NomJoueurDonne)==1){
              printf("\t\t\t\t\n     +++ %s , Voici votre donnes : \n",NomJoueur);
              printf("\t\t\t\t>> Nom: %s.\n\t\t\t\t>> Mot de passe : %s .\n\t\t\t\t>> Total de parties jouees: %d .\n\t\t\t\t>> Nombre de Parties  gagnes: %d .\n\t\t\t\t>> Nombre de Parties Perdues: %d .\n\t\t\t\t>> Votre categorie : %c \n", NomJoueur,MotPasse,NombreJouee,NombreGagnee,NombrePerdues,categorie);
          }
       if(ComparerDeuxMotsPasse(MotPasseDonne,MotPasse)==0 | ComparerDeuxNoms(NomJoueur,NomJoueurDonne)==0){
            index_null=0;

          }

     }
     if(index_null==0){ printf("\n\t\t\t Ops, Pas de donnees correspondant , \n\t\t\tVous n'avez pas jouee, aucune partie.");}
      fclose(GoData1);
      printf("\n\t\t\t>> Pour revenir au menu precedent tapez 1 , >> Pour sortir  tapez 2:\n");
            scanf("%s",&num_char);

        if( ChoixEstStablefinal(num_char,2)==-1){
            goto menu_pr_de_stabilite;}
        else{ return ChoixEstStablefinal(num_char,2);}
}




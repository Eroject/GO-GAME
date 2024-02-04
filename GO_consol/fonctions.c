///structures qui stockent : 1 nombre de vide ,2: le nombre de jeton à capturer 3 et 4 leur positions successives

typedef struct{
    int nbr_de_vide;
    int  nbr_de_captures;
    int  position_de_captures[81];
    int position_de_vide[81];

} chaineN;


typedef struct{
    int nbr_de_vide;
    int  nbr_de_captures;
    int  position_de_captures[81];
    int position_de_vide[81];

} chaineB;

int TestDeFin(char tableaudynamique[21][45]){

    int i,j;
    for(i=1;i<10;i=i+1){
     for(j=1;j<10;j=j+1){
            if((tableaudynamique[ligne_sur_le_tab(i)][colonne_sur_le_tab(j)]!='N') && (tableaudynamique[ligne_sur_le_tab(i)][colonne_sur_le_tab(j)]!='B')){
                return 1;
               }
    // if pacoursN(tab,i , j)==0 return 1
           }
     }
     return 0;
    }

///fonction parcours
int parcoursfinal(char *tab,int ligne,int colonne,int *paru,int *j,int *existe,int *paruvide,int *c,int mode,char jeton )
{char chaine,entoure,condition_arret,chaine_ba,condition_arret_ba;
if(mode==0)//parcour normal d une chaine
{
if(jeton=='N')
    {chaine='N';
    chaine_ba='N';
    entoure='B';
    if (ligne==1 ){condition_arret='_';condition_arret_ba='|';}
    if (ligne!=1 ){condition_arret='|';condition_arret_ba='|';}

    }
if(jeton=='B')
    {chaine='B';
    chaine_ba='B';
    entoure='N';
    if (ligne==1 ){condition_arret='_';condition_arret_ba='|';}
    if (ligne!=1 ){condition_arret='|';condition_arret_ba='|';}

    }
}
if(mode==1)//parcour du vide
{
if(jeton=='N')
    {condition_arret='B';
    condition_arret_ba='B';
    entoure='N';
    if (ligne==1 ){chaine='_';chaine_ba='|';}
    if (ligne!=1 ){chaine='|';chaine_ba='|';}
    }
if(jeton=='B')
    {condition_arret='N';
    condition_arret_ba='N';
    entoure='B';
    if (ligne==1 ){chaine='_';chaine_ba='|';}
    if (ligne!=1 ){chaine='|';chaine_ba='|';}
    }
}

  int r ;
 *existe=0;
 int tmp=45*ligne_sur_le_tab(ligne)+colonne_sur_le_tab(colonne),
 tmp_d=45*ligne_sur_le_tab(ligne)+colonne_sur_le_tab(colonne+1),
 tmp_g=45*ligne_sur_le_tab(ligne)+colonne_sur_le_tab(colonne-1),
 tmp_h=45*ligne_sur_le_tab(ligne-1)+colonne_sur_le_tab(colonne),
 tmp_ba=45*ligne_sur_le_tab(ligne+1)+colonne_sur_le_tab(colonne);
//on peut appliquer

  if (*(tab+tmp)==entoure){
          return(0);
    }

  if ((*(tab+tmp))==condition_arret) {

                    return (0);
    }

if (*(tab+tmp)==chaine)

    {
                for (r=0;r<586;r++)
                {
                if( *(paru+r)==tmp)
                (*existe)=1;
                }
                if ((*existe)!=1)
                {    (*existe)=0;

                *(paru+(*j))=(tmp);
                 (*j)=(*j)+1;}

               (*existe)=0;
                if(/*(4*(i)+4<=4*9*9)&&*/(colonne+1<10))
                    {
                        if ((*(tab+tmp_d))==condition_arret)
                            {

                                   for (r=0;r<586;r++)
                                    {
                                        if( *(paruvide+r)==tmp_d)
                                        (*existe)=1;
                                    }
                                if ((*existe)!=1)
                                    {    (*existe)=0;

                                        *(paruvide+(*c))=(tmp_d);
                                        (*c)++;
                                  }




                            }
                            (*existe)=0;
                        if ((*(tab+tmp_d))==chaine)
                            {
                                for (r=0;r<586;r++)
                                    {
                                    if( (*(paru+r))==(tmp_d))
                                        (*existe)=1;
                                    }
                                if ((*existe)!=1)
                                    {   (*existe)=0;


                                        //parcours(tab,i+1,paru,j,existe);
                                       parcoursfinal(tab,ligne,colonne+1,paru,j,existe,paruvide,c,mode,jeton);



                                    }


                            }
                    }





    //en haut
    (*existe)=0;
   if(ligne-1>0)

            {

                if ((*(tab+tmp_h))==condition_arret)
                    {                                   for (r=0;r<586;r++)
                                    {
                                        if( *(paruvide+r)==tmp_h)
                                        (*existe)=1;
                                    }
                                if ((*existe)!=1)
                                    {    (*existe)=0;

                                        *(paruvide+(*c))=(tmp_h);
                                        (*c)++;
                                  }
}(*existe)=0;
                if (*(tab+tmp_h)==chaine)
                    {
                        for (r=0;r<586;r++)
                            {
                                if(  *(paru+r)==(tmp_h))
                                (*existe)=1;
                            }
                        if ( (*existe)==0)
                            {    (*existe)=0;
                               /* (*j)=(*j)+1;
                                *(paru+(*j))=(i)-9;*/

                               // parcours(tab,i-9,paru,j,existe);
                               parcoursfinal(tab,ligne-1,colonne,paru,j,existe,paruvide,c,mode,jeton);

                            }


                        }
                }




        //a gauche
        (*existe)=0;
    if(colonne-1>0)
            {
                if ((*(tab+tmp_g))==condition_arret)
                    {                                   for (r=0;r<586;r++)
                                    {
                                        if( *(paruvide+r)==tmp_g)
                                        (*existe)=1;
                                    }
                                if ((*existe)!=1)
                                    {    (*existe)=0;

                                        *(paruvide+(*c))=(tmp_g);
                                        (*c)++;
                                  }
                    }(*existe)=0;
                if (*(tab+tmp_g)==chaine)
                    {
                        for (r=0;r<586;r++)
                            {
                                if( *(paru+r)==(tmp_g))
                                 (*existe)=1;
                            }
                        if ( (*existe)==0)
                            {(*existe)=0;
                                 /**(paru+(*j))=(i)-1;
                                    (*j)++;*/
                               // parcours(tab,i-1,paru,j,existe);
                               parcoursfinal(tab,ligne,colonne-1,paru,j,existe,paruvide,c,mode,jeton);


                            }


                        }
                }





    //en bas
    (*existe)=0;
     if(ligne+1<=9)
          {
                        if ((*(tab+tmp_ba))==condition_arret_ba)
                            {                                    for (r=0;r<586;r++)
                                    {
                                        if( *(paruvide+r)==tmp_ba)
                                        (*existe)=1;
                                    }
                                if ((*existe)!=1)
                                    {    (*existe)=0;

                                        *(paruvide+(*c))=(tmp_ba);
                                        (*c)++;
                                  }

                            }(*existe)=0;
                        if ((*(tab+tmp_ba))==chaine_ba)
                            {
                                for (r=0;r<586;r++)
                                    {
                                        if( (*(paru+r))==(tmp_ba))
                                        (*existe)=1;
                                    }
                                if ((*existe)==0)
                                    {   (*existe)=0;


                                        //parcours(tab,i+1,paru,j,existe);
                                    parcoursfinal(tab,ligne+1,colonne,paru,j,existe,paruvide,c,mode,jeton);


                                    }


                            }
                    }



    }
return(*c);
}


///fonction max
int maxom(int tab[81])
{int maximum=0;
    for(int k=0;k<81;k++){
    if (tab[k]>tab[maximum])
    {maximum=k;}
        }
return (maximum);}
///couleurs
void couleur(int ForgC)
{

    // We will need this handle to get the current background attribute
    WORD wColor;

    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);

    // we use csbi for the wAttributes word.
    CONSOLE_SCREEN_BUFFER_INFO csbi;

    if (GetConsoleScreenBufferInfo(hStdOut, &csbi))
    {
        // Mask out all but the background attribute
        //, and add in the foreground color
        wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
        SetConsoleTextAttribute(hStdOut, wColor);
    }
    return;
}

void red()
{
    couleur(12);
}void black()
{
    couleur(00);
}
void yellow()
{
    couleur(14);
}

void bleu()
{
    couleur(11);
}
void white()
{
    couleur(15);
}
void green()
{
    couleur(10);

}
///parcoursvidesN
int parcoursvidesN(char *tab,int ligne,int colonne,int *tab_de_position_noires,int *je,int *existe,int *tab_du_pos_de_vide,int *vides )
{*(je)=0;*(vides)=0;
            for(int r=0;r<586;r++){*(tab_de_position_noires+r)=0;}
            for(int r=0;r<586;r++){*(tab_du_pos_de_vide+r)=0;}
parcoursfinal(tab,ligne, colonne,tab_de_position_noires,je,existe,tab_du_pos_de_vide,vides,1,'N' );
            if(*(je)!=0 & *(vides)==0){return 1;}
            else{return 0;}}
///parcoursvidesB
int parcoursvidesB(char *tab,int ligne,int colonne,int *tab_de_position_noires,int *je,int *existe,int *tab_du_pos_de_vide,int *vides )
{*(je)=0;*(vides)=0;
            for(int r=0;r<586;r++){*(tab_de_position_noires+r)=0;}
            for(int r=0;r<586;r++){*(tab_du_pos_de_vide+r)=0;}
parcoursfinal(tab,ligne, colonne,tab_de_position_noires,je,existe,tab_du_pos_de_vide,vides,1,'B' );
            if(*(je)!=0 & *(vides)==0){return 1;}
            else{return 0;}}

///fonction qui retunr la position du jeton dans le tableau (in the back end)
int ligne_sur_le_tab(int ligne){
            return (ligne*2);
        }
int colonne_sur_le_tab(int colonne){


              return ((colonne*5)-3);
}

///fonction afficher tableau statique
void AfficherTabStatique(){

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
    green();printf("               ");
     for(int j=0;j<56;j++){
        printf("_");}
    printf("\n");
    printf("               ");
    printf("|     ");

    for(int j=0;j<44;j++){
        printf(" ");}
        printf("     |\n");

   for(int i=0;i<20;i++){
        printf("               ");
        printf("|     ");
     for(int j=0;j<44;j++){red();
        printf("%c",tableaudynamique[i][j]);}
green();
      printf("     |\n");
     }

       printf("               ");
        printf("|");
      for(int j=1;j<55;j++){
        printf("_");}
        printf("|\n");
    }

///Afficher tab dynamique
void AfficherTabDynamique(char tableaudynamique[21][45],int ligne, int colonne,char jeton ){



  int i ;int j;
        if((tableaudynamique[ligne_sur_le_tab(ligne)][colonne_sur_le_tab(colonne)]=='|')|(tableaudynamique[ligne_sur_le_tab(ligne)][colonne_sur_le_tab(colonne)]=='_'))
            {
                tableaudynamique[ligne_sur_le_tab(ligne)][colonne_sur_le_tab(colonne)]=jeton;
          }
}

///Afficher tab dynamique pointeur
void AfficherTabDynamiquePointeur(char *tableaudynamiquepointeur,int position,char jeton ){



            {
                *(tableaudynamiquepointeur+position)=jeton;
          }
}


///print le tableau
void PrintTabDynamique(char tableaudynamique[21][45],int scoreNo,int scoreBa,char tour,int etape){
    green();printf("         ");
     for(int j=0;j<56;j++){printf("_");}
        printf("                 ");
        if(tour=='B'){red();printf("   ");green();}if(tour=='N'){red();for(int j=0;j<37;j++){printf("_");}green();}

    printf("\n");
    printf("         ");
    printf("|     ");

    for(int j=0;j<44;j++){
        printf(" ");}
        printf("     |");
        printf("                ");
        if(tour=='B'){red();printf("   ");green();}if(tour=='N'){red();printf("|   ");green();}

        for(int j=0;j<30;j++){printf("_");} if(tour=='N'){red();printf("   |");green();}
        printf("\n");

   for(int i=0;i<20;i++){
        printf("         ");
        printf("|     ");
     for(int j=0;j<44;j++){
     if(tableaudynamique[i][j]=='N'){green();printf("%c",tableaudynamique[i][j]);}
     if(tableaudynamique[i][j]=='B'){white();printf("%c",tableaudynamique[i][j]);}
      if(tableaudynamique[i][j]!='B' && tableaudynamique[i][j]!='N'){red();printf("%c",tableaudynamique[i][j]);}}
green();
      printf("     |");
      printf("                ");
      if (i==0){if(tour=='B'){red();printf("   ");green();}if(tour=='N'){red();printf("|   ");}green();printf("|         BLACK  %2d          |",scoreNo);if(tour=='N'){red();printf("   |");}printf("\n");}
  if(etape ==1){
   if(tour=='N'){if (i==2){if(tour=='B'){red();printf("   ");}if(tour=='N'){red();printf("|   ");}green();printf("|");bleu();printf("   Pour continuer tapez 1:  ");green();printf("|");if(tour=='N'){red();printf("   |");}printf("\n");green();goto here;}}
   if(tour=='N'){if (i==4){if(tour=='B'){red();printf("   ");}if(tour=='N'){red();printf("|   ");}green();printf("|");bleu();printf("Pour passer l'etape tapez 2:");green();printf("|");if(tour=='N'){red();printf("   |");}printf("\n");green();goto here;}}
   if(tour=='N'){if (i==6){if(tour=='B'){red();printf("   ");}if(tour=='N'){red();printf("|   ");}green();printf("|");bleu();printf("    Pour quitter tapez 3:   ");green();printf("|");if(tour=='N'){red();printf("   |");}printf("\n");green();goto here;}}
    }
    if(etape ==2){
      if(tour=='N'){if (i==2){if(tour=='B'){red();printf("   ");}if(tour=='N'){red();printf("|   ");}green();printf("|");bleu();printf("         choisissez         ");green();printf("|");if(tour=='N'){red();printf("   |");}printf("\n");green();goto here;}}
   if(tour=='N'){if (i==4){if(tour=='B'){red();printf("   ");}if(tour=='N'){red();printf("|   ");}green();printf("|");bleu();printf("           votre            ");green();printf("|");if(tour=='N'){red();printf("   |");}printf("\n");green();goto here;}}
   if(tour=='N'){if (i==6){if(tour=='B'){red();printf("   ");}if(tour=='N'){red();printf("|   ");}green();printf("|");bleu();printf("      ligne  et  colonne    ");green();printf("|");if(tour=='N'){red();printf("   |");}printf("\n");green();goto here;}}
    }
    if(tour=='B'){if (i==5){if(tour=='B'){red();printf("   ");}if(tour=='N'){red();printf("|   ");}green();printf("|         capture  %2d        |",scoreNo);if(tour=='N'){red();printf("   |");}printf("\n");green();goto here;}}

      if(i<9 && i!=0){if(tour=='B'){red();printf("   ");green();}if(tour=='N'){red();printf("|   ");};green();printf("|");for(int j=0;j<28;j++){if(i==1 || i==8)printf("_");if(i!=1 && i!=8) printf(" ");}
    printf("|");if(tour=='N'){red();printf("   |");};green();
    printf("\n");}
    here:
    if (i==9){if(tour=='B'){red();printf(" _");green();}if(tour=='N'){red();printf("|");}if(tour!='E'){red();for(int j=0;j<36;j++){printf("_");}if(tour=='N'){printf("|\n");};green();}if(tour=='E'){printf("\n");}if(tour=='B'){printf("  ");}}
    if (i==10){if(tour=='B'){red();printf("|   ");green();}if(tour=='N'){printf("    ");}for(int j=0;j<30;j++){printf("_");}if(tour=='B'){red();printf("   |");green();}printf("\n");}
    if (i==11){if(tour=='B'){red();printf("|   ");};green();if(tour=='N'){printf("    ");}printf("|         WHITE  %2d          |",scoreBa);if(tour=='B'){red();printf("   |");}printf("\n");}
 if(etape ==1){
 if(tour=='B'){if (i==13){if(tour=='N'){red();printf("   ");}if(tour=='B'){red();printf("|   ");}green();printf("|");bleu();printf("   Pour continuer tapez 1:  ");green();printf("|");if(tour=='B'){red();printf("   |");}printf("\n");green();goto here1;}}
   if(tour=='B'){if (i==15){if(tour=='N'){red();printf("   ");}if(tour=='B'){red();printf("|   ");}green();printf("|");bleu();printf("Pour passer l'etape tapez 2:");green();printf("|");if(tour=='B'){red();printf("   |");}printf("\n");green();goto here1;}}
   if(tour=='B'){if (i==17){if(tour=='N'){red();printf("   ");}if(tour=='B'){red();printf("|   ");}green();printf("|");bleu();printf("    Pour quitter tapez 3:   ");green();printf("|");if(tour=='B'){red();printf("   |");}printf("\n");green();goto here1;}}
   }
   if(etape ==2){if(tour=='B'){if (i==13){if(tour=='N'){red();printf("   ");}if(tour=='B'){red();printf("|   ");}green();printf("|");bleu();printf("         choisissez         ");green();printf("|");if(tour=='B'){red();printf("   |");}printf("\n");green();goto here1;}}
   if(tour=='B'){if (i==15){if(tour=='N'){red();printf("   ");}if(tour=='B'){red();printf("|   ");}green();printf("|");bleu();printf("           votre            ");green();printf("|");if(tour=='B'){red();printf("   |");}printf("\n");green();goto here1;}}
   if(tour=='B'){if (i==17){if(tour=='N'){red();printf("   ");}if(tour=='B'){red();printf("|   ");}green();printf("|");bleu();printf("      ligne  et  colonne    ");green();printf("|");if(tour=='B'){red();printf("   |");}printf("\n");green();goto here1;}}
   }
    if(tour=='N'){if (i==16){if(tour=='N'){red();printf("   ");}if(tour=='B'){red();printf("|   ");}green();printf(" |         capture  %2d        |",scoreBa);if(tour=='B'){red();printf("   |");}printf("\n");green();goto here1;}}

    if(i>11){if(tour=='B'){red();printf("|   ");}green();if(tour=='N'){printf("    ");}printf("|");for(int j=0;j<28;j++){if(i==12 || i==19)printf("_");if(i!=12 && i!=19) printf(" ");}printf("|");if(tour=='B'){red();printf("   |");green();}printf("\n");}
    here1:
        printf("");
     }

    printf("         ");
        printf("|");
      for(int j=1;j<55;j++){
        printf("_");}
        printf("|");

        printf("                ");
        if(tour=='B'){red();printf("|");for(int j=0;j<36;j++){printf("_");}printf("|");green();}
        printf("\n");
   }

///Fonction qui retourne 0 si la position est interdite et 1 sinon
int test_de_position_du_jeton(char tableaudynamique[21][45],int ligne, int colonne,char jeton,int mode){

    int s=1,*tes,*te;
    te=malloc((4)); tes=malloc((4));
        *(te)=-11;*(tes)=-12;

    char tableaudynamiquecopy[21][45];
    for(int i =0;i<21;i++){for(int j =0;j<45;j++){tableaudynamiquecopy[i][j]=tableaudynamique[i][j];} }


    if(ligne>9 | ligne<1 | colonne<1 | colonne>9){
         s=0; }
    if(tableaudynamique[ligne_sur_le_tab(ligne)][colonne_sur_le_tab(colonne)]=='N'| tableaudynamique[ligne_sur_le_tab(ligne)][colonne_sur_le_tab(colonne)]=='B')
        {s=0;}
/*if (mode==1){
    if (jeton=='B'){//suicide
        AfficherTabDynamique(tableaudynamiquecopy,ligne,colonne,'B');
        char *tab;
        int *je,*existe,*tab_de_position_noires;
        tab_de_position_noires=malloc((4*45*13));
        je=malloc((4)); existe=malloc((4));
        *(je)=0;*(existe)=0;
            for(int r=0;r<586;r++){*(tab_de_position_noires+r)=0;}
        tab=malloc(45*13);
        tab=tableaudynamiquecopy;
        *te=parcoursN(tab,ligne,colonne,tab_de_position_noires,je,existe);
        if((*te)==1){
            return (0);}
    }
    if (jeton=='N'){//suicide
        AfficherTabDynamique(tableaudynamiquecopy,ligne,colonne,'N');
            char *tab;
        int *je,*existe,*tab_de_position_noires;
        tab_de_position_noires=malloc((4*45*13));
        je=malloc((4)); existe=malloc((4));
        *(je)=0;*(existe)=0;
            for(int r=0;r<586;r++){*(tab_de_position_noires+r)=0;}
        tab=malloc(45*13);
        tab=tableaudynamiquecopy;
        *tes=parcoursB(tab,ligne,colonne,tab_de_position_noires,je,existe);
        if((*tes)==1){
        return (0);}
    }}*/

    return s;
  }

/*///Fonction qui retourne 1 si la position est vide et 0 sinon mais qui prend un poiteur au lieu d'un tableau
int test_de_position_du_jeton_pointeur(char *tableaudynamique,int position)
{

int tmpmax,tmpmin,s=1;

        tmpmax=45*ligne_sur_le_tab(9)+colonne_sur_le_tab(9);
        tmpmin=45*ligne_sur_le_tab(1)+colonne_sur_le_tab(1);
    if(position<tmpmin | position>tmpmax){
         s=0; }
    if(*(tableaudynamique+position)=='N'| *(tableaudynamique+position)=='B')
        {s=0;}
    return s;
  }*/

///regle capture simple.
int  ATARI_GO_simple( char tableaudynamique[21][45]){

    return 0;
    for(int i=1;i<10;i++){
       for(int j=1;j<10;j++){
     if(   tableaudynamique[ligne_sur_le_tab(i)][colonne_sur_le_tab(j)]=='N'
        && tableaudynamique[ligne_sur_le_tab(i+1)][colonne_sur_le_tab(j)]=='B'
        && tableaudynamique[ligne_sur_le_tab(i-1)][colonne_sur_le_tab(j)]=='B'
        && tableaudynamique[ligne_sur_le_tab(i)][colonne_sur_le_tab(j-1)]=='B'
        && tableaudynamique[ligne_sur_le_tab(i)][colonne_sur_le_tab(j+1)]=='B'){

         tableaudynamique[ligne_sur_le_tab(i)][colonne_sur_le_tab(j)]='|' ;
         return 12;
     }
      if(   tableaudynamique[ligne_sur_le_tab(i)][colonne_sur_le_tab(j)]=='B'
        && tableaudynamique[ligne_sur_le_tab(i+1)][colonne_sur_le_tab(j)]=='N'
        && tableaudynamique[ligne_sur_le_tab(i-1)][colonne_sur_le_tab(j)]=='N'
        && tableaudynamique[ligne_sur_le_tab(i)][colonne_sur_le_tab(j-1)]=='N'
        && tableaudynamique[ligne_sur_le_tab(i)][colonne_sur_le_tab(j+1)]=='N'){

         tableaudynamique[ligne_sur_le_tab(i)][colonne_sur_le_tab(j)]='|' ;
         return 11;
      }
     }
    }
}

///focntion qui supprime le jeton  k ligne et l colonne
 void supprimer_jeton(char tableaudynamique[21][45],int k,int l){
     if(k==2 |k==43){
     tableaudynamique[k][l]='_';
    }
    else{
     tableaudynamique[k][l]='|';
 }
 }
 ///parcourN
int parcoursB(char *tab,int ligne,int colonne,int *tab_de_position_noires,int *je,int *existe)
{int*tab_du_pos_de_vide,*vides;
tab_du_pos_de_vide=malloc((4*45*13));
vides=malloc((4));
 *(je)=0;*(vides)=0;
            for(int r=0;r<586;r++){*(tab_de_position_noires+r)=0;}
            for(int r=0;r<586;r++){*(tab_du_pos_de_vide+r)=0;}
            parcoursfinal(tab,ligne, colonne,tab_de_position_noires,je,existe,tab_du_pos_de_vide,vides,0,'N' );
            if((*(je)!=0) && (*(vides)==0)){return 1;}
            else{return 0;}}
///parcourB
int parcoursN(char *tab,int ligne,int colonne,int *tab_de_position_noires,int *je,int *existe)
{int*tab_du_pos_de_vide,*vides;
tab_du_pos_de_vide=malloc((4*45*13));
vides=malloc((4));
 *(je)=0;*(vides)=0;
            for(int r=0;r<586;r++){*(tab_de_position_noires+r)=0;}
            for(int r=0;r<586;r++){*(tab_du_pos_de_vide+r)=0;}
parcoursfinal(tab,ligne, colonne,tab_de_position_noires,je,existe,tab_du_pos_de_vide,vides,0,'B' );
            if((*(je)!=0) && (*(vides)==0)){return 1;}
            else{return 0;}}

///capture enchainée
///pour les noirs
int ATARI_GO_du_noir(char tableaudynamique[21][45], int *scoreN,int *tab_de_position_noires,int *je,int *existe,char *tab_p){
    int tab_de_position_a_supprimer[21][45];
    (*scoreN)=0;
    for(int i=1;i<10;i++)
    {   for( int j=1;j<10;j++)
            {tab_de_position_a_supprimer[ligne_sur_le_tab(i)][colonne_sur_le_tab(j)]=0;}
    }

    for(int i=1;i<10;i++)
        {for( int j=1;j<10;j++)
        {   *(je)=0;
            for(int r=0;r<586;r++){*(tab_de_position_noires+r)=0;}
            //for(int r=0;r<586;r++){*(tab_du_pos_de_vide+r)=0;}
            if (parcoursN(tab_p,i,j,tab_de_position_noires,je,existe)==1){tab_de_position_a_supprimer[ligne_sur_le_tab(i)][colonne_sur_le_tab(j)]=1;};
            //if(*(je)!=0 & *(vides)==0){tab_de_position_a_supprimer[ligne_sur_le_tab(i)][colonne_sur_le_tab(j)]=1;}
        }
        }

    for (int k=1;k<10;k++)
        {for(int l=1;l<10;l++)
            {if (tab_de_position_a_supprimer[ligne_sur_le_tab(k)][colonne_sur_le_tab(l)]==1){
                    supprimer_jeton(tableaudynamique,ligne_sur_le_tab(k),colonne_sur_le_tab(l));
                    (*scoreN)++;}
            }
        }
return(*scoreN);
}
/// pour les blancs
int ATARI_GO_du_blanc(char tableaudynamique[21][45], int *scoreB,int *tab_de_position_noires,int *je,int *existe,char *tab_p){
    int tab_de_position_a_supprimer[21][45];
    (*scoreB)=0;
    for(int i=1;i<10;i++)
    {   for( int j=1;j<10;j++){ tab_de_position_a_supprimer[ligne_sur_le_tab(i)][colonne_sur_le_tab(j)]=0;}}

    for(int i=1;i<10;i++)
    {for( int j=1;j<10;j++)
        {*(je)=0;
        for(int r=0;r<586;r++){*(tab_de_position_noires+r)=0;}
       //for(int r=0;r<586;r++){*(tab_du_pos_de_vide+r)=0;}
            if (parcoursB(tab_p,i,j,tab_de_position_noires,je,existe)==1){tab_de_position_a_supprimer[ligne_sur_le_tab(i)][colonne_sur_le_tab(j)]=1;};
       // if(*(je)!=0 & *(vides)==0){tab_de_position_a_supprimer[ligne_sur_le_tab(i)][colonne_sur_le_tab(j)]=1;}
        }
    }

    for (int k=1;k<10;k++)
        {for(int l=1;l<10;l++)
            {if (tab_de_position_a_supprimer[ligne_sur_le_tab(k)][colonne_sur_le_tab(l)]==1){
                supprimer_jeton(tableaudynamique,ligne_sur_le_tab(k),colonne_sur_le_tab(l));
                (*scoreB)++;}
            }
        }
return(*scoreB);
}

/// fonction qui choisit aleatoirement la position
  int ligne_aleatoire(){
    srand( time( NULL ) );
     int tmp_aleatoire;

     tmp_aleatoire=(rand()%9)+1;
      return tmp_aleatoire;
   }

int colonne_aleatoire(){
     int tmp_aleatoire_2;

     tmp_aleatoire_2=(rand()%9)+1;
      return tmp_aleatoire_2;
   }

///fonction pour obtenir les lignes
int get_li(int position){
    int ligne;
  for (int i=0;i<=9;i++){
        for (int j=0;j<=9;j++){
           if((45*ligne_sur_le_tab(i)+colonne_sur_le_tab(j))==position)
           {
             ligne=i;

           }
        }
        }

        return ligne ;}

///fonction pour obtenir les  colonnes
int get_colo(int position){
    int colonne;
  for (int i=0;i<=9;i++){
        for (int j=0;j<=9;j++){
           if((45*ligne_sur_le_tab(i)+colonne_sur_le_tab(j))==position)
           {
            (colonne)=j;
           }
        }
        }
        return (colonne) ;}
/// partie fichier
int DetermineHandicap( char nom_joueur1[100],char MotPasseJ1[20],char nom_joueur2[100], char MotPasseJ2[20]){
    signed char NomJoueur[100];
    signed char MotPasse[100];
    float NombreGagnee;
    float  NombreJouee;
    float  NombrePerdues;
    signed char categorie;

    signed char categoriefinale1;
    float  NombreGagneeFinale1;
    float  NombreJoueeFinale1;
    float  NombrePerduesFinale1;
    signed char categoriefinale2;
    float  NombreGagneeFinale2;
    float  NombreJoueeFinale2;
    float  NombrePerduesFinale2;
int indexJ1tmp=0,indexJ2tmp=0;
    FILE *GoData1;


/// Recuperation et traitement des donnes Joueur 1 *************************************************************
    GoData1= fopen("GoData1.txt", "r");
    while (1){

      fscanf(GoData1,"%s %s %f %f %f %c \n ", &NomJoueur,&MotPasse,&NombreJouee,&NombreGagnee,&NombrePerdues,&categorie);
      int count1=0; int count2=0;
      for(int i=0;i<1000;i++){

         if(NomJoueur[i]=='\0'){
           break;}

        count1++;
        }
       for(int i=0;i<1000;i++){

         if(MotPasse[i]=='\0'){
           break;}
        count2++;
       }

      char NomJoueurExactRecupere[count1];
      char MotPasseExactRecupere[count2];

      for(int i=0;i<count1;i++){

         NomJoueurExactRecupere[i]= NomJoueur[i];
      }
      for(int i=0;i<count2;i++){

        MotPasseExactRecupere[i]= MotPasse[i];
      }


/// ceci pour recupérer le nome exact du joueur.
     int  count3=0; int count4=0;
      for(int i=0;i<1000;i++){

         if(nom_joueur1[i]=='\0'){
           break;}

        count3++;}
       for(int i=0;i<1000;i++){

         if(MotPasseJ1[i]=='\0'){
           break;}
        count4++;}

      char NomJoueurExactDonneJ1[count3];
      char MotPasseExactDonneJ1[count4];

      for(int i=0;i<count3;i++){

         NomJoueurExactDonneJ1[i]= nom_joueur1[i];
      }
      for(int i=0;i<count4;i++){

        MotPasseExactDonneJ1[i]= MotPasseJ1[i];
      }

///ici recuperation du nom, et Mot de psse du  joueur 2 exact
    int  count5=0; int count6=0;
      for(int i=0;i<1000;i++){

         if(nom_joueur2[i]=='\0'){
           break;}

        count5++;}
       for(int i=0;i<1000;i++){

         if(MotPasseJ2[i]=='\0'){
           break;}
        count6++;}

      char NomJoueurExactDonneJ2[count5];
      char MotPasseExactDonneJ2[count6];

      for(int i=0;i<count5;i++){

         NomJoueurExactDonneJ2[i]= nom_joueur2[i];
      }
      for(int i=0;i<count6;i++){

        MotPasseExactDonneJ2[i]= MotPasseJ2[i];
      }

/// ici pour comperer les deux pour joueur 1 :   NomJoueurExactRecupere avec NomJoueurExactDonneJ1 ***** MotPasseExactRecupere avec MotPasseExactDonneJ1
      int *indexJ1;indexJ1=malloc(4*2);*indexJ1=1;
      if(count1!=count3){*indexJ1=0;}
      else{
          for (int j=0;j<count1;j++){

          if(NomJoueurExactRecupere[j]!=NomJoueurExactDonneJ1[j]){
            *indexJ1=0;
            break;
        }
        }
      }
      if(count2!=count4){*indexJ1=0;}
      else{
          for (int j=0;j<count2;j++){

          if( MotPasseExactRecupere[j]!=MotPasseExactDonneJ1[j]){
             *indexJ1=0;
             break;
         }
       }
      }
      if(*indexJ1==1){
        categoriefinale1=categorie;
        NombreGagneeFinale1=NombreGagnee;
        NombreJoueeFinale1=NombreJouee;
        NombrePerduesFinale1=NombrePerdues;}
        if(*(indexJ1)==1){indexJ1tmp=1;}

/// ici pour comperer les deux pour joueur 2 :   NomJoueurExactRecupere avec NomJoueurExactDonneJ2 ***** MotPasseExactRecupere avec MotPasseExactDonneJ2
*(indexJ1+1)=1;
     if(count1!=count5){*(indexJ1+1)=0;}
     else{

         for (int j=0;j<count1;j++){

           if(NomJoueurExactRecupere[j]!=NomJoueurExactDonneJ2[j] ){
             *(indexJ1+1)=0;
             break;
        }
      }
     }
     if(count2!=count6){*(indexJ1+1)=0;}
      else{

         for (int j=0;j<count6;j++){

           if( MotPasseExactRecupere[j]!=MotPasseExactDonneJ2[j]){
             *(indexJ1+1)=0;
             break;
         }
        }
      }
      if(*(indexJ1+1)==1){
        categoriefinale2=categorie;
        NombreGagneeFinale2=NombreGagnee;
        NombreJoueeFinale2=NombreJouee;
        NombrePerduesFinale2=NombrePerdues;}
        if(*(indexJ1+1)==1){indexJ2tmp=1;}

/// feof fonction de fin du fichier , indexJ2et cdt de fin de boucle

           if(feof(GoData1)){

            fclose(GoData1);
            if(indexJ2tmp==1 && indexJ1tmp==1){

                if(  (categoriefinale1=='A' && (categoriefinale2=='C'| categoriefinale2=='D' |categoriefinale2=='E'))
                    | (categoriefinale1=='B' && ( categoriefinale2=='D' |categoriefinale2=='E'))
                    | (categoriefinale1=='C' && ( categoriefinale2=='E'))
                    ){
                    return 2;/// donc le J2 est en position de handicap

                    }else{return 0;}
                }
                if(indexJ2tmp==1 && indexJ1tmp==1){

                if(  (categoriefinale2=='A' && (categoriefinale1=='C'| categoriefinale1=='D' |categoriefinale1=='E'))
                | (categoriefinale2=='B' && ( categoriefinale1=='D' |categoriefinale1=='E'))
                | (categoriefinale2=='C' && ( categoriefinale1=='E'))
                ){
                return 1;/// donc le J2 est en position de handicap

                }
                else{return 0;}
                }
                GoData1= fopen("GoData1.txt", "a");
               if(indexJ1tmp==0 && indexJ2tmp==0){
/*
                    fprintf(GoData1,"%s %s %f %f %f %c \n",nom_joueur1,MotPasseJ1,0,0,0,'E');
                    fprintf(GoData1,"%s %s %f %f %f %c \n",nom_joueur2,MotPasseJ2,0,0,0,'E');*/
                    return 0;
                    }

                if(indexJ1tmp==0)/// ceci dit que le joueur 1 n'est pas dans la base de donnees ; donc on, doit l'ajouter
                {
                    /*GoData1= fopen("GoData1.txt", "a");
                    fprintf(GoData1,"%s %s %d %d %d %c \n",nom_joueur1,MotPasseJ1,0,0,0,'E');*/
                    return 0;
                    }
                if(indexJ2tmp==0)/// ceci dit que le joueur 2 n'est pas dans la base de donnees ; donc on, doit l'ajouter
                    {

                   /* GoData1= fopen("GoData1.txt", "a");
                        fprintf(GoData1,"%s %s %f %f %f %c \n",nom_joueur2,MotPasseJ2,0,0,0,'E');*/
                        return 0;
                    }


                    }

    }
   fclose(GoData1);}





/// cette fonction permet de comparer deux chaines de caractères; ayant la même taille
int ComparerDeuxMotsPasse(char str1[20],char str2[20]){
     int len1=0;int len2=0;
      for(int i=0;i<20;i++){
         if(str1[i]=='\0')
            {
           break;
         }
      len1++;
     }
    for(int i=0;i<20;i++){
         if(str2[i]=='\0')
            {
           break;
         }
      len2++;
     }
     if(len1!=len2){return 0;}
     else{
        for (int j=0;j<len1;j++)
        {
        if(str1[j]!=str2[j] )
        {
          return 0;
            break;
        }
     }
     return 1;
     }
}
int RecuperationDeLenNomExact(char StrNom[100]){
    int len=0;
     for(int i=0;i<100;i++){

         if(StrNom[i]=='\0'){
           break;}

        len++;}
        return len;
}
int RecuperationDeLenMotExact(char StrMot[20]){
    int len=0;
     for(int i=0;i<20;i++){

         if(StrMot[i]=='\0'){
           break;}

        len++;}
        return len;
}
int ComparerDeuxNoms(char str1[100],char str2[100]){
     int len1=0;int len2=0;
      for(int i=0;i<100;i++){
         if(str1[i]=='\0')
            {
           break;
         }
      len1++;
     }
    for(int i=0;i<100;i++){
         if(str2[i]=='\0')
            {
           break;
         }
      len2++;
     }
     if(len1!=len2){return 0;}
     else{
        for (int j=0;j<len1;j++)
        {
        if(str1[j]!=str2[j] )
        {
          return 0;
            break;
        }
     }
     return 1;
     }
}


///fonction TraitementDeFinDePartie(nom joueur1,Mot de passe du joueur 1,nom du joueur 2, Mot de ^passe du joueur 2)
/// elle va considerer que le joueur 1 a gagne et va faire les modifications voulues dans le fichier text
void  TraitementDeFinDePartie( char nom_joueur1[100],char MotPasseJ1[20],char nom_joueur2[100], char MotPasseJ2[20]){
    signed char NomJoueur[100];
    signed char MotPasse[100];
    float NombreGagnee=0;
    float NombreJouee=0;
    float  NombrePerdues=0;
    signed char categorie;
    signed char categoriefinale1='E';
    float NombreGagneeFinale1=0;
    float NombreJoueeFinale1=0;
    float NombrePerduesFinale1=0;
    signed char categorieFinale1;
    signed char categoriefinale2='E';
    float NombreGagneeFinale2=0;
    float NombreJoueeFinale2=0;
    float NombrePerduesFinale2=0;
    signed char categorieFinale2;
    int percentageJ1; int  percentageJ2;
    int index=1; int index1=0; int index2=0;int count=0;

    FILE *GoData1;
    FILE *GoData2;


    GoData1=fopen("GoData1.txt", "r");
    GoData2=fopen("GoData2.txt","w");
    while (1){count++;



      fscanf(GoData1,"%s %s %f %f %f %c \n ", &NomJoueur,&MotPasse,&NombreJouee,&NombreGagnee,&NombrePerdues,&categorie);



      if(ComparerDeuxMotsPasse(MotPasse,MotPasseJ1)==1 && ComparerDeuxNoms(NomJoueur,nom_joueur1)==1){
            index1=1;
        categoriefinale1=categorie;
        NombreGagneeFinale1=NombreGagnee;
        NombreJoueeFinale1=NombreJouee;
        NombrePerduesFinale1=NombrePerdues;}


    /// ici pour comperer le nom recupere avec le joueur 2

      if(ComparerDeuxMotsPasse(MotPasse,MotPasseJ2)==1 && ComparerDeuxNoms(NomJoueur,nom_joueur2)==1){
            index2=1;
        categoriefinale2=categorie;
        NombreGagneeFinale2=NombreGagnee;
        NombreJoueeFinale2=NombreJouee;
        NombrePerduesFinale2=NombrePerdues;}
        /// ecrire le donnes des autres joueur dans le fichier
    if(index1==0 && index2==0 && count>1){
            index=0;
            fprintf(GoData2,"%s %s %f %f %f %c \n",NomJoueur,MotPasse,NombreJouee,NombreGagnee,NombrePerdues,categorie);
        }


    if(feof(GoData1)){

            char categorie_tab[6]="ABCDE";
            for (int i=0;i<5;i++){
               if(categoriefinale2==categorie_tab[i]){
                    NombreJoueeFinale2++;
                    NombrePerduesFinale2++;}
               if( categoriefinale1==categorie_tab[i] ){
                    NombreGagneeFinale1++;
                    NombreJoueeFinale1++;

               }

            }


    passe:
        percentageJ1=(NombreGagneeFinale1/NombreJoueeFinale1)*100;
        if(percentageJ1>=80.0){
            categoriefinale1='A';
        }
        if(percentageJ1>=60.0 && percentageJ1<=80.0){
            categoriefinale1='B';
        }
        if(percentageJ1>=40.0 && percentageJ1<=60.0){
            categoriefinale1='C';
        }
        if(percentageJ1>=20.0 && percentageJ1<=40.0){
            categoriefinale1='D';
        }
        if(percentageJ1<20.0){
            categoriefinale1='E';
        }

        percentageJ2=(NombreGagneeFinale2/NombreJoueeFinale2)*100;
          if(percentageJ2>=80.0){
            categoriefinale2='A';
        }
        if(percentageJ2>=60.0 && percentageJ2<=80.0){
            categoriefinale2='B';
        }
        if(percentageJ2>=40.0 && percentageJ2<=60.0){
            categoriefinale2='C';
        }
        if(percentageJ2>=20.0 && percentageJ2<=40.0){
            categoriefinale2='D';
        }
        if(percentageJ2<20.0){
            categoriefinale2='E';
        }
       // printf("%s %s %f %f %f %c \n", nom_joueur1,MotPasseJ1,NombreJoueeFinale1,NombreGagneeFinale1,NombrePerduesFinale1,categoriefinale1);
//traiter le cas ou il n aps de joueur a part

         printf("%s %s %f %f %f %c \n", nom_joueur2,MotPasseJ2,NombreJoueeFinale2,NombreGagneeFinale2,NombrePerduesFinale2,categoriefinale2);
         fprintf(GoData2,"%s %s %f %f %f %c \n", nom_joueur2,MotPasseJ2,NombreJoueeFinale2,NombreGagneeFinale2,NombrePerduesFinale2,categoriefinale2);

         fprintf(GoData2,"%s %s %f %f %f %c \n", nom_joueur1,MotPasseJ1,NombreJoueeFinale1,NombreGagneeFinale1,NombrePerduesFinale1,categoriefinale1);

        fclose(GoData1);
        fclose(GoData2);
        break;
        }

    }
   // if(feof(GoData1)){
   /// maintenant on a copier tous les lignes des joueur sauf les deux qui ont jouee. on va ajouter les parties gagnes et perdues à chacun

  /// Maintenant le tgraitement est fait et les noms des joueur  on doit donc recopier ces donnes dans le fichier GoData 1 ;

   GoData1= fopen("GoData1.txt", "w");
   GoData2= fopen("GoData2.txt", "r");
   if(GoData1==NULL){
    printf("erreur dans l'ouverturedu  fichier DATA  ");
    exit(1);
    }
  if(GoData2==NULL){

    printf("erreur dans l'ouverturedu  fichier DATA  ");
    exit(1);
  }


  while (!feof(GoData2)){
char categorieFinale;
        int NombreGagneeFinale;
        int NombreJoueeFinale;
        int NombrePerduesFinale;
       fscanf(GoData2,"%s %s %f %f %f %c \n ", &NomJoueur,&MotPasse,&NombreJouee,&NombreGagnee,&NombrePerdues,&categorie);
        categorieFinale=categorie;
        NombreGagneeFinale=NombreGagnee;
        NombreJoueeFinale=NombreJouee;
        NombrePerduesFinale=NombrePerdues;


        fprintf(GoData1,"%s %s %d %d %d %c \n", NomJoueur,MotPasse,NombreJoueeFinale,NombreGagneeFinale,NombrePerduesFinale,categorieFinale);
        }

    fclose(GoData1);
    fclose(GoData2);

    }

///les fonctions: /est_chaine_nombre/ChoixEstStable/ChoixEstStablefinal  assurent la stabilité du code;au cas ou l'ultilisateur n'a pas choisi un chiffre présent au menu
int est_chaine_nombre(char chaine[1000]) {
    int i = 0;
    while(chaine[i] != '\0') {
        if(!isdigit(chaine[i])) {
            return 0;
        }
        i++;
    }
    return 1;
}


int ChoixEstStable(char ChaineEntier[1000],int nbre_de_choix){
     int count=0;
     do{count++;}
     while(ChaineEntier[count]!='\0');
     if( count>1 | est_chaine_nombre(ChaineEntier)==0)
      {
          return -9;

      }
      if(count==1 && est_chaine_nombre(ChaineEntier)==1){

       int Entier = atoi(ChaineEntier);
       if (Entier==0){return -9;}
       if (Entier<=nbre_de_choix){return Entier;}
       if ((Entier>nbre_de_choix) ){return -9;}



      }
}
int ChoixEstStablefinal(char num_choix_au_menu_principale_char[1000],int nbre_de_choix){

system("cls");
if( ChoixEstStable(num_choix_au_menu_principale_char, nbre_de_choix)==-9){

            red();
            printf("\n++");
            printf("Vous avez entrer un choix incoreccte , veuillez rechoisir un nombre:\n");
            printf("entrez un caractere pour continuez:\n");
            getch();
            system("cls");
            green();
            return (-1);}
    else{ return(ChoixEstStable(num_choix_au_menu_principale_char, nbre_de_choix));}
}

#include "JoueurVsMachineFacile.c"
#include "JouerVsMachineMoyen.c"
#include "MenuJouerUnePartie.c"

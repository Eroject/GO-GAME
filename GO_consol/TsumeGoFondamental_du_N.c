//attaque
/*partie 1: cette partie est concerné par le stockage des informations de chaque intersection(nbr de vides, position de vides, nombre
de pierres à capturer et position de pierres à capturer à l'aide de la structure chain. */

int be,c;



int tab_du_comparaison_coupB[81],coup_parfaitB;
float h;
h=1.5;
int *tab_de_position_capture,*tab_du_pos_de_vide,*capture,*vides;
        capture=malloc(4);
        *capture=0;
        vides=malloc(4);
        *vides=0;
       tab_de_position_capture=malloc(4*45*13);
            for(int r=0;r<586;r++){
                   {
                        *(tab_de_position_capture+r)=0;
                    }
                }
        tab_du_pos_de_vide=malloc(4*45*13);
            for(int r=0;r<586;r++){
                   {
                        *(tab_du_pos_de_vide+r)=0;
                    }
                }
        int *exist;
        exist=malloc(4);
        *exist=0;




    char *tab_p;
    tab_p=malloc((45*13));
    tab_p=tableaudynamique;
chaineB chainB[586];

int k=0;int t;
for (int i=1;i<=9;i++){
 for (int j=1;j<=9;j++){

            vides=malloc(4);
            *vides=0;
      for(int r=0;r<586;r++){
          {
                 *(tab_de_position_capture+r)=0;
        }
                                }
                                            tab_du_pos_de_vide=malloc(4*45*13);


            for(int r=0;r<586;r++){
                   {
                        *(tab_du_pos_de_vide+r)=0;
                    }
                }
exist=malloc(4);
            *exist=0;
            *capture=0;
                        parcoursfinal(tab_p,i,j,tab_de_position_capture,capture,exist,tab_du_pos_de_vide,vides,0,'B');
chainB[k].nbr_de_vide=*vides;
chainB[k].nbr_de_captures=*(capture);




   for(int r=0;r<586;r++){
                        {chainB[k].position_de_captures[r]=*(tab_de_position_capture+r);

                        }
                                }
    for(int r=0;r<586;r++){
                   {chainB[k].position_de_vide[r]=*(tab_du_pos_de_vide+r);
                    }
                }

k++;


 }
}
/*partie2: cette parti est chargé par le rôle de calculer l'ecart selon la relation ligne 93  et le stocke dans le tableau tab_du_comparaison_coupB[],
le coup parfait est alors déduit à partir de ce tableau= c'est le max du tableau! Ce tableau est à chaque fois initialiser par -1000 après qu'on
récupère le coup parfait on chercher ses intersections vides et on place dans une de ces intersections d'une façon aléatoire*/
for(int k=0;k<81;k++){
    tab_du_comparaison_coupB[k]=-1000;//parceque on peut avoire dans ce tableau des valeurs negative et qu on souhaite avoire leur max donc on a mis une valeur petite
        }

for(int k=0;k<81;k++){
        if(chainB[k].nbr_de_captures!=0 && chainB[k].nbr_de_vide!=0)
   { tab_du_comparaison_coupB[k]=chainB[k].nbr_de_captures-h*chainB[k].nbr_de_vide;
        }

   }



 ici33N:
        coup_parfaitB=maxom(tab_du_comparaison_coupB);

srand( time( NULL ) );
if( chainB[coup_parfaitB].nbr_de_vide!=0)
{
be=(rand()%chainB[coup_parfaitB].nbr_de_vide);

}

 if(((chainB[coup_parfaitB].nbr_de_captures)!=0)&& ((chainB[coup_parfaitB].nbr_de_vide)!=0))
{
       colonne=get_colo((chainB[coup_parfaitB].position_de_vide[be]));
       ligne=get_li((chainB[coup_parfaitB].position_de_vide[be]));}


                       if(tab_du_comparaison_coupB[coup_parfaitB]==-1000){
                            ligne=ligne_aleatoire();
              colonne=colonne_aleatoire();


                       }

///pour eviter le probleme de choisir tout le temps un coup qui est interdit
char tableaudynamiquecopy[21][45];
    char *tab_p_copy;
    tab_p_copy=malloc((45*13));
   tab_de_position_noires=malloc((4*45*13));
int interN=1,colonnetest,lignetest;
 je=malloc(4);
 existe=malloc(4);
(*je)=0;
*existe=0;
  for(int r=0;r<586;r++){
                   {
                        *(tab_de_position_noires+r)=0;
                    }
                }



//pour eviter le probleme de choisir tout le temps un coup qui est interdit par coupinterdit
for (int i=0;i<chainB[coup_parfaitB].nbr_de_vide;i++)
       { colonnetest=get_colo((chainB[coup_parfaitB].position_de_vide[i]));
         lignetest=get_li((chainB[coup_parfaitB].position_de_vide[i]));
         for (int i=0;i<21;i++){
            for (int j=0;j<45;j++){
         tableaudynamiquecopy[i][j]= tableaudynamique[i][j];}}
         tableaudynamiquecopy[ligne_sur_le_tab(lignetest)][colonne_sur_le_tab(colonnetest)]='N';
         tab_p_copy=tableaudynamiquecopy;
         if( parcoursN(tab_p_copy,lignetest,colonnetest,tab_de_position_noires,je,existe)==0)
            {interN=0;
  }
         }// cela montre qu il existe une position non interdite


for (int i=0;i<21;i++){
 for (int j=0;j<45;j++){
         tableaudynamiquecopy[i][j]= tableaudynamique[i][j];}}

tableaudynamiquecopy[ligne_sur_le_tab(ligne)][colonne_sur_le_tab(colonne)]='N';
         tab_p_copy=tableaudynamiquecopy;



    if( parcoursN(tab_p_copy,ligne,colonne,tab_de_position_noires,je,existe)==1){
            if (interN==1)//tout les position d attaque sont interdites

            {

                 ligne=ligne_aleatoire();
              colonne=colonne_aleatoire();
                            tab_du_comparaison_coupB[coup_parfaitB]=-1000;

                    goto ici33N;}
            if (interN==0)// s' il existe une position non interdite
            {
                tab_du_comparaison_coupB[coup_parfaitB]=-1000;

                    goto ici33N;
            }

 }
//pour eviter le probleme de choisir tout le temps un coup qui est interdit par KO
                     if(interditN[ligne][colonne]==1){
                        tab_du_comparaison_coupB[coup_parfaitB]=-1000;
                        goto ici33N;
                       }

*je=0;
*existe=0;
  for(int r=0;r<586;r++){
                   {
                        *(tab_de_position_noires+r)=0;
                    }
                }
 //printf("%d\n",coup_parfaitB);
//printf("<<<<<<<<<<<<<<<<%d<<<<<<<<%d\n",chainB[coup_parfaitB].position_de_vide[be],coup_parfaitB);



    //   printf("position du coup parfaitN:%d ///// %d\n",chainN[coup_parfaitN].nbr_de_captures[0],45*ligne_sur_le_tab(8)+colonne_sur_le_tab(9));
      // printf("position du coup parfaitB:%d ///// %d\n",chainB[coup_parfaitB].nbr_de_captures,45*ligne_sur_le_tab(2)+colonne_sur_le_tab(7));
/*printf("B   nbre de vide: %d --position vide:%d----nbre capture%d---position capture:%d-----tab de pos captur%c-----tab de pos vide%c\n",chainB[9].nbr_de_vide,chainB[9].position_de_vide[0],chainB[9].nbr_de_captures,chainB[9].position_de_captures[0],*(tab_p+chainB[0].position_de_captures[0]),*(tab_p+chainB[0].position_de_vide[0]));

printf("N   nbre de vide: %d --position vide:%d----nbre capture%d---position capture:%d-----tab de pos captur%c-----tab de pos vide%c\n",chainN[80].nbr_de_vide,chainN[80].position_de_vide[0],chainN[80].nbr_de_captures,chainN[80].position_de_captures[1],*(tab_p+chainN[80].position_de_captures[3]),*(tab_p+chainN[80].position_de_vide[0]));
//*(tab_p+chainN[0].position_de_captures[nbre a cature-1])*/


//attaque
/*partie 1: cette partie est concerné par le stockage des informations de chaque intersection(nbr de vides, position de vides, nombre
de pierres à capturer et position de pierres à capturer à l'aide de la structure chainN. */
int b;

int tab_du_comparaison_coupN[81],coup_parfaitN;
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

chaineN chainN[586];
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

parcoursfinal(tab_p,i,j,tab_de_position_capture,capture,exist,tab_du_pos_de_vide,vides,0,'N');
chainN[k].nbr_de_vide=*vides;
chainN[k].nbr_de_captures=*(capture);




   for(int r=0;r<586;r++){
                        {chainN[k].position_de_captures[r]=*(tab_de_position_capture+r);

                        }
                                }
    for(int r=0;r<586;r++){
                   {chainN[k].position_de_vide[r]=*(tab_du_pos_de_vide+r);
                    }
                }




k++;


 }
}
/*partie2: cette parti est chargé par le rôle de calculer l'ecart selon la relation ligne 93  et le stocke dans le tableau tab_du_comparaison_coupN[],
le coup parfait est alors déduit à partir de ce tableau= c'est le max du tableau! Ce tableau est à chaque fois initialiser par -1000 après qu'on
récupère le coup parfait on chercher ses intersections vides et on place dans une de ces intersections d'une façon aléatoire*/
for(int k=0;k<81;k++){
    tab_du_comparaison_coupN[k]=-1000;
        }

for(int k=0;k<81;k++){
        if(chainN[k].nbr_de_captures!=0 && chainN[k].nbr_de_vide!=0)
   { tab_du_comparaison_coupN[k]=chainN[k].nbr_de_captures-h*chainN[k].nbr_de_vide;
        }

   }
ici33B:
        coup_parfaitN=maxom(tab_du_comparaison_coupN);



srand( time( NULL ) );
if( chainN[coup_parfaitN].nbr_de_vide!=0)
{
be=(rand()%(chainN[coup_parfaitN].nbr_de_vide));
}
 if(((chainN[coup_parfaitN].nbr_de_captures)!=0)&& ((chainN[coup_parfaitN].nbr_de_vide)!=0))
{
       colonne=get_colo((chainN[coup_parfaitN].position_de_vide[be]));
       ligne=get_li((chainN[coup_parfaitN].position_de_vide[be]));}

//partie 3: eviter le conflit entre cette fonction et la fonction CoupInterditMMoyen_du_blanc.
                       if(tab_du_comparaison_coupN[coup_parfaitN]==-1000){
                            ligne=ligne_aleatoire();
              colonne=colonne_aleatoire();


                       }
char tableaudynamiquecopy[21][45];
    char *tab_p_copy;
    tab_p_copy=malloc((45*13));
   tab_de_position_noires=malloc((4*45*13));
int interB=1,colonnetest,lignetest;
interB=1;
 je=malloc(4);
 existe=malloc(4);
(*je)=0;
*existe=0;
  for(int r=0;r<586;r++){
                   {
                        *(tab_de_position_noires+r)=0;
                    }
                }



for (int i=0;i<chainN[coup_parfaitN].nbr_de_vide;i++)
       { colonnetest=get_colo((chainN[coup_parfaitN].position_de_vide[i]));
         lignetest=get_li((chainN[coup_parfaitN].position_de_vide[i]));
for (int i=0;i<21;i++){
 for (int j=0;j<45;j++){
         tableaudynamiquecopy[i][j]= tableaudynamique[i][j];}}
         tableaudynamiquecopy[ligne_sur_le_tab(lignetest)][colonne_sur_le_tab(colonnetest)]='B';
         tab_p_copy=tableaudynamiquecopy;
         if( parcoursB(tab_p_copy,lignetest,colonnetest,tab_de_position_noires,je,existe)==0)
            {interB=0;}
         }// cela montre qu il existe une position non interdite


for (int i=0;i<21;i++){
 for (int j=0;j<45;j++){
         tableaudynamiquecopy[i][j]= tableaudynamique[i][j];}}

tableaudynamiquecopy[ligne_sur_le_tab(ligne)][colonne_sur_le_tab(colonne)]='B';
         tab_p_copy=tableaudynamiquecopy;



    if( parcoursB(tab_p_copy,ligne,colonne,tab_de_position_noires,je,existe)==1){
            if (interB==1)//toutes les position d attaque sont interdites

            { ligne=ligne_aleatoire();
              colonne=colonne_aleatoire();
              tab_du_comparaison_coupN[coup_parfaitN]=-1000;
                   goto ici33B;
                  }
            if (interB==0)// s' il existe une position non interdite
            {
             tab_du_comparaison_coupN[coup_parfaitN]=-1000;
                goto ici33B;
            }

 }
  if(interditB[ligne][colonne]==1){
                        tab_du_comparaison_coupN[coup_parfaitN]=-1000;
                        goto ici33B;
                       }

*je=0;
*existe=0;
  for(int r=0;r<586;r++){
                   {
                        *(tab_de_position_noires+r)=0;
                    }
                }

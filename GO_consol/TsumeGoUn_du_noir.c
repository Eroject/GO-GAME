{
 for(int i=2;i<=4;i++)//1
    {int j=9;
       {
             if ((tableaudynamique[ligne_sur_le_tab(i)][colonne_sur_le_tab(j)]=='B') && (tableaudynamique[ligne_sur_le_tab(i)][colonne_sur_le_tab(j-1)]=='B') &&
            (tableaudynamique[ligne_sur_le_tab(i+1)][colonne_sur_le_tab(j-1)]=='B') && (tableaudynamique[ligne_sur_le_tab(i+2)][colonne_sur_le_tab(j-1)]=='B')&&
            (tableaudynamique[ligne_sur_le_tab(i+3)][colonne_sur_le_tab(j-1)]=='B') && (tableaudynamique[ligne_sur_le_tab(i+4)][colonne_sur_le_tab(j-1)]=='B') &&
            (tableaudynamique[ligne_sur_le_tab(i+4)][colonne_sur_le_tab(j)]=='B')&& (tableaudynamique[ligne_sur_le_tab(i-1)][colonne_sur_le_tab(j)]=='N')&&
            (tableaudynamique[ligne_sur_le_tab(i-1)][colonne_sur_le_tab(j-1)]=='N') && (tableaudynamique[ligne_sur_le_tab(i-1)][colonne_sur_le_tab(j-2)]=='N')
            && (tableaudynamique[ligne_sur_le_tab(i)][colonne_sur_le_tab(j-2)]=='N')&&
            (tableaudynamique[ligne_sur_le_tab(i+1)][colonne_sur_le_tab(j-2)]=='N') && (tableaudynamique[ligne_sur_le_tab(i+2)][colonne_sur_le_tab(j-2)]=='N')&&
            (tableaudynamique[ligne_sur_le_tab(i+3)][colonne_sur_le_tab(j-2)]=='N')&& (tableaudynamique[ligne_sur_le_tab(i+4)][colonne_sur_le_tab(j-2)]=='N')&&
            (tableaudynamique[ligne_sur_le_tab(i+5)][colonne_sur_le_tab(j-2)]=='N')&& (tableaudynamique[ligne_sur_le_tab(i+5)][colonne_sur_le_tab(j-1)]=='N')&&
            (tableaudynamique[ligne_sur_le_tab(i+5)][colonne_sur_le_tab (j)]=='N')&&  (tableaudynamique[ligne_sur_le_tab(i+2)][colonne_sur_le_tab(j)]=='N')&&
            (tableaudynamique[ligne_sur_le_tab(i+1)][colonne_sur_le_tab (j)]=='|')&&  (tableaudynamique[ligne_sur_le_tab(i+3)][colonne_sur_le_tab(j)]=='|'))
           {
              ligne=i+3;
              colonne=j;
           }
            }
       }
     for(int i=2;i<=4;i++)//2
    {int j=9;
       {
             if ((tableaudynamique[ligne_sur_le_tab(i)][colonne_sur_le_tab(j)]=='B') && (tableaudynamique[ligne_sur_le_tab(i)][colonne_sur_le_tab(j-1)]=='B') &&
            (tableaudynamique[ligne_sur_le_tab(i+1)][colonne_sur_le_tab(j-1)]=='B') && (tableaudynamique[ligne_sur_le_tab(i+2)][colonne_sur_le_tab(j-1)]=='B')&&
            (tableaudynamique[ligne_sur_le_tab(i+3)][colonne_sur_le_tab(j-1)]=='B') && (tableaudynamique[ligne_sur_le_tab(i+4)][colonne_sur_le_tab(j-1)]=='B') &&
            (tableaudynamique[ligne_sur_le_tab(i+4)][colonne_sur_le_tab(j)]=='B')&& (tableaudynamique[ligne_sur_le_tab(i-1)][colonne_sur_le_tab(j)]=='N')&&
            (tableaudynamique[ligne_sur_le_tab(i-1)][colonne_sur_le_tab(j-1)]=='N') && (tableaudynamique[ligne_sur_le_tab(i-1)][colonne_sur_le_tab(j-2)]=='N')
            && (tableaudynamique[ligne_sur_le_tab(i)][colonne_sur_le_tab(j-2)]=='N')&&
            (tableaudynamique[ligne_sur_le_tab(i+1)][colonne_sur_le_tab(j-2)]=='N') && (tableaudynamique[ligne_sur_le_tab(i+2)][colonne_sur_le_tab(j-2)]=='N')&&
            (tableaudynamique[ligne_sur_le_tab(i+3)][colonne_sur_le_tab(j-2)]=='N')&& (tableaudynamique[ligne_sur_le_tab(i+4)][colonne_sur_le_tab(j-2)]=='N')&&
            (tableaudynamique[ligne_sur_le_tab(i+5)][colonne_sur_le_tab(j-2)]=='N')&& (tableaudynamique[ligne_sur_le_tab(i+5)][colonne_sur_le_tab(j-1)]=='N')&&
            (tableaudynamique[ligne_sur_le_tab(i+5)][colonne_sur_le_tab (j)]=='N')&&  (tableaudynamique[ligne_sur_le_tab(i+2)][colonne_sur_le_tab(j)]=='N')&&
            (tableaudynamique[ligne_sur_le_tab(i+1)][colonne_sur_le_tab (j)]=='|')&&  (tableaudynamique[ligne_sur_le_tab(i+3)][colonne_sur_le_tab(j)]=='N'))
           {
        while(ligne==(i+1) && colonne==9){
               ligne=ligne_aleatoire();
               colonne=colonne_aleatoire();
         }
           }
            }}

   for(int i=2;i<=4;i++)//3
    {int j=9;
    {
             if ((tableaudynamique[ligne_sur_le_tab(i)][colonne_sur_le_tab(j)]=='B') && (tableaudynamique[ligne_sur_le_tab(i)][colonne_sur_le_tab(j-1)]=='B') &&
            (tableaudynamique[ligne_sur_le_tab(i+1)][colonne_sur_le_tab(j-1)]=='B') && (tableaudynamique[ligne_sur_le_tab(i+2)][colonne_sur_le_tab(j-1)]=='B')&&
            (tableaudynamique[ligne_sur_le_tab(i+3)][colonne_sur_le_tab(j-1)]=='B') && (tableaudynamique[ligne_sur_le_tab(i+4)][colonne_sur_le_tab(j-1)]=='B') &&
            (tableaudynamique[ligne_sur_le_tab(i+4)][colonne_sur_le_tab(j)]=='B')&& (tableaudynamique[ligne_sur_le_tab(i-1)][colonne_sur_le_tab(j)]=='N')&&
            (tableaudynamique[ligne_sur_le_tab(i-1)][colonne_sur_le_tab(j-1)]=='N') && (tableaudynamique[ligne_sur_le_tab(i-1)][colonne_sur_le_tab(j-2)]=='N')
            && (tableaudynamique[ligne_sur_le_tab(i)][colonne_sur_le_tab(j-2)]=='N')&&
            (tableaudynamique[ligne_sur_le_tab(i+1)][colonne_sur_le_tab(j-2)]=='N') && (tableaudynamique[ligne_sur_le_tab(i+2)][colonne_sur_le_tab(j-2)]=='N')&&
            (tableaudynamique[ligne_sur_le_tab(i+3)][colonne_sur_le_tab(j-2)]=='N')&& (tableaudynamique[ligne_sur_le_tab(i+4)][colonne_sur_le_tab(j-2)]=='N')&&
            (tableaudynamique[ligne_sur_le_tab(i+5)][colonne_sur_le_tab(j-2)]=='N')&& (tableaudynamique[ligne_sur_le_tab(i+5)][colonne_sur_le_tab(j-1)]=='N')&&
            (tableaudynamique[ligne_sur_le_tab(i+5)][colonne_sur_le_tab (j)]=='N')&&  (tableaudynamique[ligne_sur_le_tab(i+2)][colonne_sur_le_tab(j)]=='|')&&
            (tableaudynamique[ligne_sur_le_tab(i+1)][colonne_sur_le_tab (j)]=='B')&&  (tableaudynamique[ligne_sur_le_tab(i+3)][colonne_sur_le_tab(j)]=='|'))
           {
             colonne=j;
             ligne=i+2;
           }
        }
    }

for(int i=2;i<=4;i++)//4
    {  int j=9;
      {
             if ((tableaudynamique[ligne_sur_le_tab(i)][colonne_sur_le_tab(j)]=='B') && (tableaudynamique[ligne_sur_le_tab(i)][colonne_sur_le_tab(j-1)]=='B') &&
            (tableaudynamique[ligne_sur_le_tab(i+1)][colonne_sur_le_tab(j-1)]=='B') && (tableaudynamique[ligne_sur_le_tab(i+2)][colonne_sur_le_tab(j-1)]=='B')&&
            (tableaudynamique[ligne_sur_le_tab(i+3)][colonne_sur_le_tab(j-1)]=='B') && (tableaudynamique[ligne_sur_le_tab(i+4)][colonne_sur_le_tab(j-1)]=='B') &&
            (tableaudynamique[ligne_sur_le_tab(i+4)][colonne_sur_le_tab(j)]=='B')&& (tableaudynamique[ligne_sur_le_tab(i-1)][colonne_sur_le_tab(j)]=='N')&&
            (tableaudynamique[ligne_sur_le_tab(i-1)][colonne_sur_le_tab(j-1)]=='N') && (tableaudynamique[ligne_sur_le_tab(i-1)][colonne_sur_le_tab(j-2)]=='N')
            && (tableaudynamique[ligne_sur_le_tab(i)][colonne_sur_le_tab(j-2)]=='N')&&
            (tableaudynamique[ligne_sur_le_tab(i+1)][colonne_sur_le_tab(j-2)]=='N') && (tableaudynamique[ligne_sur_le_tab(i+2)][colonne_sur_le_tab(j-2)]=='N')&&
            (tableaudynamique[ligne_sur_le_tab(i+3)][colonne_sur_le_tab(j-2)]=='N')&& (tableaudynamique[ligne_sur_le_tab(i+4)][colonne_sur_le_tab(j-2)]=='N')&&
            (tableaudynamique[ligne_sur_le_tab(i+5)][colonne_sur_le_tab(j-2)]=='N')&& (tableaudynamique[ligne_sur_le_tab(i+5)][colonne_sur_le_tab(j-1)]=='N')&&
            (tableaudynamique[ligne_sur_le_tab(i+5)][colonne_sur_le_tab (j)]=='N')&&  (tableaudynamique[ligne_sur_le_tab(i+2)][colonne_sur_le_tab(j)]=='N')&&
            (tableaudynamique[ligne_sur_le_tab(i+1)][colonne_sur_le_tab (j)]=='B')&&  (tableaudynamique[ligne_sur_le_tab(i+3)][colonne_sur_le_tab(j)]=='|'))
           {
             while(ligne==(i+3) && colonne==9){
               ligne=ligne_aleatoire();
               colonne=colonne_aleatoire();
           }
        }
    }
for(int i=2;i<=4;i++)//5
    {int j=9;
       {
             if ((tableaudynamique[ligne_sur_le_tab(i)][colonne_sur_le_tab(j)]=='B') && (tableaudynamique[ligne_sur_le_tab(i)][colonne_sur_le_tab(j-1)]=='B') &&
            (tableaudynamique[ligne_sur_le_tab(i+1)][colonne_sur_le_tab(j-1)]=='B') && (tableaudynamique[ligne_sur_le_tab(i+2)][colonne_sur_le_tab(j-1)]=='B')&&
            (tableaudynamique[ligne_sur_le_tab(i+3)][colonne_sur_le_tab(j-1)]=='B') && (tableaudynamique[ligne_sur_le_tab(i+4)][colonne_sur_le_tab(j-1)]=='B') &&
            (tableaudynamique[ligne_sur_le_tab(i+4)][colonne_sur_le_tab(j)]=='B')&& (tableaudynamique[ligne_sur_le_tab(i-1)][colonne_sur_le_tab(j)]=='N')&&
            (tableaudynamique[ligne_sur_le_tab(i-1)][colonne_sur_le_tab(j-1)]=='N') && (tableaudynamique[ligne_sur_le_tab(i-1)][colonne_sur_le_tab(j-2)]=='N')
            && (tableaudynamique[ligne_sur_le_tab(i)][colonne_sur_le_tab(j-2)]=='N')&&
            (tableaudynamique[ligne_sur_le_tab(i+1)][colonne_sur_le_tab(j-2)]=='N') && (tableaudynamique[ligne_sur_le_tab(i+2)][colonne_sur_le_tab(j-2)]=='N')&&
            (tableaudynamique[ligne_sur_le_tab(i+3)][colonne_sur_le_tab(j-2)]=='N')&& (tableaudynamique[ligne_sur_le_tab(i+4)][colonne_sur_le_tab(j-2)]=='N')&&
            (tableaudynamique[ligne_sur_le_tab(i+5)][colonne_sur_le_tab(j-2)]=='N')&& (tableaudynamique[ligne_sur_le_tab(i+5)][colonne_sur_le_tab(j-1)]=='N')&&
            (tableaudynamique[ligne_sur_le_tab(i+5)][colonne_sur_le_tab (j)]=='N')&&  (tableaudynamique[ligne_sur_le_tab(i+2)][colonne_sur_le_tab(j)]=='|')&&
            (tableaudynamique[ligne_sur_le_tab(i+1)][colonne_sur_le_tab (j)]=='B')&&  (tableaudynamique[ligne_sur_le_tab(i+3)][colonne_sur_le_tab(j)]=='B'))
           {
              ligne=i+2;
              colonne=j;
           }
            }
       }


}
}



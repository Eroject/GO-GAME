// la machine joue avec le blanc
for(int i=1;i<=3;i++)
{
    int j=9;
    if ((tableaudynamique[ligne_sur_le_tab(i)][colonne_sur_le_tab(j)]=='B')&&(tableaudynamique[ligne_sur_le_tab(i)][colonne_sur_le_tab(j-1)]=='B')&&
        (tableaudynamique[ligne_sur_le_tab(i)][colonne_sur_le_tab(j-2)]=='B')&&(tableaudynamique[ligne_sur_le_tab(i+1)][colonne_sur_le_tab(j-2)]=='B')&&
        (tableaudynamique[ligne_sur_le_tab(i+1)][colonne_sur_le_tab(j-3)]=='B')&&(tableaudynamique[ligne_sur_le_tab(i+2)][colonne_sur_le_tab(j-3)]=='B')&&
        (tableaudynamique[ligne_sur_le_tab(i+3)][colonne_sur_le_tab(j-3)]=='B')&&(tableaudynamique[ligne_sur_le_tab(i+4)][colonne_sur_le_tab(j-3)]=='B')&&
        (tableaudynamique[ligne_sur_le_tab(i+5)][colonne_sur_le_tab(j-3)]=='B')&&(tableaudynamique[ligne_sur_le_tab(i+5)][colonne_sur_le_tab(j-2)]=='B')&&
        (tableaudynamique[ligne_sur_le_tab(i+6)][colonne_sur_le_tab(j-2)]=='B')&&(tableaudynamique[ligne_sur_le_tab(i+6)][colonne_sur_le_tab(j-1)]=='B')&&
        (tableaudynamique[ligne_sur_le_tab(i+6)][colonne_sur_le_tab(j)]=='B')&&(tableaudynamique[ligne_sur_le_tab(i+1)][colonne_sur_le_tab(j)]=='N')&&
        (tableaudynamique[ligne_sur_le_tab(i+1)][colonne_sur_le_tab(j-1)]=='N')&&(tableaudynamique[ligne_sur_le_tab(i+2)][colonne_sur_le_tab(j-1)]=='N')&&
        (tableaudynamique[ligne_sur_le_tab(i+2)][colonne_sur_le_tab(j-2)]=='N')&&(tableaudynamique[ligne_sur_le_tab(i+3)][colonne_sur_le_tab(j-2)]=='N')&&
        (tableaudynamique[ligne_sur_le_tab(i+4)][colonne_sur_le_tab(j-2)]=='N')&&(tableaudynamique[ligne_sur_le_tab(i+4)][colonne_sur_le_tab(j-1)]=='N')&&
        (tableaudynamique[ligne_sur_le_tab(i+5)][colonne_sur_le_tab(j-1)]=='N')&&(tableaudynamique[ligne_sur_le_tab(i+5)][colonne_sur_le_tab(j)]=='N')&&
        (tableaudynamique[ligne_sur_le_tab(i+2)][colonne_sur_le_tab(j)]=='|')&&(tableaudynamique[ligne_sur_le_tab(i+3)][colonne_sur_le_tab(j)]=='|')&&
        (tableaudynamique[ligne_sur_le_tab(i+4)][colonne_sur_le_tab(j)]=='|')&& (tableaudynamique[ligne_sur_le_tab(i+3)][colonne_sur_le_tab(j-1)]=='|'))
    {
        ligne=i+3;
        colonne=j;
    }

}

for(int i=1;i<=3;i++)
{
    int j=9;
    if ((tableaudynamique[ligne_sur_le_tab(i)][colonne_sur_le_tab(j)]=='B')&&(tableaudynamique[ligne_sur_le_tab(i)][colonne_sur_le_tab(j-1)]=='B')&&
        (tableaudynamique[ligne_sur_le_tab(i)][colonne_sur_le_tab(j-2)]=='B')&&(tableaudynamique[ligne_sur_le_tab(i+1)][colonne_sur_le_tab(j-2)]=='B')&&
        (tableaudynamique[ligne_sur_le_tab(i+1)][colonne_sur_le_tab(j-3)]=='B')&&(tableaudynamique[ligne_sur_le_tab(i+2)][colonne_sur_le_tab(j-3)]=='B')&&
        (tableaudynamique[ligne_sur_le_tab(i+3)][colonne_sur_le_tab(j-3)]=='B')&&(tableaudynamique[ligne_sur_le_tab(i+4)][colonne_sur_le_tab(j-3)]=='B')&&
        (tableaudynamique[ligne_sur_le_tab(i+5)][colonne_sur_le_tab(j-3)]=='B')&&(tableaudynamique[ligne_sur_le_tab(i+5)][colonne_sur_le_tab(j-2)]=='B')&&
        (tableaudynamique[ligne_sur_le_tab(i+6)][colonne_sur_le_tab(j-2)]=='B')&&(tableaudynamique[ligne_sur_le_tab(i+6)][colonne_sur_le_tab(j-1)]=='B')&&
        (tableaudynamique[ligne_sur_le_tab(i+6)][colonne_sur_le_tab(j)]=='B')&&(tableaudynamique[ligne_sur_le_tab(i+1)][colonne_sur_le_tab(j)]=='N')&&
        (tableaudynamique[ligne_sur_le_tab(i+1)][colonne_sur_le_tab(j-1)]=='N')&&(tableaudynamique[ligne_sur_le_tab(i+2)][colonne_sur_le_tab(j-1)]=='N')&&
        (tableaudynamique[ligne_sur_le_tab(i+2)][colonne_sur_le_tab(j-2)]=='N')&&(tableaudynamique[ligne_sur_le_tab(i+3)][colonne_sur_le_tab(j-2)]=='N')&&
        (tableaudynamique[ligne_sur_le_tab(i+4)][colonne_sur_le_tab(j-2)]=='N')&&(tableaudynamique[ligne_sur_le_tab(i+4)][colonne_sur_le_tab(j-1)]=='N')&&
        (tableaudynamique[ligne_sur_le_tab(i+5)][colonne_sur_le_tab(j-1)]=='N')&&(tableaudynamique[ligne_sur_le_tab(i+5)][colonne_sur_le_tab(j)]=='N')&&
        (tableaudynamique[ligne_sur_le_tab(i+2)][colonne_sur_le_tab(j)]=='|')&&(tableaudynamique[ligne_sur_le_tab(i+3)][colonne_sur_le_tab(j)]=='B')&&
        (tableaudynamique[ligne_sur_le_tab(i+4)][colonne_sur_le_tab(j)]=='|')&& (tableaudynamique[ligne_sur_le_tab(i+3)][colonne_sur_le_tab(j-1)]=='N'))
    {
        ligne=i+4;
        colonne=j;
    }

}

for(int i=1;i<=3;i++)
{
    int j=9;
    if ((tableaudynamique[ligne_sur_le_tab(i)][colonne_sur_le_tab(j)]=='B')&&(tableaudynamique[ligne_sur_le_tab(i)][colonne_sur_le_tab(j-1)]=='B')&&
        (tableaudynamique[ligne_sur_le_tab(i)][colonne_sur_le_tab(j-2)]=='B')&&(tableaudynamique[ligne_sur_le_tab(i+1)][colonne_sur_le_tab(j-2)]=='B')&&
        (tableaudynamique[ligne_sur_le_tab(i+1)][colonne_sur_le_tab(j-3)]=='B')&&(tableaudynamique[ligne_sur_le_tab(i+2)][colonne_sur_le_tab(j-3)]=='B')&&
        (tableaudynamique[ligne_sur_le_tab(i+3)][colonne_sur_le_tab(j-3)]=='B')&&(tableaudynamique[ligne_sur_le_tab(i+4)][colonne_sur_le_tab(j-3)]=='B')&&
        (tableaudynamique[ligne_sur_le_tab(i+5)][colonne_sur_le_tab(j-3)]=='B')&&(tableaudynamique[ligne_sur_le_tab(i+5)][colonne_sur_le_tab(j-2)]=='B')&&
        (tableaudynamique[ligne_sur_le_tab(i+6)][colonne_sur_le_tab(j-2)]=='B')&&(tableaudynamique[ligne_sur_le_tab(i+6)][colonne_sur_le_tab(j-1)]=='B')&&
        (tableaudynamique[ligne_sur_le_tab(i+6)][colonne_sur_le_tab(j)]=='B')&&(tableaudynamique[ligne_sur_le_tab(i+1)][colonne_sur_le_tab(j)]=='N')&&
        (tableaudynamique[ligne_sur_le_tab(i+1)][colonne_sur_le_tab(j-1)]=='N')&&(tableaudynamique[ligne_sur_le_tab(i+2)][colonne_sur_le_tab(j-1)]=='N')&&
        (tableaudynamique[ligne_sur_le_tab(i+2)][colonne_sur_le_tab(j-2)]=='N')&&(tableaudynamique[ligne_sur_le_tab(i+3)][colonne_sur_le_tab(j-2)]=='N')&&
        (tableaudynamique[ligne_sur_le_tab(i+4)][colonne_sur_le_tab(j-2)]=='N')&&(tableaudynamique[ligne_sur_le_tab(i+4)][colonne_sur_le_tab(j-1)]=='N')&&
        (tableaudynamique[ligne_sur_le_tab(i+5)][colonne_sur_le_tab(j-1)]=='N')&&(tableaudynamique[ligne_sur_le_tab(i+5)][colonne_sur_le_tab(j)]=='N')&&
        (tableaudynamique[ligne_sur_le_tab(i+2)][colonne_sur_le_tab(j)]=='N')&&(tableaudynamique[ligne_sur_le_tab(i+3)][colonne_sur_le_tab(j)]=='|')&&
        (tableaudynamique[ligne_sur_le_tab(i+4)][colonne_sur_le_tab(j)]=='|')&& (tableaudynamique[ligne_sur_le_tab(i+3)][colonne_sur_le_tab(j-1)]=='N'))
    {
        ligne=i+3;
        colonne=j;
    }

}
for(int i=1;i<=3;i++)
{
    int j=9;
    if ((tableaudynamique[ligne_sur_le_tab(i)][colonne_sur_le_tab(j)]=='B')&&(tableaudynamique[ligne_sur_le_tab(i)][colonne_sur_le_tab(j-1)]=='B')&&
        (tableaudynamique[ligne_sur_le_tab(i)][colonne_sur_le_tab(j-2)]=='B')&&(tableaudynamique[ligne_sur_le_tab(i+1)][colonne_sur_le_tab(j-2)]=='B')&&
        (tableaudynamique[ligne_sur_le_tab(i+1)][colonne_sur_le_tab(j-3)]=='B')&&(tableaudynamique[ligne_sur_le_tab(i+2)][colonne_sur_le_tab(j-3)]=='B')&&
        (tableaudynamique[ligne_sur_le_tab(i+3)][colonne_sur_le_tab(j-3)]=='B')&&(tableaudynamique[ligne_sur_le_tab(i+4)][colonne_sur_le_tab(j-3)]=='B')&&
        (tableaudynamique[ligne_sur_le_tab(i+5)][colonne_sur_le_tab(j-3)]=='B')&&(tableaudynamique[ligne_sur_le_tab(i+5)][colonne_sur_le_tab(j-2)]=='B')&&
        (tableaudynamique[ligne_sur_le_tab(i+6)][colonne_sur_le_tab(j-2)]=='B')&&(tableaudynamique[ligne_sur_le_tab(i+6)][colonne_sur_le_tab(j-1)]=='B')&&
        (tableaudynamique[ligne_sur_le_tab(i+6)][colonne_sur_le_tab(j)]=='B')&&(tableaudynamique[ligne_sur_le_tab(i+1)][colonne_sur_le_tab(j)]=='N')&&
        (tableaudynamique[ligne_sur_le_tab(i+1)][colonne_sur_le_tab(j-1)]=='N')&&(tableaudynamique[ligne_sur_le_tab(i+2)][colonne_sur_le_tab(j-1)]=='N')&&
        (tableaudynamique[ligne_sur_le_tab(i+2)][colonne_sur_le_tab(j-2)]=='N')&&(tableaudynamique[ligne_sur_le_tab(i+3)][colonne_sur_le_tab(j-2)]=='N')&&
        (tableaudynamique[ligne_sur_le_tab(i+4)][colonne_sur_le_tab(j-2)]=='N')&&(tableaudynamique[ligne_sur_le_tab(i+4)][colonne_sur_le_tab(j-1)]=='N')&&
        (tableaudynamique[ligne_sur_le_tab(i+5)][colonne_sur_le_tab(j-1)]=='N')&&(tableaudynamique[ligne_sur_le_tab(i+5)][colonne_sur_le_tab(j)]=='N')&&
        (tableaudynamique[ligne_sur_le_tab(i+2)][colonne_sur_le_tab(j)]=='N')&&(tableaudynamique[ligne_sur_le_tab(i+3)][colonne_sur_le_tab(j)]=='|')&&
        (tableaudynamique[ligne_sur_le_tab(i+4)][colonne_sur_le_tab(j)]=='N')&& (tableaudynamique[ligne_sur_le_tab(i+3)][colonne_sur_le_tab(j-1)]=='N'))
    {
        ligne=i+3 ;
        colonne=j;
    }

}

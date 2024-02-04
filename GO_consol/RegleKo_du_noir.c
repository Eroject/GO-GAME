//au milieu /au role du noir
for(int i=1;i<9;i++){
                        for(int j=1;j<9;j++){
                            interditB[i][j]=0;
                        }
                }
for(int li=1;li<10;li++)
    {
        for(int co=1;co<10;co++)
            {
                if((li-1>0)&&(co-1>0)&&(li+1<=9)&&(co+1<=9))
                    {
                            if ((tableaudynamique[ligne_sur_le_tab(li)][colonne_sur_le_tab(co-1)]=='N')&&
                                (tableaudynamique[ligne_sur_le_tab(li)][colonne_sur_le_tab(co)]=='B')&&
                                (tableaudynamique[ligne_sur_le_tab(li)][colonne_sur_le_tab(co+1)]=='N')&&
                                (tableaudynamique[ligne_sur_le_tab(li+1)][colonne_sur_le_tab(co)]=='N')&&
                                (tableaudynamique[ligne_sur_le_tab(li-1)][colonne_sur_le_tab(co)]=='N')&&
                                (tableaudynamique[ligne_sur_le_tab(li+1)][colonne_sur_le_tab(co+1)]=='B')&&
                                (tableaudynamique[ligne_sur_le_tab(li-1)][colonne_sur_le_tab(co+1)]=='B')&&
                                (tableaudynamique[ligne_sur_le_tab(li)][colonne_sur_le_tab(co+2)]=='B'))
                                    {
                                        supprimer_jeton(tableaudynamique,ligne_sur_le_tab(li),colonne_sur_le_tab(co));
                                        scoreNo++;
                                        interditB[li][co]=1;

                                    }
                            if ((tableaudynamique[ligne_sur_le_tab(li)][colonne_sur_le_tab(co-1)]=='B')&&
                                (tableaudynamique[ligne_sur_le_tab(li)][colonne_sur_le_tab(co)]=='N')&&
                                (tableaudynamique[ligne_sur_le_tab(li)][colonne_sur_le_tab(co+1)]=='B')&&
                                (tableaudynamique[ligne_sur_le_tab(li+1)][colonne_sur_le_tab(co)]=='B')&&
                                (tableaudynamique[ligne_sur_le_tab(li-1)][colonne_sur_le_tab(co)]=='B')&&
                                (tableaudynamique[ligne_sur_le_tab(li+1)][colonne_sur_le_tab(co+1)]=='N')&&
                                (tableaudynamique[ligne_sur_le_tab(li-1)][colonne_sur_le_tab(co+1)]=='N')&&
                                (tableaudynamique[ligne_sur_le_tab(li)][colonne_sur_le_tab(co+2)]=='N'))
                                    {
                                        supprimer_jeton(tableaudynamique,ligne_sur_le_tab(li),colonne_sur_le_tab(co+1));
                                        scoreNo++;
                                        interditB[li][co+1]=1;

                                    }
                    }
                    if(li>=2 && li<=7)
{
    if ((tableaudynamique[ligne_sur_le_tab(li)][colonne_sur_le_tab(co)]=='B') &&
            (tableaudynamique[ligne_sur_le_tab(li+1)][colonne_sur_le_tab(co+1)]=='B') &&
            (tableaudynamique[ligne_sur_le_tab(li+1)][colonne_sur_le_tab(co-1)]=='B') &&
            (tableaudynamique[ligne_sur_le_tab(li+2)][colonne_sur_le_tab(co)]=='B') &&
            (tableaudynamique[ligne_sur_le_tab(li-1)][colonne_sur_le_tab(co)]=='N') &&
            (tableaudynamique[ligne_sur_le_tab(li+1)][colonne_sur_le_tab(co)]=='N') &&
            (tableaudynamique[ligne_sur_le_tab(li)][colonne_sur_le_tab(co+1)]=='N') &&
            tableaudynamique[ligne_sur_le_tab(li)][colonne_sur_le_tab(co-1)]=='N')
            {
                 supprimer_jeton(tableaudynamique,ligne_sur_le_tab(li),colonne_sur_le_tab(co));
                                        scoreNo++;
                                        interditB[li][co]=1;
            }
             if ((tableaudynamique[ligne_sur_le_tab(li)][colonne_sur_le_tab(co)]=='N') &&
            (tableaudynamique[ligne_sur_le_tab(li+1)][colonne_sur_le_tab(co+1)]=='N') &&
            (tableaudynamique[ligne_sur_le_tab(li+1)][colonne_sur_le_tab(co-1)]=='N') &&
            (tableaudynamique[ligne_sur_le_tab(li+2)][colonne_sur_le_tab(co)]=='N') &&
            (tableaudynamique[ligne_sur_le_tab(li-1)][colonne_sur_le_tab(co)]=='B') &&
            (tableaudynamique[ligne_sur_le_tab(li+1)][colonne_sur_le_tab(co)]=='B') &&
            (tableaudynamique[ligne_sur_le_tab(li)][colonne_sur_le_tab(co+1)]=='B') &&
            tableaudynamique[ligne_sur_le_tab(li)][colonne_sur_le_tab(co-1)]=='B')
            {
                 supprimer_jeton(tableaudynamique,ligne_sur_le_tab(li+1),colonne_sur_le_tab(co));
                                        scoreNo++;
                                        interditB[li+1][co]=1;
            }
}
                if(co==1){
                            if ((tableaudynamique[ligne_sur_le_tab(li-1)][colonne_sur_le_tab(co)]=='N')&&
                                (tableaudynamique[ligne_sur_le_tab(li)][colonne_sur_le_tab(co)]=='B')&&
                                (tableaudynamique[ligne_sur_le_tab(li+1)][colonne_sur_le_tab(co)]=='N')&&
                                (tableaudynamique[ligne_sur_le_tab(li-1)][colonne_sur_le_tab(co+1)]=='B')&&
                                (tableaudynamique[ligne_sur_le_tab(li)][colonne_sur_le_tab(co+1)]=='N')&&
                                (tableaudynamique[ligne_sur_le_tab(li+1)][colonne_sur_le_tab(co+1)]=='B')&&
                                (tableaudynamique[ligne_sur_le_tab(li)][colonne_sur_le_tab(co+2)]=='B'))
                                    {
                                            supprimer_jeton(tableaudynamique,ligne_sur_le_tab(li),colonne_sur_le_tab(co));
                                            scoreNo++;
                                            interditB[li][co]=1;

                                    }

                            if ((tableaudynamique[ligne_sur_le_tab(li-1)][colonne_sur_le_tab(co)]=='B')&&
                                (tableaudynamique[ligne_sur_le_tab(li)][colonne_sur_le_tab(co)]=='N')&&
                                (tableaudynamique[ligne_sur_le_tab(li+1)][colonne_sur_le_tab(co)]=='B')&&
                                (tableaudynamique[ligne_sur_le_tab(li-1)][colonne_sur_le_tab(co+1)]=='N')&&
                                (tableaudynamique[ligne_sur_le_tab(li)][colonne_sur_le_tab(co+1)]=='B')&&
                                (tableaudynamique[ligne_sur_le_tab(li+1)][colonne_sur_le_tab(co+1)]=='N')&&
                                (tableaudynamique[ligne_sur_le_tab(li)][colonne_sur_le_tab(co+2)]=='N'))
                                    {
                                            supprimer_jeton(tableaudynamique,ligne_sur_le_tab(li),colonne_sur_le_tab(co+1));
                                            scoreNo++;
                                            interditB[li][co+1]=1;

                                    }

                            }
                if (co==9)
                    {
                        if (tableaudynamique[ligne_sur_le_tab(li-1)][colonne_sur_le_tab(co)]=='N'&&
                            tableaudynamique[ligne_sur_le_tab(li)][colonne_sur_le_tab(co)]=='B'&&
                            tableaudynamique[ligne_sur_le_tab(li+1)][colonne_sur_le_tab(co)]=='N'&&
                            tableaudynamique[ligne_sur_le_tab(li)][colonne_sur_le_tab(co-1)]=='N'&&
                            tableaudynamique[ligne_sur_le_tab(li-1)][colonne_sur_le_tab(co-1)]=='B'&&
                            tableaudynamique[ligne_sur_le_tab(li+1)][colonne_sur_le_tab(co-1)]=='B'&&
                            tableaudynamique[ligne_sur_le_tab(li)][colonne_sur_le_tab(co-2)]=='B')
                                {
                                        supprimer_jeton(tableaudynamique,ligne_sur_le_tab(li),colonne_sur_le_tab(co));
                                        scoreNo++;
                                        interditB[li][co]=1;

                                }
                        if ((tableaudynamique[ligne_sur_le_tab(li-1)][colonne_sur_le_tab(co)]=='B')&&
                            (tableaudynamique[ligne_sur_le_tab(li)][colonne_sur_le_tab(co)]=='N')&&
                            (tableaudynamique[ligne_sur_le_tab(li+1)][colonne_sur_le_tab(co)]=='B')&&
                            (tableaudynamique[ligne_sur_le_tab(li)][colonne_sur_le_tab(co-1)]=='B')&&
                            (tableaudynamique[ligne_sur_le_tab(li-1)][colonne_sur_le_tab(co-1)]=='N')&&
                            (tableaudynamique[ligne_sur_le_tab(li+1)][colonne_sur_le_tab(co-1)]=='N')&&
                            (tableaudynamique[ligne_sur_le_tab(li)][colonne_sur_le_tab(co-2)]=='N'))
                                {
                                        supprimer_jeton(tableaudynamique,ligne_sur_le_tab(li),colonne_sur_le_tab(co-1));
                                        scoreNo++;
                                        interditB[li][co-1]=1;

                                }
                    }
                 if (li==1)
                    { if ((tableaudynamique[ligne_sur_le_tab(li)][colonne_sur_le_tab(co+1)]=='N')&&
                            (tableaudynamique[ligne_sur_le_tab(li)][colonne_sur_le_tab(co)]=='B')&&
                            (tableaudynamique[ligne_sur_le_tab(li)][colonne_sur_le_tab(co-1)]=='N')&&
                            (tableaudynamique[ligne_sur_le_tab(li+1)][colonne_sur_le_tab(co)]=='N')&&
                            (tableaudynamique[ligne_sur_le_tab(li+1)][colonne_sur_le_tab(co+1)]=='B')&&
                            (tableaudynamique[ligne_sur_le_tab(li+1)][colonne_sur_le_tab(co-1)]=='B')&&
                            (tableaudynamique[ligne_sur_le_tab(li+2)][colonne_sur_le_tab(co)]=='B'))
                                {
                                        supprimer_jeton(tableaudynamique,ligne_sur_le_tab(li),colonne_sur_le_tab(co));
                                        scoreNo++;
                                        interditB[li][co]=1;


                                }
                        if ((tableaudynamique[ligne_sur_le_tab(li)][colonne_sur_le_tab(co+1)]=='B')&&
                            (tableaudynamique[ligne_sur_le_tab(li)][colonne_sur_le_tab(co)]=='N')&&
                            (tableaudynamique[ligne_sur_le_tab(li)][colonne_sur_le_tab(co-1)]=='B')&&
                            (tableaudynamique[ligne_sur_le_tab(li+1)][colonne_sur_le_tab(co)]=='B')&&
                            (tableaudynamique[ligne_sur_le_tab(li+1)][colonne_sur_le_tab(co+1)]=='N')&&
                            (tableaudynamique[ligne_sur_le_tab(li+1)][colonne_sur_le_tab(co-1)]=='N')&&
                            (tableaudynamique[ligne_sur_le_tab(li+2)][colonne_sur_le_tab(co)]=='N'))
                                {
                                        supprimer_jeton(tableaudynamique,ligne_sur_le_tab(li+1),colonne_sur_le_tab(co));
                                        scoreNo++;
                                        interditB[li+1][co]=1;


                                }
                    }
                    if (li==9)
                            {
                            if ((tableaudynamique[ligne_sur_le_tab(li)][colonne_sur_le_tab(co+1)]=='N')&&
                            (tableaudynamique[ligne_sur_le_tab(li)][colonne_sur_le_tab(co)]=='B')&&
                            (tableaudynamique[ligne_sur_le_tab(li)][colonne_sur_le_tab(co-1)]=='N')&&
                            (tableaudynamique[ligne_sur_le_tab(li-1)][colonne_sur_le_tab(co)]=='N')&&
                            (tableaudynamique[ligne_sur_le_tab(li-1)][colonne_sur_le_tab(co+1)]=='B')&&
                            (tableaudynamique[ligne_sur_le_tab(li-1)][colonne_sur_le_tab(co-1)]=='B')&&
                            (tableaudynamique[ligne_sur_le_tab(li-2)][colonne_sur_le_tab(co)]=='B'))
                                {
                                        supprimer_jeton(tableaudynamique,ligne_sur_le_tab(li),colonne_sur_le_tab(co));
                                        scoreNo++;
                                        interditB[li][co]=1;


                                }
                            if ((tableaudynamique[ligne_sur_le_tab(li)][colonne_sur_le_tab(co+1)]=='B')&&
                            (tableaudynamique[ligne_sur_le_tab(li)][colonne_sur_le_tab(co)]=='N')&&
                            (tableaudynamique[ligne_sur_le_tab(li)][colonne_sur_le_tab(co-1)]=='B')&&
                            (tableaudynamique[ligne_sur_le_tab(li-1)][colonne_sur_le_tab(co)]=='B')&&
                            (tableaudynamique[ligne_sur_le_tab(li-1)][colonne_sur_le_tab(co+1)]=='N')&&
                            (tableaudynamique[ligne_sur_le_tab(li-1)][colonne_sur_le_tab(co-1)]=='N')&&
                            (tableaudynamique[ligne_sur_le_tab(li-2)][colonne_sur_le_tab(co)]=='N'))
                                {
                                        supprimer_jeton(tableaudynamique,ligne_sur_le_tab(li-1),colonne_sur_le_tab(co));
                                        scoreNo++;
                                        interditB[li-1][co]=1;


                                }

                            }
            }
    }

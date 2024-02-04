    int *vides,*tab_du_pos_de_vide;
   int test_du_finN=0,test_du_finB=0,scoreNfin=0,scoreBfin=0;
    int  TabEstVide=1;
     for (int i=0;i<=9;i++){
        for (int j=0;j<=9;j++){
                if(tableaudynamique[ligne_sur_le_tab(i)][colonne_sur_le_tab(j)]=='B' | tableaudynamique[ligne_sur_le_tab(i)][colonne_sur_le_tab(j)]=='N')
                {
                    TabEstVide=0;
                }
            }
        }
   for (int i=0;i<=9;i++){
        for (int j=0;j<=9;j++){
       tab_p=malloc((45*13));
       tab_p=tableaudynamique;
        je=malloc(4);vides=malloc(4);
        tab_de_position_noires=malloc(4*45*13);
        tab_du_pos_de_vide=malloc(4*45*13);
        *(je)=0;*(vides)=0;
        for(int r=0;r<586;r++){*(tab_de_position_noires+r)=0;}
        for(int r=0;r<586;r++){*(tab_du_pos_de_vide+r)=0;}
        existe=malloc(4);
        *existe=0;
        test_du_finN=parcoursvidesN(tab_p,i,j,tab_de_position_noires,je,existe,tab_du_pos_de_vide,vides);

        if(test_du_finN==1)
            {
            tableaudynamique[ligne_sur_le_tab(i)][colonne_sur_le_tab(j)]='N';
            }

    }
}
   for (int i=1;i<=9;i++){
        for (int j=1;j<=9;j++){
        tab_p=malloc((45*13));
        tab_p=tableaudynamique;
        je=malloc(4);vides=malloc(4);
        tab_de_position_noires=malloc(4*45*13);
        tab_du_pos_de_vide=malloc(4*45*13);
        *(je)=0;*(vides)=0;
        for(int r=0;r<586;r++){*(tab_de_position_noires+r)=0;}
        for(int r=0;r<586;r++){*(tab_du_pos_de_vide+r)=0;}
        existe=malloc(4);
        *existe=0;
            test_du_finB=parcoursvidesB(tab_p,i,j,tab_de_position_noires,je,existe,tab_du_pos_de_vide,vides);

        if(test_du_finB==1)
            {
            tableaudynamique[ligne_sur_le_tab(i)][colonne_sur_le_tab(j)]='B';
            }
        }
    }
    //    PrintTabDynamique(tableaudynamique);

 for (int i=0;i<=9;i++){
        for (int j=0;j<=9;j++){

    if(tableaudynamique[ligne_sur_le_tab(i)][colonne_sur_le_tab(j)]=='N')
        { scoreNfin++;}}}
        for (int i=0;i<=9;i++){
        for (int j=0;j<=9;j++){

    if(tableaudynamique[ligne_sur_le_tab(i)][colonne_sur_le_tab(j)]=='B')
        { scoreBfin++;}}}
        scoreBa=scoreBa+scoreBfin;
        scoreNo=scoreNo+scoreNfin;

                if (TabEstVide==1){scoreBa=scoreNo;}


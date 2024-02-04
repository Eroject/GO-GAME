
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
        exist=malloc(4);
        *exist=0;




    tab_p=malloc((45*13));
    tab_p=tableaudynamique;
 chainN[586];
k=0;
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
            //tableau du chaine de taille 81 ou va stocker position et nbre des jeton capture et vides+ creer fct max
                        t=parcoursfinal(tab_p,i,j,tab_de_position_capture,capture,exist,tab_du_pos_de_vide,vides,0,'N');
chainN[k].nbr_de_vide=t;
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
}for(int k=0;k<81;k++){
        if(chainN[k].nbr_de_vide==1)//parfois la defense impose un coup mais il sera annuler parcoup inderdit donc si il est interdit quatre fois la defense sera pas appliqué la cinquieme fois grace à m
          { coupN=k;
            colonne=get_colo((chainN[coupN].position_de_vide[0]));
            ligne=get_li((chainN[coupN].position_de_vide[0]));

        }

            }

            k=0;

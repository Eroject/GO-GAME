#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <windows.h>
#include <time.h>
#include "menus_statiques.h"
#include "fonctions.c"

int main(){
    char num_char[1000],num_choix_au_menu_principale_char[1000];
    int ligne,colonne,num, num_choix_au_menu_principale=0;
    accueil();
    debut:
    num_choix_au_menu_principale=MenuPrincipale();
    if(num_choix_au_menu_principale==1){
        menu_pr_de_stabilite_1:
        num=menu_principal_1();
        if (num==3){goto debut;}
        if (num==4){exit(1);}
        if (MenuJouerUnePartie(num)==0){goto menu_pr_de_stabilite_1;}
   }
    if(num_choix_au_menu_principale==2){
            int test1;// La variable test pour permettre chaque fois dans les menus 3 , 4 et 2 de revenir au menu principale.
            test1=MenuSavoirPlus();
            if(test1==1){
                    system("cls");
                     goto debut;
                     }
    }
    if(num_choix_au_menu_principale==3){
            int test2;
            test2=ConsulterVosData();
            if(test2==1){
                  system("cls");
                    goto debut;}
    }
    if(num_choix_au_menu_principale==4){
            int test3;
            red();
            printf("\n\t\t\t\t");
            printf("N'hesitez pas de revenir plus tard,on vous attend :) \n ");
            green();
    }
   return 0;
   }

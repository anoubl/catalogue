#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct catalogue
{
char nom[10];
char id[10];
char emplacement[10];
char etat[10];
}catalogue;
catalogue e[100];
int i=0,n,j=0;
void affiche (char nomi [10]){
printf("les fichier de %s:",nomi);
for (i=0;i<n;i++){
if (strcmp(e[i].nom,nomi)==0){
printf("\n%s",e[i].id);
}
}
}
ajout(char id[10],char nom[10],char etat[10])
{
   char ch[2]="@";
    n++;
    if(n!=100)
    {
      strcpy(e[j].id,id);
           strcpy(e[j].etat,etat);
      strcpy(e[j].nom,nom);
      strcat(ch,e[j].nom);
      strcpy(e[j].emplacement,ch);
      j++;
}
}
int recherche(char nom[10])
{
for(i=0;i<n;i++)
{
if(strcmp(e[i].nom,nom)==0)
{
return 1;
}
}
return 0;
}
void suppression(char nom[10])
{
int x;
for(i=0;i<n;i++)
{
if(strcmp(e[i].nom,nom)==0)
{
x=i;
for(i=x;i<n;i++)
{
e[i]=e[i+1];
    n--;
}
}
}
}
void changer(char id[10],char nom[10])
{
char ch[2]="@";
for(i=0;i<n;i++)
{
if(strcmp(id,e[i].id)==0)
{
strcpy(e[i].nom,nom);
strcat(ch,e[i].nom);
       strcpy(e[i].emplacement,ch);
}
}
}
void retrait(char nom[10])
{
for(i=0;i<n;i++)
{
if(strcmp(e[i].nom,nom)==0)
{
if(strcmp(e[i].etat,"public")==0)
{
strcpy(e[i].etat,"prive");
}
}
}
}
void partage(char nom[])
{
for(i=0;i<n;i++)
{
if(strcmp(e[i].nom,nom)==0)
{
if(strcmp(e[i].etat,"prive")==0)
{
strcpy(e[i].etat,"public");
}
}
}
}
main()
{
int k;
char id[10],nom[10],etat[10],nom1[10];
char x[10],nom2[10],y[10],z[10],nom4[10],nom5[10],nom6[10];
int choix;
do
{
printf("\n\t\ttaper 1 pour ajouter\n");
printf("\n\t\ttaper 2 pour rechercher\n");
printf("\n\t\ttaper 3 pour supprimer\n");
printf("\n\t\ttaper 4 pour modifier le nom de fichier\n");
printf("\n\t\ttaper 5 pour le partage d'un fichier \n");
printf("\n\t\ttaper 6 pour retrait du partage\n");
printf("\n\t\ttaper 7 pour les fichier d'un utulisateur\n");
printf("\n\t\ttaper 8 pour Quitter le programme\n");
scanf("%d",&choix);
switch(choix)
{
case 1 :
printf("donner nombre de fichier ajouter:");
scanf("%d",&k);
for(i=0;i<k;i++)
{
printf("donner id:");
scanf("%s",id);
printf("donner le nom:");
scanf("%s",nom);
printf("donner l'etat:");
scanf("%s",etat);
ajout(id,nom,etat);
}
break;
case 2 :
printf("\ndonner le nom de fichier rechercher :");
scanf("%s",nom1);
if(recherche(nom1)==1)
{
printf("\nFichier exixte");
}
else
{
printf("\nFichier n'exixte pas");
}
break;
case 3 :
printf("\ndonner le nom de fichier supprimer:");
scanf("%s",nom2);
suppression(nom2);
break;
           case 4 :
            printf("donner id de fichier:");
            scanf("%s",x);
            printf("donner nouveau nom:");
            scanf("%s",y);
            changer(x,y);
            break;
case 5 :
printf("donner le nom du fichier :");
scanf("%s",nom5);
partage(nom5);
break;
case 6:
printf("donner le nom du fichier:");
scanf("%s",nom4);
retrait(nom4);
break;
case 7 :
printf("donner le nom");
scanf("%s",nom6);
affiche(nom6);break;
case 8 :printf("\n\t\tProgramme Quitter!!!");
default:printf("choix invalide");
           break;
}
}while(choix!=8);
}

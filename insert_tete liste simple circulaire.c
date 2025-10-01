#include<stdio.h>
#include<stdlib.h>
typedef struct noeud{
    int val;
    struct noeud* suiv;
}noeud;
noeud* liste = NULL;


noeud* insert_tete(int valeur) {
    noeud* nouveau = (noeud*)malloc(sizeof(noeud));
    nouveau->val = valeur;
    if (liste == NULL) {
        nouveau->suiv = nouveau;
        liste = nouveau;
	}else {
		noeud* p=liste;
		while(p->suiv!=liste){
			p=p->suiv;
		}
		p->suiv=nouveau;
        nouveau->suiv = liste;
		liste=nouveau;       
    }
    return liste;
}
void afficherListe( noeud* liste){
    if (liste==NULL)
    {
        printf("liste vide\n");
    }else{
    	noeud* p=liste;
        while (p->suiv!=liste)
        {
            printf("%d ;",p->val);
            p=p->suiv;
        }
        printf("%d",p->val);
    }
    
}
int main(){
    int n,valeur,i;
    printf("combien de valeur voulez-vous entrer??\n");
    fflush(stdout);
    scanf("%d",&n); 
    for(i=0;i<n;i++){   
        printf("Entrez une valeur:\n");
        scanf("%d",&valeur);
        liste=insert_tete(valeur);
    }
    printf("votre liste est:  ");
    afficherListe(liste);
    return 0;

}
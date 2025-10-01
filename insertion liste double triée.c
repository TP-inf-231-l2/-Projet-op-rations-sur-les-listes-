#include<stdio.h>
#include<stdlib.h>
typedef struct noeud{
    int val;
    struct noeud* pred;
    struct noeud* suiv;
}noeud;

noeud* insertion_tri(noeud* liste, int val) {
    noeud* nouveau=(noeud*)malloc(sizeof(noeud));
    noeud*p=liste;
	if (nouveau==NULL)
    {
        printf("erreur d allocation\n");
        return liste;
    }
    nouveau->val=val;
    if (liste == NULL || val < liste->val) {
        nouveau->suiv = liste;
        nouveau->pred=NULL;
        return nouveau;
    }
    noeud* courant = liste;
    while (courant->suiv != NULL && courant->suiv->val < val) {
        courant = courant->suiv;
    }

    nouveau->suiv = courant->suiv;
    nouveau->pred=courant;
    courant->suiv = nouveau;
    courant->suiv->pred= nouveau;
	return liste;
}
int afficherListe(noeud* liste){
    noeud* p=liste;
	while(p!=NULL){
		printf("%d ->",p->val);
		p=p->suiv;
	}
	printf("NULL\n");
}
int main(){
    int n,valeur,i;
    noeud* liste=NULL;
    printf("combien de valeur voulez-vous entrer??\n");
    fflush(stdout);
    scanf("%d",&n);
    for(i=0;i<n;i++){   
        printf("Entrez une valeur:\n");
        scanf("%d",&valeur);
        liste=insertion_tri(liste,valeur);
    }
    printf("votre liste est: "); 
    afficherListe(liste);

}
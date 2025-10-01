#include<stdio.h>
#include<stdlib.h>
typedef struct noeud{
    int val;
    struct noeud* suiv;
}noeud;
noeud* insert_tete(noeud* liste,int valeur){
    noeud* nouveau=(noeud*)malloc(sizeof(*nouveau));
    if (nouveau==NULL)
    {
        printf("erreur d allocation\n");
        return NULL;
    }
    nouveau->val=valeur;
    nouveau->suiv=liste;
    liste=nouveau;
    return liste;
    
}
void afficherListe(noeud* liste){
    if (liste==NULL)
    {
        printf("liste vide\n");
    }else{
        while (liste!=NULL)
        {
            printf("%d ;",liste->val);
            liste=liste->suiv;
        }
	}
}
noeud* suppOcc(noeud* liste,int valeur){   
        noeud *p=liste,*temp;
		while(liste && liste->val==valeur){
        	temp=liste;
        	liste=liste->suiv;
        	free(temp);
        	p=liste;
		}    
		while(p&&p->suiv){
			if(p->suiv->val==valeur){
				temp=p->suiv;
				p->suiv=temp->suiv;
				free(temp);
			}else{
				p=p->suiv;
			}
		}
		return liste;

}
int main(){
    int n,valeur,i;
    noeud* liste=NULL;
    printf("combien de valeur voulez-vous entrer??\n");
    fflush(stdout);
    scanf("%d",&n);
    for(i=0;i<n;i++){   
        printf("Entrez une valeur:\n");
        fflush(stdout);
        scanf("%d",&valeur);
        liste=insert_tete(liste,valeur);
    }
    afficherListe(liste);
    printf("entrez la valeur à éliminer: ");
    fflush(stdout);
    scanf("%d",&valeur);
   
    suppOcc( liste, valeur);
    printf("\n");     
    printf("votre liste est: ");
	afficherListe(liste); 
}

#include <stdio.h>

int main()
{
    char scelta, A, B ;
    char nome [50];
    int punteggio = 0;
    printf("Benvenuto nel quiz epicode\n");
    printf("Dovrai rispondere nella maniera corretta alle domande\n");
     do {
         printf("Scegli tra le due opzioni \n");
         printf(" A -> Inizia una nuova partita\n");
         printf(" B-> Esci dal gioco \n");
         scanf("%c", &scelta);
          
            switch(scelta) {
               case 'A':
               case 'a':
               printf("Come ti chiami?\n");
               scanf("%s", nome);
               
               punteggio = 0;
               
                 // inizio delle domande
                 printf("Domanda numero 1\n");
                 printf("Quante regioni ha l'italia?\n");
                 printf("1=20\n2=21\n3=22\n");
                 int rispostagiusta1;
                 scanf("%d", &rispostagiusta1);
                  if (rispostagiusta1 == 1) {
                      punteggio ++; 
                      
                  }
                      
                 printf("Domanda numero 2\n");
                 printf("Quante dita hai in una mano?\n");
                 printf("4=una\n5=quattro\n6=cinque\n");
                 int rispostagiusta2;
                 scanf("%d", &rispostagiusta2);
                 if (rispostagiusta2 == 6);{
                      punteggio ++; 
                     
                 }
                      
                    // calcolo punteggio  
                      printf("\n%s, il tuo punteggio finale è: %d\n", nome, punteggio);
                break;
                
                //Riinizia
                case 'B':
                case 'b':
                printf("Non puoi proseguire!\n");
                break;
                 
                default:
                printf("errore\n");
            
            } 
        } while (scelta != 'B' && scelta != 'b');
     
    return 0;
}
#include<stdio.h>

int main () {
 
  int Jahre;
  
  printf("Geben sie die Anzahl der Jahre ein: ");
  scanf("%d", &Jahre);
  
  int i = 0;
  float Zins = 0.045;
    
  float Betrag;
  
  printf("Geben sie ihren Betrag ein: ");
  scanf("%f", &Betrag);
  
  float n;
  n = Betrag * Zins;
  
  int Jahr = 1;
  
    if (Betrag >= 0 && Jahre >= 0) { 
  
      for(i=0;i<=Jahre;i++){
   
        Betrag = Betrag + n;
    
        printf("Der Betrag beträgt in Jahr %d %f €\n", Jahr, Betrag);
        Jahr++;
    
      }
    }else{
      printf("Ungültige Eingabe");
  }
  
}

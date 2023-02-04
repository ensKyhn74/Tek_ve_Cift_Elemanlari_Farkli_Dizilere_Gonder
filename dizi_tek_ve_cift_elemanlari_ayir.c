#include <stdio.h>
// n elemanlı dizinin tek elemanlarını farklı diziye çift elemanlarını farklı diziye gönder

int main() 

{
 
 int n;
 int TekSayac = 0 , CiftSayac = 0;
 
 printf("dizinin eleman sayisini girin: ");
 scanf("%d",&n);
 printf("\n");
 
 int dizi[n];
 int TekDizi[n] , CiftDizi[n];
 int i;    
 
 for(i = 0 ; i < n ; i++)
 {
  printf("dizi[%d]: ",i);
  scanf("%d",&dizi[i]);
 }
 
 for(i = 0 ; i < n ; i++)
 {
  if(dizi[i] % 2 == 1)
  {
   TekDizi[TekSayac] = dizi[i];
   TekSayac++;
  }
  
  else
  {
   CiftDizi[CiftSayac] = dizi[i];
   CiftSayac++;
  }
 }
 printf("\n");
 
 for(i = 0 ; i < TekSayac ; i++)
 {
   printf("TekDizi[%d]: %d\n",i,TekDizi[i]); 
 }
 printf("\n");
 
 for(i = 0 ; i < CiftSayac ; i++)
 {
   printf("CiftDizi[%d]: %d\n",i,CiftDizi[i]);
 }
 
 return 0;
  
}
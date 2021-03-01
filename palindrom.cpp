#include <stdio.h>
#include <conio.h>
#include <string.h>
 
int main()
{
   char a[100], b[100];
   
   printf("---Menentukan Kata Polindrom---\n");
   printf("\nKetikkan kata sembarang : ");gets(a);
 
   strcpy(b,a);
   strrev(b);
 
   if(strcmp(a,b)== 0)
      printf("\nKata '%s' merupakan kata polindrom\n", &a);
   else
      printf("\nKata '%s' bukan merupakan kata polindrom\n", &a);
 
   getch();
}




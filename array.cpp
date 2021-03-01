#include <stdio.h>
#include <string.h>

int main(void){
  char arr[255], temp[255];
  char *p_arr;
  int pjg_kalimat, i, indeks_akhir;

  printf("\nPENSIT");
  scanf("%[^\n]", arr);

    printf("TISNEP ");
   

    /* Menghitung panjang kalimat */
    pjg_kalimat = strlen(arr);
    indeks_akhir = pjg_kalimat;

    strcpy(temp, arr);

    for(i=0; i<pjg_kalimat; i++){
      p_arr = &arr[i];
      *p_arr = temp[--indeks_akhir]; 

      printf("%c", arr[i]);
    }

    printf("\n\n");

  return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main ()
{
// KAMUS
int a = 0;
int b = 0;
int pilihan;

// ALGORITMA
while (b!=4){
    printf("Program akan berakhir apabila terdapat ceret berisi 4 liter \n");
    printf("Ceret A : %d", a);
    printf("\nCeret B : %d", b);
    printf("\nPilih intruksi");
    printf("\n1. Isi A");
    printf("\n2. Isi B \n");
    printf("3. Kosongkan ceret A \n");
    printf("4. Kosongkan ceret B \n");
    printf("5. Tuang isi ceret A liter ke ceret B \n");
    printf("6. Tuang isi ceret B liter ke ceret A \n");
    printf("Masukkan intruksi yang dipilih : ");
    scanf("%d", &pilihan);

    if (pilihan==1) a = 3;
    else if (pilihan==2) b = 5;
    else if (pilihan==3) {
        a = 0;} //kosongkan ceret 3 liter
    else if (pilihan==4) {
        b = 0;} //kosongkan ceret 5 liter
    else if (pilihan==5) {
        //tuang isi ceret 3 liter ke 5 liter
        if (a + b > 5) {
            a= a - (5 - b); // ceret 3 liter dikurangi banyaknya ceret 3 liter yang dituang ke ceret 5 liter
            b = 5;  } // ceret 5 penuh
        else {  //a+b<=5
            b= a + b;
            a= 0;}
    }
    else if (pilihan==6) {
        //tuang isi ceret 5 liter ke ceret 3 liter
        if (a  + b > 3) {
            b=b-(3-a); //ceret 5 liter dikurangi banyaknya ceret 5 liter yang dituang ke ceret 3 liter
            a=3; }//ceret 3 liter penuh
        else { //a+b<=3
            a=a+b;
            b=0; } //ceret 5 liter kosong/ dituang seluruhnya ke ceret 3 
    }

}
if(b==4) {printf("Selamat anda telah menyelesaikan masalah\n");
    printf("Ceret A : %d", a);
    printf("\nCeret B : %d", b);}
    return 0;
}

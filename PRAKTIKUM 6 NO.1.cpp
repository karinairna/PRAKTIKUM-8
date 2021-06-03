//--------------------------//
//Nama  : Karina Irna Della
//Prodi : Manajemen Informatika
//Kelas : 2020B
//NIM   : 20051397030
//--------------------------//


#include <stdio.h>
#include <stdlib.h>
void urutan(i);
int main()
{
 int n;
 printf("Input n : ");scanf("%d", &n);
 urutan(n);
 return 0;
}
void urutan(int i){
 printf("%d\n", i);
 if(i==0)
 return;
 urutan(i-1);
}

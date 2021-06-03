//--------------------------//
//Nama  : Karina Irna Della
//Prodi : Manajemen Informatika
//Kelas : 2020B
//NIM   : 20051397030
//--------------------------//

#include <stdio.h>
#include <stdlib.h>
void urutan(n);
int main()
{
 int n, x=0;
 printf("Input n : ");scanf("%d", &n);
 urutan(x, n);
 return 0;
}
void urutan(int x,int n){
 printf("%d\n", x);
 if(x==n)
 return;
 urutan(x+1,n);
}

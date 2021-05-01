//--------------------------//
//Nama  : Karina Irna Della
//Prodi : Manajemen Informatika
//Kelas : 2020B
//NIM   : 20051397030
//--------------------------//


#include <stdio.h>
#include <stdlib.h>
#define MAX 10
int Data[MAX];
void Tukar (int *a, int *b){
int temp;
temp = *a;
*a = *b;
*b = temp;
}
void ShellSort(){
int Jarak, i, j, c=0;
bool Sudah;
Jarak = MAX;
while(Jarak > 1){
Jarak = Jarak / 2;
Sudah = false;
while(!Sudah){
Sudah = true;
for(j=0; j<MAX-Jarak; j++){
i = j + Jarak;
if(Data[j] > Data[i]){
Tukar(&Data[j], &Data[i]);
Sudah = false;
c++;
printf("\nLiterasi %d : ",c);
for(i=0; i<MAX; i++){
printf("%d ", Data[i]);
}
}
}
}
}
printf("\nBanyak pertukaran = %d",c);
} 
int main(){
int i;
srand(0);
printf("DATA SEBELUM TERURUT\n");
for(i=0; i<MAX; i++){
Data[i] = (int) rand()/1000+1;
printf("%d ", Data[i]);
}
ShellSort();
printf("\nDATA SETELAH TERURUT\n");
for(i=0; i<MAX; i++){
printf("%d ", Data[i]);
}
}


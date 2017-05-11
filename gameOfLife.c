#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>


int randomGen(){
 
   int num;
   num = (rand()%2); 
   return num; 
 }

 
int main(void){
  int gen;
  int go;
  int i;
  int j;
  int sum;
  double as1[11][38];
  char print[11][38];
  double as2[11][38];
  char   v;
  int    stat;
  int    surround;
//fills the array
  for( i=0; i<11; i++){
    for (j=0; j<36; j++){
   
         as1[i][j]= 0.00;     
   }}
as1[4][1]=1.00;
as1[5][1]=1.00;
as1[4][2]=1.00;
as1[5][2]=1.00;
as1[3][11]=1.00;
as1[4][11]=1.00;
as1[5][11]=1.00;
as1[2][12]=1.00;
as1[6][12]=1.00;
as1[7][13]=1.00;
as1[1][13]=1.00;
as1[1][14]=1.00;
as1[7][14]=1.00;
as1[4][15]=1.00;
as1[2][16]=1.00;
as1[6][16]=1.00;
as1[3][17]=1.00;
as1[4][17]=1.00;
as1[5][17]=1.00;
as1[4][18]=1.00;
as1[5][22]=1.00;
as1[6][22]=1.00;
as1[7][22]=1.00;
as1[4][23]=1.00;
as1[8][23]=1.00;
as1[8][25]=1.00;
as1[18][25]=1.00;
as1[4][25]=1.00;
as1[3][25]=1.00;
as1[6][34]=1.00;
as1[6][33]=1.00;
as1[7][33]=1.00;
as1[7][34]=1.00;

//kills the edges
for(i=0; i<11; i++){
   for(j=0; j<38; j++){
      if(j==0||i==0||j==37||i==10){
        as1[i][j]=0.00;}}}
//fills the char array
for( i=0; i<11; i++){
       for (j=0; j<36; j++){
          if(as2[i][j]==1){
             print[i][j]='*';}
          if (as2[i][j]==0){ 
              print[i][j]='_';                  
          }
         
   }}
//pritns the char array
for( i=0; i<11; i++){
       printf(" \n");
       for (j=0; j<38; j++){
         
           printf(" %c ", print[i][j]);
           }
       printf(" \n");
   }

for(go=0; go<1200;go++){
gen=0;




//the rules
for(i=0; i<11; i++){
   for(j=0; j<38; j++){
       stat=0;
       surround=0;
       if(as1[i][j]==1.00){
          stat=1;}
       if(as1[i][j]==0.00){
          stat=0;}
       if(as1[i][j+1]==1.00){
          surround=surround+1;}
       if(as1[i+1][j]==1.00){
          surround=surround+1;}
       if(as1[i+1][j+1]==1.00){
          surround=surround+1;}
       if(as1[i-1][j]==1.00){
          surround=surround+1;}
       if(as1[i-1][j-1]==1.00){
          surround=surround+1;}
       if(as1[i][j-1]==1.00){
          surround=surround+1;}
       if(as1[i-1][j+1]==1.00){
          surround=surround+1;}
       if(as1[i+1][j-1]==1.00){
          surround=surround+1;}
       if((surround==0 || surround==1) && (stat==1)){
          as2[i][j]=0.00;}
       if((surround>3) && (stat==1)){
          as2[i][j]=0.00;}
       if((surround==3) || (surround==2 && stat==1)){
          as2[i][j]=1.00;}
       if((surround==3) && (stat==0)){
          as2[i][j]=1.00;}
  }}
//kills the edges
for(i=0; i<11; i++){
   for(j=0; j<38; j++){
      if(j==0||i==0||j==37||i==10){
        as1[i][j]=0.00;}}}
//fills the char array
for( i=0; i<11; i++){
       for (j=0; j<36; j++){
          if(as2[i][j]==1){
             print[i][j]='*';}
          if (as2[i][j]==0){ 
              print[i][j]='_';                  
          }
         
   }}
//pritns the char array
for( i=0; i<11; i++){
       printf(" \n");
       for (j=0; j<38; j++){
         
           printf(" %c ", print[i][j]);
           }
       printf(" \n");
   }
//moves the as2 to as1
  for( i=0; i<11; i++){
    for (j=0; j<38; j++){
         as1[i][j]= as2[i][j];       
   }}
printf("\nif you would like it to compute the next genration and print it enter 1\n");
scanf("%d", &gen);
if (gen==1){

}

   }

  

return 0;
}


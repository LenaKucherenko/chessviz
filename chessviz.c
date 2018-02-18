#include <stdio.h>

int main(){
int i,j;

for(i=1; i<=8; i++){
printf("\n");

for(j=1; j<=8; j++){

if(i%2==1){

if(j%2==1){
printf("*");
}
else{
printf("$");
}
}
else{
if(j%2==1){
printf("$");
}
else{
printf("*");
}
}
}
}
}



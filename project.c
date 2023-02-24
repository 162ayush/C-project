#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
srand(time(0));
int number= rand()%100; 
int guess;
int attempt =1;
for(int i=0;i<10;i++){
do {
    printf("guess the number between 1 to 100\n");
    scanf("%d",&guess);
    if (guess>number){
        printf("please guess lower number\n");
    }
    else if(number>guess){
        printf("please guess higher number\n");
    }
    else{
        if (attempt==1){
            printf("wohh! its great\n you had done in 1 attempt\n");
            }
            
       else{
        printf("congratulation  correct number after %d attempts :\n",attempt);
       }
        
    }
    attempt++;
}

while(number!=guess);
 
printf("\nWELCOME TO NEW GAME\n");
if(i==9){
    printf("OHH! YOU HAD PLAYED ENOUGH TIMES");
}
}

return 0;
}

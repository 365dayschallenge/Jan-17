#include <stdio.h>

int myevenNumber();

int main(){
    int x;
    int y;
    printf("Enter the values of x and y respectively:\n");
    scanf("%d",&x);
    scanf("%d",&y);
    printf("\n");
    myevenNumber(x,y);

    return 0;
}
int myevenNumber(int x, int y){
    int i;
    for(i =x+1; i< y; i++){
        if(i%2 == 0){
            printf("%d\n",i);
        }
    }
}

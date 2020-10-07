//  https://www.hackerrank.com/challenges/compare-the-triplets/problem

#include<stdio.h>

int main(){

    int alice[3],bob[3];
    int sumAlice=0,sumBob=0; //initialization

    for(int i=0;i<3;i++){
        scanf("%d",&alice[i]); //input
    }

    for(int i=0;i<3;i++){
        scanf("%d",&bob[i]); //input
    }

    for(int i=0;i<3;i++){
        if(alice[i]> bob[i]){ //comparison
            sumAlice++;
        }
        else if(bob[i] > alice[i]){
            sumBob++;
        }
    }
    printf("%d %d",sumAlice,sumBob );
}

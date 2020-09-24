#include<stdio.h>

void hanoi(int n, char from, char by, char to){
    if(n==1)    printf("원판 1개를 %c에서 %c로 올긴다.\n",from,to);
    else{
        hanoi(n-1, from, to, by);
        printf("원팔 %d를 %c에서 %c로 옯긴다.\n", n, from, to);
        hanoi(n-1, by, from, to);
    }
}

int main(){
    hanoi(5,'A','B','C');
    return 0;
}

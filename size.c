#include<stdio.h>
#include<stdlib.h>

void main() 
{
    int **x;    // 이중 포인터 변수 x 선언

    printf("------ [김예진] [2022041035] ------\n\n");
    printf("sizeof(x) = %lu\n", sizeof(x));     // x 포인터 변수의 크기 출력
    printf("sizeof(*x) = %lu\n", sizeof(*x));   // x가 가리키는 포인터 변수의 크기 출력
    printf("sizeof(**x) = %lu\n", sizeof(**x)); // x가 가리키는 포인터 변수가 가리키는 변수의 크기 출력
}

#include <stdio.h> 
#include <stdlib.h>

void main() 
{

    printf("------ [김예진] [2022041035] ------\n\n");

    int list[5]; //크기가 5인 int형 배열 list 선언
    int *plist[5]; //크기가 5인 int형 포인터 배열 plist 선언

    list[0] = 10; //list 배열의 첫 번째 항목에 10이 할당됨
    list[1] = 11; //lisr 배열의 두 번쨰 항목에 11이 할당됨

    plist[0] = (int*)malloc(sizeof(int)); //plist 배열을 Heap영역에 동적으로 메모리를 할당함
    
    printf("list[0] \t= %d\n", list[0]); //list 배열의 첫 번째 항목의 값이 출력됨
    printf("list \t\t= %p\n", list); //list 배열의 시작 주소 값이 출력됨
    printf("&list[0] \t= %p\n", &list[0]); //list 배열의 시작 주소 값이 출력됨
    printf("list + 0 \t= %p\n", list+0); //list 배열의 시작 주소 값이 출력됨
    printf("list + 1 \t= %p\n", list+1); //list 배열의 두 번째 항목의 주소 값이 출력됨
    printf("list + 2 \t= %p\n", list+2); //list 배열의 세 번째 항목의 주소 값이 출력됨
    printf("list + 3 \t= %p\n", list+3); //list 배열의 네 번째 항목의 주소 값이 출력됨
    printf("list + 4 \t= %p\n", list+4); //list 배열의 다섯 번째 항목의 주소 값이 출력됨
    printf("&list[4] \t= %p\n", &list[4]); //list 배열의 다섯 번째 항목의 주소 값이 출력됨

    free(plist[0]); //할당된 메모리를 해제 시켜줌
}
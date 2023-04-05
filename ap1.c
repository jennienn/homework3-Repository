#include <stdio.h>
#include <stdlib.h>

void main() {

    printf("------ [김예진] [2022041035] ------\n\n");

    int list[5]; //크기가 5인 int형 배열 list 선언
    int *plist[5] = {NULL,}; //크기가 5인 int형 포인터 배열 plist 선언 및 모든 요소 NULL로 초기화
    
    
    plist[0] = (int *)malloc(sizeof(int)); //plist 배열의 첫 번째 항목에 Heap 영역에 int형의 크기만큼 동적 메모리 할당
    
    list[0] = 1; //list 배열의 첫 번째 항목에 1이 할당됨
    list[1] = 100; //list 배열의 두 번째 항목에 100이 할당됨
     
    *plist[0] = 200; //plist 배열의 첫 번째 항목이 가리키는 메모리 공간에 200 할당
    
    printf("list[0]   = %d\n", list[0]); //list 배열의 첫 번째 항목의 값이 출력됨
    printf("&list[0]  = %p\n", &list[0]); //list 배열의 첫 번째 항목의 주소값이 출력됨
    printf("list      = %p\n", list); //list 배열의 시작 주소 값이 출력됨
    printf("&list     = %p\n", &list); //list 배열의 시작 주소 값이 출력됨
    
    printf("----------------------------------------\n\n");
    printf("list[1]   = %d\n", list[1]); //list 배열의 두 번째 항목의 값이 출력됨
    printf("&list[1]  = %p\n", &list[1]); //list 배열의 두 번째 항목의 주소값이 출력됨
    printf("*(list+1) = %d\n", *(list + 1)); //list 배열의 두 번째 항목의 값이 출력됨
    printf("list+1    = %p\n", list+1); //list 배열의 두 번째 항목의 주소값이 출력됨
    
    printf("----------------------------------------\n\n");
    

    printf("*plist[0] = %d\n", *plist[0]); // plist[0]이 가리키는 메모리 위치의 값 출력
    printf("&plist[0] = %p\n", &plist[0]); // plist[0]의 주소 값 출력
    printf("&plist    = %p\n", &plist); //plist의 시작 주소 값 출력
    printf("plist     = %p\n", plist); //plist의 시작 주소 값 출력
    printf("plist[0]  = %p\n", plist[0]); //plist[0]이 가리키는 메모리 위치 출력
    printf("plist[1]  = %p\n", plist[1]); // plist[1]의 값 출력(NULL)
    printf("plist[2]  = %p\n", plist[2]); // plist[2]의 값 출력(NULL)
    printf("plist[3]  = %p\n", plist[3]); // plist[3]의 값 출력(NULL)
    printf("plist[4]  = %p\n", plist[4]); // plist[4]의 값 출력(NULL)
    
    
    free(plist[0]); // 동적 메모리 헤제
    }

 

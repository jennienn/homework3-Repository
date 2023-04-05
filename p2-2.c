#include <stdio.h>

void print_one(int *ptr, int rows); // 함수 print_one의 프로토타입을 선언

int main() 
{
    printf("------ [김예진] [2022041035] ------\n\n");
    
    int one[] = {0, 1, 2, 3, 4}; // int형 배열 one을 생성하고 초기화

    printf("one     = %p\n", one); // 배열 one의 시작 주소를 출력
    printf("&one    = %p\n", &one); // 배열 one의 시작 주소를 출력
    printf("&one[0] = %p\n", &one[0]); // 배열 one의 첫 번째 요소의 주소를 출력
    printf("\n");
    
    printf("------------------------------------\n"); 
    printf(" print_one(&one[0], 5) \n"); 
    printf("------------------------------------\n"); 
    print_one(&one[0], 5); // 배열 one의 시작 주소를 함수 print_one에 전달하고 출력

    printf("------------------------------------\n"); 
    printf(" print_one(one, 5) \n"); 
    printf("------------------------------------\n"); 
    print_one(one, 5); // 배열 one의 이름을 함수 print_one에 전달하고 출력
    
    return 0; 
}

void print_one(int *ptr, int rows) // int형 포인터와 배열의 길이를 인자로 받는 함수 print_one의 정의
{/* print out a one-dimensional array using a pointer */
    
    int i;
    printf ("Address \t Contents\n"); 
    for (i = 0; i < rows; i++)
        printf("%p \t %5d\n", ptr + i, *(ptr + i)); // 배열의 주소와 값을 출력
    printf("\n");
}

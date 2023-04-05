#include <stdio.h>

#define MAX_SIZE 100 // 배열의 최대 크기를 상수로 정의

float sum1(float list[], int); // 함수 프로토타입 선언
float sum2(float *list, int);
float sum3(int n, float *list);

float input[MAX_SIZE], answer; // 전역변수로 배열과 답을 저장할 변수 선언
int i;

void main(void)
{
    printf("------ [김예진] [2022041035] ------\n\n");
    
    for(i=0; i < MAX_SIZE; i++) 
      input[i] = i; // input 배열에 0부터 99까지 값을 넣음
        
    /* for checking call by reference */ 
    printf("--------------------------------------\n"); 
    printf(" sum1(input, MAX_SIZE) \n"); // sum1 함수를 호출하여 배열의 합을 구함
    printf("--------------------------------------\n"); 
    printf("input \t= %p\n", input); // input 배열의 주소 출력

    answer = sum1(input, MAX_SIZE); // sum1 함수 호출
    printf("The sum is: %f\n\n", answer); // 배열의 합을 출력
    
    printf("--------------------------------------\n"); 
    printf(" sum2(input, MAX_SIZE) \n"); // sum2 함수를 호출하여 배열의 합을 구함
    printf("--------------------------------------\n"); 
    printf("input \t= %p\n", input); // input 배열의 주소 출력

    answer = sum2(input, MAX_SIZE); // sum2 함수 호출
    printf("The sum is: %f\n\n", answer); // 배열의 합을 출력
    
    printf("--------------------------------------\n"); 
    printf(" sum3(MAX_SIZE, input) \n"); // sum3 함수를 호출하여 배열의 합을 구함
    printf("--------------------------------------\n"); 
    printf("input \t= %p\n", input); // input 배열의 주소 출력

    answer = sum3(MAX_SIZE, input); // sum3 함수 호출
    printf("The sum is: %f\n\n", answer); // 배열의 합을 출력
}

float sum1(float list[], int n) //배열 list와 그 크기 n을 입력 받아 배열 요소들의 합을 계산하여 반환하는 함수
{
    printf("list \t= %p\n", list); //배열 list의 시작 주소값을 출력
    printf("&list \t= %p\n\n", &list); //배열 list의 주소값을 출력

    int i;
    float tempsum = 0; // 합을 저장할 변수
    for(i = 0; i < n; i++)
        tempsum += list[i]; //배열의 각 요소를 더함
    return tempsum; // 합을 반환
}

float sum2(float *list, int n) //배열 list의 시작 주소값을 포인터로 입력받아 배열 요소들의 합을 계산하여 반환하는 함수
{
    printf("list \t= %p\n", list); //배열 list의 시작 주소값을 출력
    printf("&list \t= %p\n\n", &list); //배열 list의 주소값을 출력
    
    int i;
    float tempsum = 0; //합을 저장할 변수
    for(i = 0; i < n; i++)
        tempsum += *(list + i); //배열의 각 요소를 더함
    return tempsum; //합을 반환
}

/* stack variable reuse test */
float sum3(int n, float *list)//배열 list의 시작 주소값을 포인터로 입력받아서 배열 요소들의 합을 계산하여 반환하는 함수. n은 배열의 크기
{
    printf("list \t= %p\n", list); //배열 list의 시작 주소값을 출력
    printf("&list \t= %p\n\n", &list);// 배열 list의 주소값을 출력

    int i;
    float tempsum = 0; // 합을 저장할 변수 
    for(i = 0; i < n; i++)
        tempsum += *(list + i); // 배열의 각 요소를 더함
    return tempsum; // 합을 반환

}
#include <stdio.h>

struct student1 //student1 구조체 선언
{
       char lastName;
       int studentId; 
       char grade;
};

typedef struct { //typedef를 이용하여 student2 구조체 선언
       char lastName;
       int studentId;
       char grade;
} student2;

int main() {
    
    printf("------ [김예진] [2022041035] ------\n\n");

    struct student1 st1 = {'A', 100, 'A'};//student1 구조체 변수 st1 초기화
    
    // st1 구조체 변수 출력
    printf("st1.lastName = %c\n", st1.lastName); 
    printf("st1.studentId = %d\n", st1.studentId); 
    printf("st1.grade = %c\n", st1.grade);

    student2 st2 = {'B', 200, 'B'}; // student2 구조체 변수 st2 초기화
    
    // st2 구조체 변수 출력
    printf("\nst2.lastName = %c\n", st2.lastName); 
    printf("st2.studentId = %d\n", st2.studentId); 
    printf("st2.grade = %c\n", st2.grade);
    
    student2 st3;//student2 구조체 변수 st3 선언
    
    st3 = st2; //변수 st2로 초기화
    
    // st3 구조체 변수 출력
    printf("\nst3.lastName = %c\n", st3.lastName); 
    printf("st3.studentId = %d\n", st3.studentId); 
    printf("st3.grade = %c\n", st3.grade);
    
    /* equality test */
    if(st3.studentId == st2.studentId && st3.grade == st2.grade && st3.lastName == st2.lastName)//// st3과 st2가 동일한지 비교하여 출력
        printf("equal\n"); 
    else
        printf("not equal\n");
        
    return 0; 
}



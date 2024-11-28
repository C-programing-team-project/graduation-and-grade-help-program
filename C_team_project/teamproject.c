#include <stdio.h>
#define REQUIRED 1
#define OPTIONAL 0
#define DESIGN 1
#define NON_DESIGN 0

typedef enum {
    FRESHMAN = 1, // 1학년
    SOPHOMORE,    // 2학년
    JUNIOR,       // 3학년
    SENIOR        // 4학년
} Year;

typedef enum {
    SEMESTER_1 = 1, // 1학기
    SEMESTER_2      // 2학기
} Semester;

typedef struct {
    int year;           // 학년
    int semester;       // 학기
    char name[50];      // 과목명
    int isRequired;     // 전공필수 여부
    int isDesign;       // 설계과목 여부
    int score;          // 학점
} Subject;

// 과목 데이터를 배열로 저장
Subject subjects[] = {
    {FRESHMAN, SEMESTER_1, "컴퓨터공학입문", OPTIONAL, NON_DESIGN, 3},
    {FRESHMAN, SEMESTER_1, "C프로그래밍", OPTIONAL, NON_DESIGN, 3},
    {FRESHMAN, SEMESTER_2, "C프로그래밍응용", OPTIONAL, DESIGN, 3},
    {FRESHMAN, SEMESTER_2, "창의적공학설계", OPTIONAL, DESIGN, 3},
    {FRESHMAN, SEMESTER_2, "파이썬프로그래밍", OPTIONAL, NON_DESIGN, 3},
    {FRESHMAN, SEMESTER_2, "전산수학", OPTIONAL, NON_DESIGN, 3},
    {SOPHOMORE, SEMESTER_1, "데이터구조", REQUIRED, NON_DESIGN, 3},
    {SOPHOMORE, SEMESTER_1, "자바프로그래밍", REQUIRED, NON_DESIGN, 3},
    {SOPHOMORE, SEMESTER_1, "유닉스와리눅스", OPTIONAL, DESIGN, 3},
    {SOPHOMORE, SEMESTER_1, "윈도우프로그래밍", OPTIONAL, NON_DESIGN, 3},
    {SOPHOMORE, SEMESTER_1, "진로탐색(1)", OPTIONAL, NON_DESIGN, 3},
    {SOPHOMORE, SEMESTER_1, "선형대수", OPTIONAL, NON_DESIGN, 3},
    {SOPHOMORE, SEMESTER_2, "데이터베이스", REQUIRED, NON_DESIGN, 3},
    {SOPHOMORE, SEMESTER_2, "자바프로그래밍응용", OPTIONAL, DESIGN, 3},
    {SOPHOMORE, SEMESTER_2, "논리회로", OPTIONAL, NON_DESIGN, 3},
    {SOPHOMORE, SEMESTER_2, "웹표준기술", OPTIONAL, NON_DESIGN, 3},
    {SOPHOMORE, SEMESTER_2, "진로탐색(2)", OPTIONAL, NON_DESIGN, 3},
    {SOPHOMORE, SEMESTER_2, "확률통계", OPTIONAL, NON_DESIGN, 3},
    {SOPHOMORE, SEMESTER_2, "컴퓨터네트워크", OPTIONAL, NON_DESIGN, 3},
    {JUNIOR, SEMESTER_1, "컴퓨터알고리즘", REQUIRED, DESIGN, 3},
    {JUNIOR, SEMESTER_1, "소프트웨어공학", REQUIRED, NON_DESIGN, 3},
    {JUNIOR, SEMESTER_1, "모바일프로그래밍", OPTIONAL, DESIGN, 3},
    {JUNIOR, SEMESTER_1, "웹응용기술", OPTIONAL, DESIGN, 3},
    {JUNIOR, SEMESTER_1, "인공지능", OPTIONAL, NON_DESIGN, 3},
    {JUNIOR, SEMESTER_2, "전공종합설계(1)", REQUIRED, DESIGN, 3},
    {JUNIOR, SEMESTER_2, "운영체제", REQUIRED, NON_DESIGN, 3},
    {JUNIOR, SEMESTER_2, "임베디드시스템", OPTIONAL, DESIGN, 3},
    {JUNIOR, SEMESTER_2, "머신러닝", OPTIONAL, DESIGN, 3},
    {JUNIOR, SEMESTER_2, "컴퓨터구조", OPTIONAL, NON_DESIGN, 3},
    {SENIOR, SEMESTER_1, "전공종합설계(2)", REQUIRED, DESIGN, 3},
    {SENIOR, SEMESTER_1, "고급네트워킹", OPTIONAL, NON_DESIGN, 3},
    {SENIOR, SEMESTER_1, "텍스트마이닝", OPTIONAL, NON_DESIGN, 3},
    {SENIOR, SEMESTER_1, "비즈니스컴퓨팅기술", OPTIONAL, NON_DESIGN, 3},
    {SENIOR, SEMESTER_2, "졸업작품", REQUIRED, NON_DESIGN, 0},
    {SENIOR, SEMESTER_2, "엔터프라이즈애플리케이션", OPTIONAL, NON_DESIGN, 3},
    {SENIOR, SEMESTER_2, "정보보안", OPTIONAL, NON_DESIGN, 3},
    {SENIOR, SEMESTER_2, "진로와취창업", OPTIONAL, NON_DESIGN, 2},
};

int subjectCount = sizeof(subjects) / sizeof(subjects[0]);

// 특정 학년, 학기에 맞는 과목을 출력
void print(int year, int semester) {
    for (int i = 0; i < subjectCount; i++) {
        if (subjects[i].year == year && subjects[i].semester == semester) {
            printf(" %s (%d학점, %s, %s)\n",subjects[i].name, subjects[i].score,subjects[i].isRequired ? "전공필수" : "전공선택",subjects[i].isDesign ? "설계과목" : "비설계과목");
        }
    }
}

int main() {
    printf("[학년별, 학기별 과목 리스트]\n");
    for (int year = FRESHMAN; year <= SENIOR; year++) 
    {
        for (int semester = SEMESTER_1; semester <= SEMESTER_2; semester++) 
        {
            printf("%d학년 %d학기:\n", year, semester);
            print(year, semester);
            printf("\n");
        }
    }
    return 0;
}

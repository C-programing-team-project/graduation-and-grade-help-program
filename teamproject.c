#include <stdio.h>

// ���� ����ü ����
typedef struct {
    int year;           // �г�
    int semester;       // �б�
    char name[50];      // �����
    int isRequired;     // �����ʼ� ���� (1: �ʼ�, 0: ����)
    int isDesign;       // ������� ���� (1: ����, 0: �Ϲ�)
    int score;          // ����
} Subject;

// ���� ���� ������
Subject subjects[] = {
    {1, 1, "��ǻ�Ͱ����Թ�", 1, 0, 3},
    {1, 2, "C���α׷�������", 0, 1, 3},
    {2, 1, "�����ͱ���", 1, 0, 3}
};
int subjectCount = sizeof(subjects) / sizeof(subjects[0]);

int Grade_Calculator(); //���� ����

int main() {
    int year, semester;

    printf("���� �г��� �Է��ϼ���. (ex: 1): ");
    scanf("%d", &year);
    printf("���� �б⸦ �Է��ϼ���. (ex: 2): ");
    scanf("%d", &semester);

    return 0;
}
#include <stdio.h>
#include <string.h>

struct Student {
    char Name[20];
    char ID[5];
    float ScoreSub1;
    float ScoreSub2;
    float ScoreSub3;
    float ScoreSub4;
    float ScoreSub5;
} typedef S;

// ฟังก์ชันตัดเกรด
char* grade(float score) {
    if (score >= 80) return "A";
    else if (score >= 75) return "B+";
    else if (score >= 70) return "B";
    else if (score >= 65) return "C+";
    else if (score >= 60) return "C";
    else if (score >= 55) return "D+";
    else if (score >= 50) return "D";
    else return "F";
}

int main() {
    S students[3];

    printf("Enter the details of 3 students :\n");

    for (int i = 0; i < 3; i++) {
        printf("\nStudent %d:\n", i + 1);

        printf("Name: \n");
        scanf(" %[^\n]", students[i].Name);  // รับชื่อ (รวมเว้นวรรค)

        printf("ID: \n");
        scanf(" %s", students[i].ID);

        printf("Scores in Subject 1: \n");
        scanf("%f", &students[i].ScoreSub1);
        printf("Scores in Subject 2: \n");
        scanf("%f", &students[i].ScoreSub2);
        printf("Scores in Subject 3: \n");
        scanf("%f", &students[i].ScoreSub3);
        printf("Scores in Subject 4: \n");
        scanf("%f", &students[i].ScoreSub4);
        printf("Scores in Subject 5: \n");
        scanf("%f", &students[i].ScoreSub5);
    }

    // แสดงผลลัพธ์
    for (int i = 0; i < 3; i++) {
        float s1 = students[i].ScoreSub1;
        float s2 = students[i].ScoreSub2;
        float s3 = students[i].ScoreSub3;
        float s4 = students[i].ScoreSub4;
        float s5 = students[i].ScoreSub5;

        float avg = (s1 + s2 + s3 + s4 + s5) / 5.0;

        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s\n", students[i].Name);
        printf("ID: %s\n", students[i].ID);
        printf("Scores: %.0f %.0f %.0f %.0f %.0f\n", s1, s2, s3, s4, s5);
        printf("Grades: %s %s %s %s %s\n",
               grade(s1), grade(s2), grade(s3), grade(s4), grade(s5));
        printf("Average Scores: %.1f\n", avg);
    }

    return 0;
}

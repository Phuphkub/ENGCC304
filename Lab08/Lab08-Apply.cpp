#include <stdio.h>

int main() {
    int position;
    int yearsOfExperience;
    int projectsCompleted;
    int baseSalary = 0;
    float experienceBonus = 0;
    float specialBonus = 0;
    float netSalary = 0;

    // รับค่าจากผู้ใช้
    printf("Position (1=Junior, 2=Mid-Level, 3=Senior): ");
    scanf("%d", &position);

    printf("Years of Experience: ");
    scanf("%d", &yearsOfExperience);

    printf("Number of Projects Completed this Year: ");
    scanf("%d", &projectsCompleted);

    // กำหนดเงินเดือนพื้นฐานตามตำแหน่ง
    if (position == 1) {
        baseSalary = 20000;
    } else if (position == 2) {
        baseSalary = 35000;
    } else if (position == 3) {
        baseSalary = 50000;
    } else {
        printf("Invalid position input.\n");
        return 1;
    }

    // คำนวณโบนัสตามอายุงาน
    if (yearsOfExperience >= 1 && yearsOfExperience <= 3) {
        experienceBonus = baseSalary * 0.10;
    } else if (yearsOfExperience >= 4 && yearsOfExperience <= 5) {
        experienceBonus = baseSalary * 0.15;
    } else if (yearsOfExperience > 5) {
        experienceBonus = baseSalary * 0.20;
    }

    // โบนัสพิเศษ (ถ้าโปรเจคสำเร็จมากกว่า 5)
    if (projectsCompleted > 5) {
        specialBonus = baseSalary * 0.05;
    }

    // คำนวณเงินเดือนสุทธิ
    netSalary = baseSalary + experienceBonus + specialBonus;

    // แสดงผลลัพธ์
    printf("\nBase Salary: %.0f THB\n", (float)baseSalary);
    printf("Experience Bonus: %.0f THB\n", experienceBonus);
    printf("Special Bonus: %.0f THB\n", specialBonus);
    printf("Net Salary: %.0f THB\n", netSalary);

    return 0;
}

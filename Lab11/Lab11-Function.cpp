#include <stdio.h>
#include <math.h>

// ฟังก์ชันตรวจสอบว่าเป็นตัวเลขอาร์มสตรองหรือไม่
int isArmstrong(int num) {
    int original = num;
    int digits = 0;
    int sum = 0;

    // นับจำนวนหลัก
    int temp = num;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    // คำนวณผลรวมของเลขยกกำลังตามจำนวนหลัก
    temp = num;
    while (temp != 0) {
        int digit = temp % 10;
        sum += pow(digit, digits); // ยกกำลัง
        temp /= 10;
    }

    return (sum == original); // เปรียบเทียบกับตัวเลขเดิม
}

int main() {
    int num;

    printf("Enter Number:\n");
    scanf("%d", &num);

    if (isArmstrong(num)) {
        printf("Pass.\n");
    } else {
        printf("Not Pass.\n");
    }

    return 0;
}

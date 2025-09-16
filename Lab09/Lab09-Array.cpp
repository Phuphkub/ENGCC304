#include <stdio.h>
#include <stdbool.h>

// ฟังก์ชันตรวจสอบจำนวนเฉพาะ
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int n;

    printf("Enter N :\n");
    scanf("%d", &n);

    int arr[n];

    // รับค่าจากผู้ใช้ใส่ในอาเรย์
    for (int i = 0; i < n; i++) {
        printf("Enter value[%d] :\n", i);
        scanf("%d", &arr[i]);
    }

    // แสดง index
    printf("Index: ");
    for (int i = 0; i < n; i++) {
        printf("%3d", i);
    }
    printf("\n");

    // แสดงผลลัพธ์ โดยเช็คว่าเป็นจำนวนเฉพาะหรือไม่
    printf("Array:");
    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
            printf("%3d", arr[i]);
        } else {
            printf("%3s", "#");
        }
    }
    printf("\n");

    return 0;
}

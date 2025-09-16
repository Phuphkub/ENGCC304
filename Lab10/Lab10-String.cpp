#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char word[100];
    char lowerWord[100];
    int length, isPalindrome = 1;

    printf("Enter word:\n");
    scanf("%s", word);

    // แปลงเป็นตัวพิมพ์เล็กทั้งหมด
    length = strlen(word);
    for (int i = 0; i < length; i++) {
        lowerWord[i] = tolower(word[i]);
    }
    lowerWord[length] = '\0'; // ใส่ null-terminator

    // ตรวจสอบว่าเป็น palindrome หรือไม่
    for (int i = 0; i < length / 2; i++) {
        if (lowerWord[i] != lowerWord[length - 1 - i]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome) {
        printf("Pass.\n");
    } else {
        printf("Not Pass.\n");
    }

    return 0;
}

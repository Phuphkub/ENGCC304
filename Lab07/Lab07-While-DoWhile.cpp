#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int playInput;
    
    srand(time(NULL)); // ใช้สำหรับสุ่มตัวเลขให้เปลี่ยนทุกครั้งที่รัน

    while (1) {
        printf("Do you want to play game (1=play,-1=exit) :\n");
        if (scanf("%d", &playInput) != 1) {
            // กรณีที่ไม่ใช่ตัวเลข
            while (getchar() != '\n'); // ล้าง buffer
            printf("Please enter only 1 or -1.\n\n");
            continue;
        }

        if (playInput == -1) {
            printf("See you again.\n");
            break;
        } else if (playInput == 1) {
            int score = 100;
            int target = rand() % 100 + 1;
            int guess;
            int min = 1, max = 100;

            printf("\n(Score=100)\n");

            while (1) {
                printf("\nGuess the winning number (%d-%d) :\n", min, max);
                if (scanf("%d", &guess) != 1) {
                    while (getchar() != '\n'); // ล้าง buffer
                    printf("Please enter a valid number.\n");
                    continue;
                }

                if (guess < min || guess > max) {
                    printf("Your guess is out of the valid range (%d-%d).\n", min, max);
                    continue;
                }

                if (guess == target) {
                    printf("\nThat is correct! The winning number is %d.\n", target);
                    printf("\nScore this game: %d\n", score);
                    break;
                } else {
                    score -= 10;
                    if (score <= 0) {
                        printf("\nYou've run out of points. The correct number was %d.\n", target);
                        printf("\nScore this game: 0\n");
                        break;
                    }

                    if (guess < target) {
                        printf("\nSorry, the winning number is HIGHER than %d. (Score=%d)\n", guess, score);
                        if (guess + 1 > min) min = guess + 1;
                    } else {
                        printf("\nSorry, the winning number is LOWER than %d. (Score=%d)\n", guess, score);
                        if (guess - 1 < max) max = guess - 1;
                    }
                }
            }

            printf("\n");
        } else {
            printf("Please enter only 1 or -1.\n\n");
        }
    }

    return 0;
}

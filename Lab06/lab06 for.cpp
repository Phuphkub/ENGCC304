#include <stdio.h>

int main() {
    int n;
    printf( "Enter number : " ) ;
    scanf( "%d", &n ) ;

    // วนลูปจาก n ลงไปถึง 2
    for( int i = n ; i >= 2 ; i-- ) {
        int isPrime = 1 ;  // สมมติว่าเป็นจำนวนเฉพาะ

        // ตรวจสอบว่า i หารลงตัวกับเลขอื่นหรือไม่
        for( int j = 2 ; j < i ; j++ ) {
            if( i % j == 0 ) {
                isPrime = 0 ; // ถ้าหารลงตัว แสดงว่าไม่ใช่จำนวนเฉพาะ
                break ;
            }
        }

        if( isPrime ) {
            printf( "%d\n", i ) ; 
        }
    }

    return 0;
}
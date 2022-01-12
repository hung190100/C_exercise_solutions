#include <stdio.h>
#include <stdlib.h>

// Tìm ước chung lớn nhất
/*
// Tìm ước chung lớn nhất sử dụng phép trừ
int gcd(int a, int b){
    // Nếu a = 0 => ucln(a,b) = b
    // Nếu b = 0 => ucln(a,b) = a
    if (a == 0 || b == 0){
        return a + b;
    }

    while (a != b){
        if (a > b){
            a -= b; // a = a - b
        } else{
            b -= a;
        }
    }

    return a; // return a or b, bởi vì lúc này a và b bằng nhau
}

// Tìm ước chung lớn nhất sử dụng phép chia dư
int gcd(int a, int b){
    // Lặp tới khi 1 trong 2 số bằng 0
    while (a*b != 0){
        if (a > b){
            a %= b; // a = a % b
        } else{
            b %= a;
        }
    }

    return a + b; // return a + b, bởi vì lúc này hoặc a hoặc b đã bằng 0
}
*/

// Tìm ước chung lớn nhất sử dụng giải thuật Euclid
// Cài đặt thuật toán sử dụng đệ quy
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}
/*
// Cài đặt khử đệ quy
int gcd(int a, int b) {
    int temp;
    while(b != 0) {
        tmp = a % b;
        a = b;
        b = temp;
    }
    return a;
}
*/

// Có thể sử dụng một trong các cách trên để tìm ước chung lớn nhất

// Tìm bội chung nhỏ nhất (có khá nhiều cách nhưng ở đây mình dùng cách đơn giản nhất)
int lcm(int a, int b) {
    return a*b / gcd(a,b);
}

int main()
{
    int a, b;

    printf("Nhap a: ");
    scanf("%d", &a);

    printf("Nhap b: ");
    scanf("%d", &b);

    printf("Uoc chung lon nhat cua %d va %d la %d\n", a, b, gcd(a,b));
    printf("Boi chung nho nhat cua %d va %d la %d\n", a, b, lcm(a,b));

    return 0;
}

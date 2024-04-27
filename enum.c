#include <stdio.h>
int main() {
enum Numbers {
    One = 1,
    Two,
    Three,
    Four,
    Five,
    Six,
    Seven,
    Eight,
    Nine,
    Ten
};

    for (enum Numbers i = One; i <= Ten; ++i) {
        printf("%d: ", i);
        
        if (i == One) {
            printf("One\n");
        } else if (i == Two) {
            printf("Two\n");
        } else if (i == Three) {
            printf("Three\n");
        } else if (i == Four) {
            printf("Four\n");
        } else if (i == Five) {
            printf("Five\n");
        } else if (i == Six) {
            printf("Six\n");
        } else if (i == Seven) {
            printf("Seven\n");
        } else if (i == Eight) {
            printf("Eight\n");
        } else if (i == Nine) {
            printf("Nine\n");
        } else if (i == Ten) {
            printf("Ten\n");
        }
    }

    return 0;
}
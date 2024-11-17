#include <stdio.h>
#include <math.h>

int max_plates(int X, int Y, int R) {
    int extra_sticks = R / 30;  
    int total_sticks = X + extra_sticks;  
    int plates = (int)ceil((double)total_sticks / Y);  
    return plates;
}

int main() {
    int T;  
    scanf("%d", &T);  

    for (int i = 0; i < T; i++) {
        int X, Y, R;
        scanf("%d %d %d", &X, &Y, &R);  
        printf("%d\n", max_plates(X, Y, R));  
    }

    return 0;
}


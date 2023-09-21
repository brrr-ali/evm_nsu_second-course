#include <stdio.h>

double ex_(double x) {
    int n = 109000;
    double answer = 0;
    double a = 1; 
    for (int i = 1; i < n; i ++) {
        a = 1;
        for (int j = 1; j < i; j ++) {
            a *= (x / j);
        }
        answer += a;
    }
    return answer;
}


int main() {
    printf("%lf", ex_(2));
    return 0;
}

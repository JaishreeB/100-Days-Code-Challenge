#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
      // Complete the code to print the pattern.
    int d = n*2-1;
    for (int y= 0-d/2; y<=d/2; y++) {
        for (int x=0-d/2; x<=d/2; x++) {
            int a = (int)fmax(abs(x),abs(y))+1;
            printf("%d ", a);
        }
        printf("\n");
    }
    return 0;
}
/* 
task - 1

Given a five digit integer, print the sum of its digits.

Input Format

The input contains a single five digit number, .

Constraints:10000<=n<=99999


Output Format

Print the sum of the digits of the five digit number.

Sample Input 0

10564
Sample Output 0

16 

*/
Program 
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n,sum,l;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    while(n>0){
        l=n%10;
        sum=sum+l;
        n=n/10;
    }   
    printf("%d",sum);
    return 0;
}


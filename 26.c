#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    
    if((n<<31)== 0){
        printf("yes");
    }
    else{
        printf("no");
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

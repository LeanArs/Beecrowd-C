#include <stdio.h>
 
int main() {
 
    int N;
    scanf("%d", &N);

    while (N--)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        printf("%d\n", mdc(a, b));
    }
    
 
    return 0;
}

int mdc (int x, int y){

    int c = x%y;
    if (c == 0)
    {
        return y;
    }
    else{
        mdc(y, c);
    }
}
#include<stdio.h>
#include<string.h>

int findResult(int **Arr);
int main(int argc, char* argv[])
{
    int a[4][4]= {1,2,8,9,2,4,9,12,4,7,10,13,6,8,11,15};
    int target;
    int result;

    scanf("%d", target);

    result = findResult(a);

    return 0;

}
#include<stdio.h>
#include<string.h>

typedef int bool;

#define true 1
#define false 0

int findResult(int Array[][4],int rows, int columns, int target);

int main(int argc, char* argv[])
{
    int a[4][4]= {1,2,8,9,2,4,9,12,4,7,10,13,6,8,11,15};
    int target;
    int result;

    scanf("%d", &target);

    result = findResult(a, 4, 4, target);

    if(result == true)
    {
        printf("找到了");
    }
    else
    {
        printf("没有找到");
    }

    return 0;

}


int findResult(int Array[][4],int rows, int columns, int target)
{
    int inRows, inColumns;
    bool flag = false;

    if(Array != NULL && rows > 0 && columns >0)
    {
        inRows = 0;
        inColumns = columns -1;

        while(inRows < rows && inColumns >= 0)
        {
            if(target == Array[inRows][inColumns])
            {
                flag = true;
                break;
            }
            else if(target < Array[inRows][inColumns])
            {
                inColumns = inColumns - 1;
            }
            else
            {
                inRows = inRows + 1;
            }
        }
    }

    return flag;

}

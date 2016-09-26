#include <stdio.h>
#include <string.h>

typedef struct Binary{
    char value;
    char *leftChild;
    char *rightChild;
}Binary;


char *GetPostBinary(char* firstStr, char* secStr, int strLen);

int main(int argc, char* argv[])
{
    char *firstString = "ABDECFG";
    char *secondString = "DBEAFCG";
    int  len;
    char  result[16];

    memset(result, 0, sizeof(result));

    len = strlen(firstString);
    result = GetPostBinary(firstString, secondString, len);

    return 0;

}


char *GetPostBinary(char* firstStr, char* secStr, int strLen)
{

    char key;
    char buffer[16];
    struct Binary

    memset(buffer, 0, sizeof(buffer));

    if(firstStr != NULL && secStr != NULL)
    {
        key = firstStr[0];




    }



}

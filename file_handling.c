#include<stdio.h>
int main()
{   int i;
    FILE *fp;
    char s[]="mohit kumar";
    fp=fopen("xyz.txt","w");
    if(fp==NULL)
    {
        printf("file can't be open");
        exit(1);

    }
    for(i=0;i<strlen(s);i++)
        fputc("s[i]","fp");
    fclose(fp);

}

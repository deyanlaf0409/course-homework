#include<stdio.h>

int main()
{
      FILE *fp, *target;
      char ch;
      int i,pos;
      fp=fopen("test.txt","r");
      if(fp==NULL)
      {
            printf("Error");
      }
      target =fopen("test_rev.txt","w");
        if(fp==NULL)
      {
        printf("Error");
      }
      fseek(fp,0,SEEK_END);
      pos=ftell(fp);
      i=0;
      while(i<pos)
       {
            i++;
            fseek(fp,-i,SEEK_END);
            ch=fgetc(fp);
            fputc(ch, target);
      }
      return 0;
}

#include <stdio.h>
#include <stdio.h>
int main(void)
{
	short a=0x253f,b=0x7b7d;
	char ch;
	FILE *fp1,*fp2;
	fp1=fopen("d:\\abc1.bin","wb+");
    fp2=fopen("d:\\abc2.txt","w+");
	fwrite(&a,sizeof(char),1,fp1);//将字节输出到文件
	fwrite(&b,sizeof(char),1,fp1);   
	fprintf(fp2,"%x %x",a,b); //以十六进制写入
    rewind(fp1); rewind(fp2);
	while((ch = fgetc(fp1)) != EOF) 
		putchar(ch);
	putchar('\n');
	
	while((ch = fgetc(fp2)) != EOF) 
		putchar(ch);
	putchar('\n');

	fclose(fp1);
	fclose(fp2);
 return 0;
}
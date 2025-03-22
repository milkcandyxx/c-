#include <stdio.h>
#include <string.h>
void fun( char *ss )
{
    int i = 1;
    while(1){
        if(ss[i]!='\0'){
            if((ss[i]<'1'||ss[i]>'9')&&'a'<=ss[i]&&ss[i]<='z'){
               ss[i]=ss[i]-('a'-'A');
            }
        }else{
            break;
        }
        i+=2;

    }



}

int main( void )
{
   char tt[51];void NONO ();
   printf( "\nPlease enter an character string within 50 characters:\n" );
   gets( tt );
   printf( "\n\nAfter changing, the string\n  \"%s\"", tt );
   fun(tt) ;
   printf( "\nbecomes\n  \"%s\"", tt );
   NONO();
   getchar();
}

void NONO ()
{
/* 请在此函数内打开文件，输入测试数据，调用 fun 函数，
   输出数据，关闭文件。 */
   char tt[51], ch;
   FILE *rf, *wf ;
   int len, i=0 ;

   rf = fopen("in.dat","r") ;
   wf = fopen("out.dat","w") ;
   while(i < 10) {
     fgets( tt, 50, rf );
     len = strlen(tt) - 1 ;
     ch = tt[len] ;
     if(ch == '\n' || ch == 0x1a) tt[len] = 0 ;
     fun(tt);
     fprintf( wf, "%s\n", tt );
     i++ ;
   }
   fclose(rf) ;
   fclose(wf) ;
}


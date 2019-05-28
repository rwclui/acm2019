#include <cstdio>
#include <cstdlib>
#include <cstring>
main(void) {
    char a[]=" 1234567890-=WERTYUIOP[]\\SDFGHJKL;'XCVBNM,./";
    char b[]=" `1234567890-QWERTYUIOP[]ASDFGHJKL;ZXCVBNM,.";
    int i=0,j=0;
    char c,input[1000],ans[1000];
 //read lines of input until EOF
    while(gets(input)!=NULL){ 
        for(i=0;i<strlen(input);i++) {
            for(j=0; j<sizeof(a);j++)  {
                if(a[j]==input[i]){
                    ans[i]=b[j];
                    break;
                }
            }
        }
        ans[i]=0;
        printf("%s\n",ans);
    }
}


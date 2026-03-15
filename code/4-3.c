#include<stdio.h>
int main()
{
    int a;
    int isp = 0;
    scanf("%d",&a);
    if(a==1){
        isp =1;
    }
    else{
        for(int i = 2; i*i <= a; i++){
            if(a%i==0){
                isp = 1;
                break;
            }
        }
    }
    if(isp == 0)
        printf("true\n");
    else
        printf("false\n");
    
    return 0;
}

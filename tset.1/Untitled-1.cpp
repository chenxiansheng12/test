#include <stdio.h>
#include <stdlib.h>
void fun (int a);
int main()
{
    printf("Hello World!\n");
    printf("你好世界！\n");
    int a;
    scanf("%d",&a);
    fun(a);   // 防止运行后自动退出，需头文件stdlib.h
    getchar();
    return 0;
}
void fun (int a){
    printf("%d",a);
}
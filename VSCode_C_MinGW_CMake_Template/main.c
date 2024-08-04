#include <stdio.h>
#include <stdlib.h>

#include "printf_a.h"
#include "printf_b.h"
int main()
{
    //防止控制台输出中文乱码
    int i = 0;
    system("chcp 65001");
    printf("Hello World!\n");
    printf("你好世界！\n");
    i += 1;
    printf("i = %d\n", i);
    printf_a();
    printf_b();
    system("pause");    // 防止运行后自动退出，需头文件stdlib.h
    return 0;
}


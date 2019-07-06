#include <stdio.h>
/*使用 puts() 输出更简洁、更方便。而且使用 puts() 函数连换行符 '\n' 都省了，
使用 puts() 显示字符串时，系统会自动在其后添加一个换行符
printf("%s\n", name);  等价于  puts(name);*/ 
int main(void)
{
    int r;

    while (scanf("%d", &r) != EOF)
    {
        if (r < 0)
            puts("Score is error!");
        else if (r < 60)
            puts("E");
        else if (r < 70)
            puts("D");
        else if (r < 80)
            puts("C");
        else if (r < 90)
            puts("B");
        else if (r < 101)
            puts("A");
        else
            puts("Score is error!");
    }

    return 0;
}

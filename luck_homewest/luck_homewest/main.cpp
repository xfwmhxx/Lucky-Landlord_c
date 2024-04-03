#include <graphics.h>
#include <conio.h>

int main()
{
    initgraph(640, 480); // 初始化图形窗口，设置宽度和高度

    // 绘制一个红色的矩形
    setfillcolor(RED); // 设置填充颜色为红色
    fillrectangle(100, 100, 200, 200); // 绘制矩形，左上角坐标为(100, 100)，右下角坐标为(200, 200)

    // 绘制一个蓝色的圆形
    setfillcolor(BLUE); // 设置填充颜色为蓝色
    fillellipse(320, 240, 50, 50); // 绘制圆形，圆心坐标为(320, 240)，半径为50

    _getch(); // 等待用户按下任意键继续

    closegraph(); // 关闭图形窗口

    return 0;
}
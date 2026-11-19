#include <stdio.h>
#include <windows.h>
void moveCursor(int x, int y)
{
    COORD position;
    if (x < 0 || y < 0)
        return;
    position.X = (SHORT)x;
    position.Y = (SHORT)y;
    SetConsoleCursorPosition(
        GetStdHandle(STD_OUTPUT_HANDLE), position);
}
int main(void)
{
    moveCursor(0, 0);
    moveCursor(5, 3);
    printf("A");
    getchar();
    return 0;
}
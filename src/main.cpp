#include "raylib.h"
#include "raygui.h"

int main()
{
    const int screenWidth = 960;
    const int screenHeight = 560;

    InitWindow(screenWidth, screenHeight, "FFMPEG-GUI");
    SetExitKey(0);

    bool exitWindow = false;
    SetTargetFPS(60);

    while (!exitWindow)
    {
        exitWindow = WindowShouldClose();
        BeginDrawing();
        EndDrawing();
    }

    CloseWindow();
    return 0;
}
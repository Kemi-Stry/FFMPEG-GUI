#define RAYGUI_IMPLEMENTATION

#include <raylib.h>
#include <raygui.h>
#include <iostream>

int main()
{
    InitWindow(960, 560, "FFmpeg-GUI");
    SetTargetFPS(60);

    //Font font = LoadFont("Inter-VariableFont.ttf");
    //GuiSetFont(font);

    bool active = false;
    const char* options = "YUV422;";
    int option = 0;
    
    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(RAYWHITE);

        DrawText("Pixel Format", 10, 10, 24, DARKGRAY);
        if (GuiDropdownBox({40, 40, 200, 30}, options, &option, active))
        {
            active = !active;
        }

        EndDrawing();
    }
    
    //UnloadFont(font);
    CloseWindow();
    return 0;
}
#include "raylib.h"

int main(void)
{
    const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "raylib -> Web (WASM) on GitHub Pages");
    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(RAYWHITE);

        DrawText("Hallo raylib im Browser!", 190, 200, 20, DARKGRAY);
        DrawText("Wenn du das siehst: Build + Pages klappt.", 130, 230, 16, GRAY);

        EndDrawing();
    }

    CloseWindow();
    return 0;
}
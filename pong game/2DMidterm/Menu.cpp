#include "Menu.h"
#include "raylib.h"
#include <string>

using namespace std;

void Menu::Draw() {
    string singleTxt = "singleplayer";
    string multiTxt = "multiplayer";
    string exitTxt = "exit";
    string titleTxt = "PONG";
    DrawRectangleRounded(singleplayer, 2, 10, WHITE);
    DrawRectangleRounded(multiplayer, 2, 10, WHITE);
    DrawRectangleRounded(exit, 2, 10, WHITE);

    float txtWidth = MeasureText(singleTxt.c_str(), fontSize);
    txtPos = { singleplayer.x + singleplayer.width / 2 - txtWidth / 2,
               singleplayer.y + singleplayer.height / 2 - fontSize / 2 };
    DrawText(singleTxt.c_str(), txtPos.x, txtPos.y, fontSize, txtColor);
    
    txtWidth = MeasureText(multiTxt.c_str(), fontSize);
    txtPos = { multiplayer.x + multiplayer.width / 2 - txtWidth / 2,
               multiplayer.y + multiplayer.height / 2 - fontSize / 2 };
    DrawText(multiTxt.c_str(), txtPos.x, txtPos.y, fontSize, txtColor);

    txtWidth = MeasureText(exitTxt.c_str(), fontSize);
    txtPos = { exit.x + exit.width / 2 - txtWidth / 2,
               exit.y + exit.height / 2 - fontSize / 2 };
    DrawText(exitTxt.c_str(), txtPos.x, txtPos.y, fontSize, txtColor);

    txtWidth = MeasureText(titleTxt.c_str(), 200);
    txtPos = { exit.x + exit.width / 2 - txtWidth / 2,
               exit.y + exit.height / 2 - fontSize / 2 };
    DrawText(titleTxt.c_str(), txtPos.x, 20, 200, WHITE);
}
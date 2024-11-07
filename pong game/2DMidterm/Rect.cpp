#include "Rect.h"
#include "raylib.h"
#include "Memory.h"
#include <string>
#include <iostream>

using namespace std;

void Rect::Draw() {
	// DrawRectangle(x, y, width, height, WHITE);
    DrawRectangleRounded( Rectangle {x, y, width, height}, 4, 4, WHITE );
}

void Rect::Update(int upKey, int downKey) {
    
    // move up and down
    if (IsKeyDown(upKey)) {
        y -= speed;
    }
    if (IsKeyDown(downKey)) {
        y += speed;
    }
    if (IsKeyDown(downKey) || IsKeyDown(upKey)) {
        speed *= 1.01;
        // cout << speed;
    }
    else {
        speed = defaultSpeed;
    }

    // prevent the rectangle from going out of bounds
    if (y < 0) {
        y = 0;
    }
    if (y + height > GetScreenHeight()) {
        y = GetScreenHeight() - height;
    }
}

void Rect::AIUpdate(Rect& left, Ball& ball) {
    // move up if the rect is above the ball
    if (left.y + left.height / 2 < ball.y) {
        left.y += left.speed;  // Move down
    }
    else {
        speed = defaultSpeed;
    }

    // move down if the rect is above the ball
    if (left.y + left.height / 2 > ball.y) {
        left.y -= left.speed;  // Move up
    }
    else {
        speed = defaultSpeed;
    }

    // prevent rectangle from going out
    if (left.y < 0) {
        left.y = 0;
    }
    if (left.y + left.height > GetScreenHeight()) {
        left.y = GetScreenHeight() - left.height;
    }
}
#include "Ball.h"
#include "raylib.h"

void Ball::Draw() {
    DrawCircle(x, y, radius, WHITE);
}

void Ball::Update() {
    x += speedX;
    y += speedY;

    // Bounce off top and bottom walls
    if (y - radius < 0 || y + radius > GetScreenHeight()) {
        speedY *= -1; // Reverse vertical direction
    }
}

void Ball::CheckCollision(float rectX, float rectY, float rectWidth, float rectHeight) {
    // Check for collision with the rectangles
    if (x - radius < rectX + rectWidth && x + radius > rectX &&
        y - radius < rectY + rectHeight && y + radius > rectY) {
        speedX *= -1.1; // Reverse horizontal direction
        // Adjust ball position
        x = (speedX > 0) ? rectX + rectWidth + radius : rectX - radius;
    }
}
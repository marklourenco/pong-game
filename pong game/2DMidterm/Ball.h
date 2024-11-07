#pragma once

#include "raylib.h"

#ifndef BALL_H
#define BALL_H

class Ball {
public:
    float x;
    float y;
    float radius;
    float speedX;
    float speedY;

    Ball(float startX, float startY, float r, float initialSpeedX, float initialSpeedY)
        : x(startX), y(startY), radius(r), speedX(initialSpeedX), speedY(initialSpeedY) {}

    void Update();
    void Draw();
    void CheckCollision(float paddleX, float paddleY, float paddleWidth, float paddleHeight);
};

#endif
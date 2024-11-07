#pragma once

#include "raylib.h"

#include "Ball.h"

#ifndef RECT_H
#define RECT_H


class Rect
{
public:
    float x = 200;
    float y = 200;
    float width = 10;
    float height = 100;
    float speed = 5;
    int defaultSpeed = 5;

    void Draw();
    void Update(int upKey, int downKey);
    void AIUpdate(Rect &right, Ball &ball);
};

#endif
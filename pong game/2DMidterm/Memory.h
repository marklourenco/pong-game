#pragma once

#include "raylib.h"
#include <vector>
#include "Rect.h"
#include "Ball.h"
#include "Menu.h"

using namespace std;

#ifndef MEMORY_H
#define MEMORY_H

enum GameState {
	Init, Single, Multi, Exit
};
enum ScoreState {
	Resume, Pause
};

class Memory
{
public:
#define WAIT_Time 2 // time between rounds
	static const int width = 1200; // w and h of canvas
	static const int height = 800;

	Rect left;
	Rect right;

	Ball ball;

	Menu menu;

	int score1 = 0;
	int score2 = 0;
	float timeOfScore;

	int fontSize = 24;

	Memory() : ball(400, 400, 10, 5, 7) {
	} // Initial position, radius, and speed

	GameState state = GameState::Init;
	ScoreState scoreState = ScoreState::Resume;

	void Main();
	void Start();
	void Draw();
	void Update();
};

#endif
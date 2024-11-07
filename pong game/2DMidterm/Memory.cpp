#include "Memory.h"
#include "raylib.h"
#include <time.h>

#include <iostream>

using namespace std;

void Memory::Main() {
	Start(); // do all initial settings

	InitWindow(width, height, "Pong Game");
	SetTargetFPS(60);

	while (!WindowShouldClose()) {
		BeginDrawing();
		ClearBackground(BLACK);

		Update(); // do all settings
		Draw(); // draw all my objects
		EndDrawing();
	}
	CloseWindow();
}

void Memory::Start() {
	left.x = 40; // starting X position
	left.y = 200; // starting Y position
	right.x = 1150; // starting X position
	right.y = 200; // starting Y position
}

void Memory::Draw() {
	
	switch (state)
	{
	case Init:
		menu.Draw();
		break;
	case Single:
		left.Draw();
		DrawText(TextFormat("%d", score1), 20, 20, fontSize, WHITE);
		DrawText(TextFormat("%d", score2), 1170, 20, fontSize, WHITE);
		right.Draw();
		ball.Draw();
		break;
	case Multi:
		left.Draw();
		DrawText(TextFormat("%d", score1), 20, 20, fontSize, WHITE);
		DrawText(TextFormat("%d", score2), 1170, 20, fontSize, WHITE);
		right.Draw();
		ball.Draw();
		break;
	case Exit:
		break;
	}
}

void Memory::Update() {

	switch (state)
	{
	case Init:
		if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT)) {
			if (CheckCollisionPointRec(GetMousePosition(), menu.singleplayer)) {
				scoreState = Pause;
				state = Single;
			}
			if (CheckCollisionPointRec(GetMousePosition(), menu.multiplayer)) {
				state = Multi;
				scoreState = Pause;
			}
			if (CheckCollisionPointRec(GetMousePosition(), menu.exit)) {
				state = Exit;
			}
		}
		break;
	case Single:
		left.AIUpdate(left, ball); // left rectangle uses W and S
		right.Update(KEY_UP, KEY_DOWN); // right rectangle uses ARROWS

		if (scoreState == Resume) {
			ball.Update();
		}
		else {
			if (GetTime() > timeOfScore + WAIT_Time) {
				scoreState = Resume;
				if (score1 == 3) {
					state = Init;
					score1 = 0;
					score2 = 0;
				}
				if (score2 == 3) {
					state = Init;
					score1 = 0;
					score2 = 0;
				}
			}
		}

		ball.CheckCollision(left.x, left.y, left.width, left.height);
		ball.CheckCollision(right.x, right.y, right.width, right.height);

		if (ball.x + ball.radius > GetScreenWidth()) {
			score1++;
			ball.x = GetScreenWidth() / 2;
			ball.y = GetScreenHeight() / 2;
			timeOfScore = GetTime();
			scoreState = Pause;
			ball.speedX = 5, ball.speedY = 5;
		}
		else if (ball.x - ball.radius < 0) {
			score2++;
			ball.x = GetScreenWidth() / 2;
			ball.y = GetScreenHeight() / 2;
			timeOfScore = GetTime();
			scoreState = Pause;
			ball.speedX = 5, ball.speedY = 5;
		}
		if (score1 == 3) {
			scoreState = Pause;
		}
		else if (score2 == 3) {
			scoreState = Pause;
		}
		break;
	case Multi:
		left.Update(KEY_W, KEY_S); // left rectangle uses W and S
		right.Update(KEY_UP, KEY_DOWN); // right rectangle uses ARROWS

		if (scoreState == Resume) {
			ball.Update();
		}
		else {
			if (GetTime() > timeOfScore + WAIT_Time) {
				scoreState = Resume;
				if (score1 == 3) {
					state = Init;
					score1 = 0;
					score2 = 0;
				}
				if (score2 == 3) {
					state = Init;
					score1 = 0;
					score2 = 0;
				}
			}
		}

		ball.CheckCollision(left.x, left.y, left.width, left.height);
		ball.CheckCollision(right.x, right.y, right.width, right.height);

		if (ball.x + ball.radius > GetScreenWidth()) {
			score1++;
			ball.x = GetScreenWidth() / 2;
			ball.y = GetScreenHeight() / 2;
			timeOfScore = GetTime();
			scoreState = Pause;
			ball.speedX = 5, ball.speedY = 5;
		}
		else if (ball.x - ball.radius < 0) {
			score2++;
			ball.x = GetScreenWidth() / 2;
			ball.y = GetScreenHeight() / 2;
			timeOfScore = GetTime();
			scoreState = Pause;
			ball.speedX = 5, ball.speedY = 5;
		}
		if (score1 == 3) {
			scoreState = Pause;
		}
		else if (score2 == 3) {
			scoreState = Pause;
		}
		break;
	case Exit:
		CloseWindow();
		break;
	}
}
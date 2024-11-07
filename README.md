# pong-game
Pong Game

This is a simple 2D Pong game created using the Raylib library, written in C++. The game allows for both single-player and multi-player modes, where players can control paddles and try to score points by bouncing a ball past the opponent's paddle.
____________________
Features:

- Single-Player Mode: Player vs. AI.
- Multi-Player Mode: Two players can control paddles using keyboard inputs (W/S & UP&DOWN).
Score System: The first player to reach a score of 3 wins the game.
Bouncing Ball: Ball bounces off the top and bottom edges of the screen, and player paddles.
Paddles: Paddles movewith a certain acceleration that speeds up the longer the player moves.
____________________
Requirements:

- Raylib library for rendering and game logic.
- A C++ compiler (GCC, Clang, MSVC, etc.).
- CMake (for building the project).
____________________
Installation:

1. Install Raylib
- Follow the installation instructions for Raylib on their official website. Raylib can be installed on Windows, macOS, and Linux. It may also be installed via package managers like brew (macOS), apt (Linux), or vcpkg (Windows).

2. Clone the repository
- Clone this repository to your local machine:

bash

git clone https://github.com/your-username/pong-game.git
cd pong-game

3. Build the project
- To build the project, you can use CMake:

bash

mkdir build
cd build
cmake ..
make
Alternatively, if you are using an IDE like Visual Studio or CLion, you can open the project directly from the folder and build using the IDE's build functionality.

4. Run the Game:
- After building, you can run the compiled executable:

Windows: pong-game.exe
macOS/Linux: ./pong-game
____________________
Controls:

- Single Player Mode:

Use UP and DOWN keys to move the right paddle up and down.
The left paddle is controlled by the AI.

- Multiplayer Mode:

W and S for the left player.
UP and DOWN for the right player (arrows).

- Menu:

Left click to navigate the main menu and select between Single Player, Multiplayer, or Exit.
____________________
Game Flow:

When the game starts, you'll be presented with the main menu.
You can choose between Single Player, Multiplayer, or Exit.

After choosing a mode, the game will begin, and players will try to hit the ball past the opponent's paddle to score points.
The first player to reach 3 points wins the game.

After a point is scored, a short delay occurs before the ball is served again.

Once a player wins, the game will return to the main menu.
____________________
Game States:

- The game has several states:

- Init: Initial game state where the menu is shown.
- Single: Single-player mode where the right paddle is controlled by the player, and the left paddle is controlled by the AI.
- Multi: Multiplayer mode where both paddles are controlled by players.
- Exit: Exits the game.
____________________
In-Game GIFs:

![pong gif](https://github.com/user-attachments/assets/fce4cc0b-8569-45f3-a3d0-6c18bc05dfb3)
____________________
License:

This project is licensed under the MIT License - see the LICENSE file for details.

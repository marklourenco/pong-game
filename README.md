# Pong Game

This is a simple 2D Pong game created using the [Raylib](https://www.raylib.com/) library, written in C++. The game allows for both single-player and multi-player modes, where players can control paddles and try to score points by bouncing a ball past the opponent's paddle.

## Features

- **Single-Player Mode**: Player vs. AI.
- **Multi-Player Mode**: Two players can control paddles using keyboard inputs.
- **Score System**: The first player to reach a score of 3 wins the game.
- **Bouncing Ball**: Ball bounces off the top and bottom edges of the screen, and player paddles.

## Requirements

- [Raylib](https://www.raylib.com/) library for rendering and game logic.
- A C++ compiler (GCC, Clang, MSVC, etc.).
- CMake (for building the project).

## Installation

### 1. Install Raylib

Follow the installation instructions for Raylib on [their official website](https://www.raylib.com/). Raylib can be installed on Windows, macOS, and Linux. It may also be installed via package managers like `brew` (macOS), `apt` (Linux), or `vcpkg` (Windows).

### 2. Clone the repository

Clone this repository to your local machine:

```bash
git clone https://github.com/marklourenco/pong-game.git
cd pong-game
```

### 3. Build the project

To build the project, you can use **CMake**.

```bash
mkdir build
cd build
cmake ..
make
```

Alternatively, if you are using an IDE like Visual Studio or CLion, you can open the project directly from the folder and build using the IDE's build functionality.

### 4. Run the Game

After building, you can run the compiled executable:

- **Windows**: `pong-game.exe`
- **macOS/Linux**: `./pong-game`

## Controls

- **Single Player Mode**: 
  - Use **W** and **S** keys to move the left paddle up and down.
  - The right paddle is controlled by the AI.

- **Multiplayer Mode**: 
  - **W** and **S** for the left player (up/down).
  - **Arrow Up** and **Arrow Down** for the right player (up/down).

- **Menu**: 
  - Left click to navigate the main menu and select between Single Player, Multiplayer, or Exit.

## Game Flow

1. When the game starts, you'll be presented with the main menu.
2. You can choose between **Single Player**, **Multiplayer**, or **Exit**.
3. After choosing a mode, the game will begin, and players will try to hit the ball past the opponent's paddle to score points.
4. The first player to reach 3 points wins the game.
5. After a point is scored, a short delay occurs before the ball is served again.
6. Once a player wins, the game will return to the main menu.

## Game States

The game has several states:

- **Init**: Initial game state where the menu is shown.
- **Single**: Single-player mode where the left paddle is controlled by the player, and the right paddle is controlled by the AI.
- **Multi**: Multiplayer mode where both paddles are controlled by players.
- **Exit**: Exits the game.

## Screenshots

![pong gif](https://github.com/user-attachments/assets/e386047c-d5f6-40b2-a5bf-7cdaf0d12ab8)

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

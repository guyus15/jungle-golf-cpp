#pragma once

class Game
{
public:
    Game();
    ~Game();

    Game(const Game &other) = delete;
    Game &operator=(const Game &other) = delete;

    Game(Game &&other);
    Game &operator=(Game &&other);

    void Run();
};
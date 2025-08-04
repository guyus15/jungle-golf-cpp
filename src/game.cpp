#include "game.h"

#include <iostream>

Game::Game()
{
    std::cout << "Initialising game...\n";
}

Game::~Game()
{
    std::cout << "Shutting down game...\n";
}

Game::Game(Game &&other)
{
}

Game &Game::operator=(Game &&other)
{
    return *this;
}

void Game::Run()
{
}

#pragma once


#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <SFML/Graphics.hpp>
#include <SFML/System/Vector2.hpp>
#include "SFML/Graphics/RenderWindow.hpp"
#include "SFML/Window/Window.hpp"
#include "rendering.hpp"
#include "primitives/tri.hpp"

void pFrame(float delta);

void Start();

extern int frame;
#pragma once
#include <iostream>
#include "imgui/imgui.h"
#include "imgui/imgui-SFML.h"
#include <SFML/Window.hpp>
#include <memory>
#include "imgui/imgui.h"
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Window/Keyboard.hpp>
#include "../flashEngine/io/Keyboard.h"
#include "../flashEngine/utils/Log.h"

class DebugMenuInit {
private:
    void DebugMenui();
    void IsTabbed();
    Keyboard *keyboardClaz = new Keyboard();

public:
    bool isOpen = false;
    void Init(const std::shared_ptr<sf::RenderWindow> _window);
    void Update(const std::shared_ptr<sf::RenderWindow> _window, sf::Clock *deltaClock);
    void Render(const std::shared_ptr<sf::RenderWindow> _window);
};
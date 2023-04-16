#pragma warning(disable : 4834)
#include "MenuInit.h"
#include <SFML/Window/Keyboard.hpp>

void DebugMenuInit::IsTabbed() {
    if (keyboardClaz->isKeyTapped(sf::Keyboard::Tab)) {
        if (isOpen == false) {
            isOpen = true;
        } else if (isOpen == true) {
            isOpen = false;
        }
    }
}

void DebugMenuInit::DebugMenui() {
    ImGui::Begin("Debug Menu");
    ImGui::End();
}


void DebugMenuInit::Init(const std::shared_ptr<sf::RenderWindow> _window) {
    if (ImGui::SFML::Init(*_window, true)) {
        Log::log("DebugMenuInit::Init() -> ImGui::SFML::Init(window, true) -> initilized succes");
    }
}

void DebugMenuInit::Update(const std::shared_ptr<sf::RenderWindow> _window, sf::Clock *deltaClock) {
    ImGui::SFML::Update(*_window, deltaClock->restart());
    DebugMenuInit::IsTabbed();
    if (isOpen) {
        DebugMenuInit::DebugMenui();
    }
}

void DebugMenuInit::Render(const std::shared_ptr<sf::RenderWindow> _window) {
    ImGui::SFML::Render(*_window);
}
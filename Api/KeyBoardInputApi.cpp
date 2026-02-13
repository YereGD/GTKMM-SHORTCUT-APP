//
// Created by Usuario on 02/07/2024.
//
#include "KeyBoardInputApi.h"
#include "iostream"

std::string KeyBoardInputApi::GetKeyCombination() {
    while (true) {
        if (isKeyPressed(VK_ESCAPE)) {
            break;
        }

        std::string keysPressed;

        for (const auto& key : ImportantKeyNames) {
            if (isKeyPressed(key.first)) {
                keysPressed += key.second + " + ";
            }
        }
        for (int key = 'A'; key <= 'Z'; key++) {
            if (isKeyPressed(key)) {
                keysPressed += static_cast<char>(key);
                break;
            }
            if (!keysPressed.empty() && keysPressed.size() <= 4) {
                std::cout << "Combination detected: " << keysPressed << std::endl;
                keysPressed = keysPressed.substr(0, keysPressed.size() - 3);  // Remove the last " + "
                Sleep(500);  // Prevent multiple detections
            }
        }
        Sleep(50); // Prevent CPU from running too fast
    }
    return nullptr;
}

bool KeyBoardInputApi::isKeyPressed(int vKey) {
    return (GetAsyncKeyState(vKey) & 0x8000) != 0;
}
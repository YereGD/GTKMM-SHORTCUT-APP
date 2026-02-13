//
// Created by Yere on 30/06/2024.
//

#ifndef APPLICATIONGTK_KEYBOARDINPUTAPI_H
#define APPLICATIONGTK_KEYBOARDINPUTAPI_H

#endif //APPLICATIONGTK_KEYBOARDINPUTAPI_H


#include <map>
#include <string>
#include <windows.h>


class KeyBoardInputApi{
public:
    std::string GetKeyCombination();

private:
    std::map<int, std::string> ImportantKeyNames = {
            {VK_CONTROL, "Ctrl"},
            {VK_SHIFT, "Shift"},
            {VK_MENU, "Alt"},
            {VK_LWIN, "Left Win"},
            {VK_RWIN, "Right Win"}
            };

    static bool isKeyPressed(int vKey);
};

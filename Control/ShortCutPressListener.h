//
// Created by Usuario on 03/07/2024.
//

#ifndef APPLICATIONGTKMM_SHORTCUTPRESSLISTENER_H
#define APPLICATIONGTKMM_SHORTCUTPRESSLISTENER_H


#include "../Model/ShortCutAndApp.h"
#include "../Api/KeyBoardInputApi.h"

class ShortCutPressListener : public KeyBoardInputApi {
    ShortCutAndApp* shortCutAndApps;
public:
    explicit ShortCutPressListener(ShortCutAndApp *shortCutAndApps);

private:
    void listen();
};


#endif //APPLICATIONGTKMM_SHORTCUTPRESSLISTENER_H

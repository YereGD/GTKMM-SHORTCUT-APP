//
// Created by Yere on 03/07/2024.
//

#ifndef APPLICATIONGTKMM_OWNSHORTCUTWINDOW_H
#define APPLICATIONGTKMM_OWNSHORTCUTWINDOW_H


#include <gtkmm/window.h>
#include <gtkmm/box.h>
#include "BoxButtonsContainer.h"
#include "../Api/FileExePicker.h"
#include "../Control/ShortCutPressListener.h"

class OwnShortCutWindow : public Gtk::Window {
private:
    FileExePicker fileExePicker;
    Gtk::Box BoxBoxContainer;
    ShortCutAndApp shortCutAndApps[6];
    BoxButtonsContainer boxButtonsContainer[6];
    ShortCutPressListener shortCutPressListener = ShortCutPressListener(shortCutAndApps);
public:
    OwnShortCutWindow();

};


#endif //APPLICATIONGTKMM_OWNSHORTCUTWINDOW_H

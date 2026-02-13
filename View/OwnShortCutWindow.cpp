//
// Created by Yeremay on 03/07/2024.
//

#include "OwnShortCutWindow.h"

OwnShortCutWindow::OwnShortCutWindow() {
    // WINDOW APP CONFIGURATION
    this->set_title("BindApp");
    this->set_icon_from_file("Assets/keyboard-shortcut-icon-2048x2040-41lbm0wr.png");
    this->set_resizable(true);
    BoxBoxContainer.set_orientation(Gtk::Orientation::ORIENTATION_HORIZONTAL);
    this->add(BoxBoxContainer);
    for (int i = 0; i < 6; i++) {
        boxButtonsContainer[i].setShortCutAndApp(shortCutAndApps[i]);
        this->BoxBoxContainer.pack_start(boxButtonsContainer[i]);
    }
    //BackGround Color of the window
    Gdk::RGBA color;
    color.set("rgb(237, 231, 225)");
    this->override_background_color(color);
    //Showing widgets
    this->show_all_children();
}
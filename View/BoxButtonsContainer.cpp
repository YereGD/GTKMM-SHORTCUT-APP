#include "BoxButtonsContainer.h"
#include "iostream"


BoxButtonsContainer::BoxButtonsContainer() {
    this->set_orientation(Gtk::Orientation::ORIENTATION_VERTICAL);
    this->pack_start(buttons[0]);
    this->pack_start(buttons[1]);
    this->buttons[0].add_pixlabel("Assets/app-generic-icon-512x512-p31mjxcd-Resized.png","Set App to Launch");
    this->buttons[1].add_pixlabel("Assets/shortcut_120284-Resized.png","Set the ShortCut");
    this->buttons[0].signal_clicked().connect(sigc::mem_fun(*this,&BoxButtonsContainer::on_bottom_click_Set_ShortCut));
    this->buttons[1].signal_clicked().connect(sigc::mem_fun(*this,&BoxButtonsContainer::on_bottom_click_Set_App)); 
}

void BoxButtonsContainer::on_bottom_click_Set_App() {
    std::cout << "Choosing PathToApp";
}

void BoxButtonsContainer::on_bottom_click_Set_ShortCut() {
    std::cout << "Choosing ShortCut";
}



void BoxButtonsContainer::setShortCutAndApp(const ShortCutAndApp &shortCutAndApp) {
    BoxButtonsContainer::shortCutAndApp = shortCutAndApp;
}

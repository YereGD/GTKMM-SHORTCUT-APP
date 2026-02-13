#ifndef APPLICATIONGTKMM_BOXBUTTONSCONTAINER_H
#define APPLICATIONGTKMM_BOXBUTTONSCONTAINER_H

#include <gtkmm/box.h>
#include <gtkmm/button.h>
#include "../Model/ShortCutAndApp.h"

class BoxButtonsContainer : public Gtk::Box {
private:
    ShortCutAndApp shortCutAndApp;
    Gtk::Button buttons[2];

public:
    BoxButtonsContainer();

    void setShortCutAndApp(const ShortCutAndApp &shortCutAndApp);

protected:
    //Handlers:
    void on_bottom_click_Set_App();

    void on_bottom_click_Set_ShortCut();


};


#endif //APPLICATIONGTKMM_BOXBUTTONSCONTAINER_H

#include "View/BoxButtonsContainer.h"
#include "View/OwnShortCutWindow.h"

int main(int argc, char** argv)
{
    g_setenv ("GTK_CSD", "0", FALSE);  // Use Native TitleBar of Windows OS
    auto app = Gtk::Application::create(argc, argv);
    OwnShortCutWindow MainWindow;
    // Setting Size of window
    MainWindow.set_default_size(1024,240);
    return app->run(MainWindow);
    
}
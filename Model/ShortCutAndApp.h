//
// Created by Usuario on 03/07/2024.
//

#ifndef APPLICATIONGTKMM_SHORTCUTANDAPP_H
#define APPLICATIONGTKMM_SHORTCUTANDAPP_H


#include <string>

class ShortCutAndApp {
private:
    std::string AppPath;
    std::string ShortCut;
public:
    const std::string &getAppPath() const;

    void setAppPath(const std::string &appPath);

    const std::string &getShortCut() const;

    void setShortCut(const std::string &shortCut);


};


#endif //APPLICATIONGTKMM_SHORTCUTANDAPP_H

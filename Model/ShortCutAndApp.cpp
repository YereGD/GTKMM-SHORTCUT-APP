#include "ShortCutAndApp.h"

const std::string &ShortCutAndApp::getAppPath() const {
    return AppPath;
}

void ShortCutAndApp::setAppPath(const std::string &appPath) {
    AppPath = appPath;
}

const std::string &ShortCutAndApp::getShortCut() const {
    return ShortCut;
}

void ShortCutAndApp::setShortCut(const std::string &shortCut) {
    ShortCut = shortCut;
}

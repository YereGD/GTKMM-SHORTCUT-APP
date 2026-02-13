//
// Created by Usuario on 03/07/2024.
//

#include <iostream>
#include "FileExePicker.h"

std::string FileExePicker::GetExePath() {
    char szFileName[MAX_PATH] = "";
    ZeroMemory(&ofn, sizeof(ofn));
    ofn.lStructSize = sizeof(ofn);
    ofn.hwndOwner = hwnd;
    ofn.lpstrFilter = "Text Files (*.exe)\0*.exe\0All Files (*.*)\0*.*\0";
    ofn.lpstrFile = szFileName;
    ofn.nMaxFile = MAX_PATH;
    ofn.Flags = OFN_EXPLORER | OFN_FILEMUSTEXIST | OFN_HIDEREADONLY;
    ofn.lpstrDefExt = "exe";
    if(GetOpenFileName(&ofn))
    {
        return ofn.lpstrFile;
    }
    return "";
}
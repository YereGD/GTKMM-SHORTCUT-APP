//
// Created by Usuario on 03/07/2024.
//

#ifndef APPLICATIONGTKMM_FILEEXEPICKER_H
#define APPLICATIONGTKMM_FILEEXEPICKER_H



#include <windows.h>
#include <string>



class FileExePicker {

private:
    OPENFILENAME ofn;
    HWND hwnd;
public:
    std::string GetExePath();
};


#endif //APPLICATIONGTKMM_FILEEXEPICKER_H

#ifndef TEXTEDITOR_H
#define TEXTEDITOR_H

#include <vector>
#include <string>
#include <ncurses.h>

class TextEditor {
public:
    TextEditor();
    ~TextEditor();
    void run();
private:
    std::vector<std::string> textBuff;
    int currLine,currCol;
    int maxH, maxW;

};
#endif

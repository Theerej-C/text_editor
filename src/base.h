#ifndef TEXTEDITOR_H
#define TEXTEDITOR_H

#include <vector>
#include <string>
#include <ncurses.h>

class TextEditor {
public:
    TextEditor(const std::string &fileName);
    ~TextEditor();
    void run();
private:
    std::vector<std::string> textBuff;
    int currLine,currCol;
    int maxH, maxW;
    std::string fileName;
void fileOpen();
void displayContent();
void editContent();
void saveFile();
};
#endif

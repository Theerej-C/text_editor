#include "base.h"
#include <cstddef>
#include <fstream>
#include <string>
#include <ncurses.h>
#include <iostream>
TextEditor::TextEditor(const std::string &fileName){
    this->fileName = fileName;
     std::cout << "Initializing Text Editor..." << std::flush;  // Debug message
        initscr();  // Initialize ncurses
        if (std::cout.fail()) {  // Check if output is buffered
            std::cerr << "Error initializing ncurses" << std::endl;
            return; // Handle initialization failure
        }
        cbreak();  // Disable line buffering
        noecho();
        keypad(stdscr, TRUE);  // Enable special keys
        scrollok(stdscr, TRUE);  // Enable scrolling
        printw("Text Editor Initialized. Press any key to exit.");  // Display a message
        refresh();  
}

TextEditor::~TextEditor(){
    endwin();
}

void TextEditor::run(){
    fileOpen();
    displayContent();
}

void TextEditor::fileOpen(){
    std::ifstream file(fileName);
    if(file.is_open()){
        std::string line;
        while(std::getline(file,line)){
            textBuff.push_back(line);
        }
        file.close();
    }
}

void TextEditor::displayContent(){
    clear();
    for(size_t i=0;i<textBuff.size();++i){
        mvprintw(i, 0, textBuff[i].c_str());
    }
    refresh();
}
void TextEditor::editContent(){
}
void TextEditor::saveFile(){
}

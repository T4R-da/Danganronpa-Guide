#include <iostream>
#include <fstream>
#include <string>
#include "guides.hpp"

using namespace std;

string GetFileContents(const string &file_path)
{
    ifstream fstream(file_path);

    if (!fstream)
    {
        cout << "Couldn't open file " << file_path << endl;
        return "";
    }

    string file_contents = "";
    string line_buff;

    while (getline(fstream, line_buff))
    {
        file_contents += "\n" + line_buff;
    }

    fstream.close();

    return file_contents;
}

string GetGuide(int game, int chapter, int part)
{
    string path;

    if (chapter == 0) {
        // Prologue: no parts, just the single file
        path = "resources/GamexChapterx/Game" + to_string(game) + "chapter0.txt";
    } else {
        // Chapters 1-6: stored in subfolders with parts
        path = "resources/GamexChapterx/Game" + to_string(game)
             + "Chapter" + to_string(chapter)
             + "Partx/Part" + to_string(part) + ".txt";
    }

    return GetFileContents(path);
}

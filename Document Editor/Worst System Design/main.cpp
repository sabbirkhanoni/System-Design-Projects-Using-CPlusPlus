#include <bits/stdc++.h>
using namespace std;
#include "DocumentEditor.cpp"

int main()
{
    DocumentEditor editor;
    editor.addText("Hello, this is a sample document.");
    editor.addImage("image1.png");
    editor.addText("This is another paragraph.");
    editor.addImage("image2.png");
    cout << editor.renderDoc() << endl;
    editor.saveToFile();

    return 0;
}

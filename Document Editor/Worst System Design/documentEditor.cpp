
#include <bits/stdc++.h>
using namespace std;

class DocumentEditor
{
private:
    vector<string> docElements;
    string renderDocument;

public:
    void addText(string text)
    {
        docElements.push_back(text);
    }
    void addImage(string imagePath)
    {
        docElements.push_back(imagePath);
    }

    string renderDoc()
    {
        if (!docElements.empty())
        {
            string result;
            for (auto &element : docElements)
            {
                if (element.size() > 4 && element.substr(element.size() - 4) == ".png")
                {
                    result += "[Image: " + element + "]\n"; // Added colon & newline for clarity
                }
                else
                {
                    result += element + "\n";
                }
            }
            renderDocument = result;
        }
        else
        {
            renderDocument = "Document is empty.\n";
        }

        return renderDocument;
    }


    void saveToFile()
    {
        ofstream file("document.txt");
        if (file.is_open())
        {
            file << renderDoc();
            file.close();
            cout << "Document saved to document.txt" << endl;
        }
        else
        {
            cout << "Unable to open file" << endl;
        }
    }
};

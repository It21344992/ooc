#pragma once

#include <string>
using namespace std;

class WorkMaterials{
protected:
char workMaterialsID;
char workMaterialsName;
char WMFile;

public:
WorkMaterials();
WorkMaterials(char pworkMaterialsName, char pworkMaterialsID, char pWMFile);
void displayWorkMaterials();
void setWMFile();
~WorkMaterials();
};


#include "workMaterials.h"
#include <string>
#include <iostream>
using namespace std;

WorkMaterials::WorkMaterials()
{
  strcpy(workMaterialsID,"");
  strcpy(workMaterialsName,"");
  strcpy(WMFile,"");
}

WorkMaterials::WorkMaterials(char pworkMaterialsID , char pworkMaterialsName, char pWMFile)
{
  strcpy(workMaterialsID, pworkMaterialsID);
  strcpy(workMaterialsName,pworkMaterialsName);
  strcpy(WMFile,pWMFile);
}
void WorkMaterials::displayWorkMaterials()
{
  
}
void WorkMaterials::setWMFile()
{
  
}
WorkMaterials::~WorkMaterials()
{
  //Destructor
  cout << "Work Material Destroyed" << endl;
}

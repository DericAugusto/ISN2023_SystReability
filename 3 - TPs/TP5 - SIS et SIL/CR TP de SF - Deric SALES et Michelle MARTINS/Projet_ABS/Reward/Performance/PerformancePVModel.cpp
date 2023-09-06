#include "PerformancePVModel.h"

PerformancePVModel::PerformancePVModel(bool expandTimeArrays) {
  TheModel=new Modele_DysfonctionnelSAN();
  DefineName("PerformancePVModel");
  CreatePVList(0, expandTimeArrays);
  Initialize();
}



PerformanceVariableNode* PerformancePVModel::createPVNode(int pvindex, int timeindex) {
  switch(pvindex) {
  }
  return NULL;
}

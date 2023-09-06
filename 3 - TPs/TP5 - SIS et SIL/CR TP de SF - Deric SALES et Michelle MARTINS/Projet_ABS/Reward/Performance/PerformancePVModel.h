#ifndef _PERFORMANCE_PVMODEL_
#define _PERFORMANCE_PVMODEL_
#include "PerformancePVNodes.h"
#include "Cpp/Performance_Variables/PVModel.hpp"
#include "/Atomic/Modele_Dysfonctionnel/Modele_DysfonctionnelSAN.h"
class PerformancePVModel:public PVModel {
 protected:
  PerformanceVariableNode *createPVNode(int pvindex, int timeindex);
 public:
  PerformancePVModel(bool expandtimepoints);
};

#endif

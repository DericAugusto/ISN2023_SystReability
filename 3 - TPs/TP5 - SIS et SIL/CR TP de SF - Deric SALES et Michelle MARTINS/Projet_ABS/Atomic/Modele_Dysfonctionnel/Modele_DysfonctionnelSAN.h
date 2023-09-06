#ifndef Modele_DysfonctionnelSAN_H_
#define Modele_DysfonctionnelSAN_H_

#include "Cpp/BaseClasses/EmptyGroup.h"
#include "Cpp/BaseClasses/GlobalVariables.h"
#include "Cpp/BaseClasses/PreselectGroup.h"
#include "Cpp/BaseClasses/PostselectGroup.h"
#include "Cpp/BaseClasses/state/StructStateVariable.h"
#include "Cpp/BaseClasses/state/ArrayStateVariable.h"
#include "Cpp/BaseClasses/SAN/SANModel.h" 
#include "Cpp/BaseClasses/SAN/Place.h"
#include "Cpp/BaseClasses/SAN/ExtendedPlace.h"
extern Float alpha;
extern Float beta1;
extern Float beta2;
extern Float beta3;
extern Float lambda;
extern Float mu1;
extern Float mu2;
extern Float sigma;
extern Float var_initiale;
extern UserDistributions* TheDistribution;

void MemoryError();


/*********************************************************************
               Modele_DysfonctionnelSAN Submodel Definition                   
*********************************************************************/

class Modele_DysfonctionnelSAN:public SANModel{
public:

class Instantaneous_Activity1_2Activity:public Activity {
public:

  Place* Donnees_Piston_2;
  short* Donnees_Piston_2_Mobius_Mark;
  Place* Donnees_Capteur_2;
  short* Donnees_Capteur_2_Mobius_Mark;
  Place* Calculateur_2;
  short* Calculateur_2_Mobius_Mark;

  double* TheDistributionParameters;
  Instantaneous_Activity1_2Activity();
  double Rate(){return 0;}
  bool Enabled();
  void LinkVariables();
  double Weight();
  bool ReactivationPredicate();
  bool ReactivationFunction();
  double SampleDistribution();
  double* ReturnDistributionParameters();
  int Rank();
  BaseActionClass* Fire();
}; // Instantaneous_Activity1_2ActivityActivity

class Boucle_2Activity:public Activity {
public:

  Place* Frein_2;
  short* Frein_2_Mobius_Mark;
  Place* Pedale_2;
  short* Pedale_2_Mobius_Mark;

  double* TheDistributionParameters;
  Boucle_2Activity();
  double Rate(){return 0;}
  bool Enabled();
  void LinkVariables();
  double Weight();
  bool ReactivationPredicate();
  bool ReactivationFunction();
  double SampleDistribution();
  double* ReturnDistributionParameters();
  int Rank();
  BaseActionClass* Fire();
}; // Boucle_2ActivityActivity

class Actionner_Piston_2Activity:public Activity {
public:

  Place* Piston_2;
  short* Piston_2_Mobius_Mark;
  Place* Maitre_Cylindre_2;
  short* Maitre_Cylindre_2_Mobius_Mark;
  Place* Reservoir_2;
  short* Reservoir_2_Mobius_Mark;
  Place* Liquide_Frein_2;
  short* Liquide_Frein_2_Mobius_Mark;

  double* TheDistributionParameters;
  Actionner_Piston_2Activity();
  ~Actionner_Piston_2Activity();
  double Rate(){return 0;}
  bool Enabled();
  void LinkVariables();
  double Weight();
  bool ReactivationPredicate();
  bool ReactivationFunction();
  double SampleDistribution();
  double* ReturnDistributionParameters();
  int Rank();
  BaseActionClass* Fire();
  double LognormalParamMu();
  double LognormalParamAlpha_Squared();
}; // Actionner_Piston_2ActivityActivity

class T_Cylindre_2Activity:public Activity {
public:

  Place* Maitre_Cylindre_2;
  short* Maitre_Cylindre_2_Mobius_Mark;
  Place* Donnees_Piston_2;
  short* Donnees_Piston_2_Mobius_Mark;

  double* TheDistributionParameters;
  T_Cylindre_2Activity();
  ~T_Cylindre_2Activity();
  double Rate(){return 0;}
  bool Enabled();
  void LinkVariables();
  double Weight();
  bool ReactivationPredicate();
  bool ReactivationFunction();
  double SampleDistribution();
  double* ReturnDistributionParameters();
  int Rank();
  BaseActionClass* Fire();
  double LognormalParamMu();
  double LognormalParamAlpha_Squared();
}; // T_Cylindre_2ActivityActivity

class T_Reservoir_2Activity:public Activity {
public:

  Place* Reservoir_2;
  short* Reservoir_2_Mobius_Mark;
  Place* Donnees_Piston_2;
  short* Donnees_Piston_2_Mobius_Mark;

  double* TheDistributionParameters;
  T_Reservoir_2Activity();
  ~T_Reservoir_2Activity();
  double Rate(){return 0;}
  bool Enabled();
  void LinkVariables();
  double Weight();
  bool ReactivationPredicate();
  bool ReactivationFunction();
  double SampleDistribution();
  double* ReturnDistributionParameters();
  int Rank();
  BaseActionClass* Fire();
  double LognormalParamMu();
  double LognormalParamAlpha_Squared();
}; // T_Reservoir_2ActivityActivity

class T_Liquide_Frein_2Activity:public Activity {
public:

  Place* Liquide_Frein_2;
  short* Liquide_Frein_2_Mobius_Mark;
  Place* Donnees_Piston_2;
  short* Donnees_Piston_2_Mobius_Mark;

  double* TheDistributionParameters;
  T_Liquide_Frein_2Activity();
  ~T_Liquide_Frein_2Activity();
  double Rate(){return 0;}
  bool Enabled();
  void LinkVariables();
  double Weight();
  bool ReactivationPredicate();
  bool ReactivationFunction();
  double SampleDistribution();
  double* ReturnDistributionParameters();
  int Rank();
  BaseActionClass* Fire();
  double LognormalParamMu();
  double LognormalParamAlpha_Squared();
}; // T_Liquide_Frein_2ActivityActivity

class Actionner_Pedale_2Activity:public Activity {
public:

  Place* Pedale_2;
  short* Pedale_2_Mobius_Mark;
  Place* Piston_2;
  short* Piston_2_Mobius_Mark;
  Place* Capteur_de_Vitesse_2;
  short* Capteur_de_Vitesse_2_Mobius_Mark;

  double* TheDistributionParameters;
  Actionner_Pedale_2Activity();
  ~Actionner_Pedale_2Activity();
  double Rate(){return 0;}
  bool Enabled();
  void LinkVariables();
  double Weight();
  bool ReactivationPredicate();
  bool ReactivationFunction();
  double SampleDistribution();
  double* ReturnDistributionParameters();
  int Rank();
  BaseActionClass* Fire();
  double LognormalParamMu();
  double LognormalParamAlpha_Squared();
}; // Actionner_Pedale_2ActivityActivity

class Envoyer_Donnees_Capteur_2Activity:public Activity {
public:

  Place* Capteur_de_Vitesse_2;
  short* Capteur_de_Vitesse_2_Mobius_Mark;
  Place* Donnees_Capteur_2;
  short* Donnees_Capteur_2_Mobius_Mark;

  double* TheDistributionParameters;
  Envoyer_Donnees_Capteur_2Activity();
  ~Envoyer_Donnees_Capteur_2Activity();
  double Rate(){return 0;}
  bool Enabled();
  void LinkVariables();
  double Weight();
  bool ReactivationPredicate();
  bool ReactivationFunction();
  double SampleDistribution();
  double* ReturnDistributionParameters();
  int Rank();
  BaseActionClass* Fire();
  double LognormalParamMu();
  double LognormalParamAlpha_Squared();
}; // Envoyer_Donnees_Capteur_2ActivityActivity

class T_Calculateur_2Activity_case1:public Activity {
public:

  Place* Calculateur_2;
  short* Calculateur_2_Mobius_Mark;
  Place* Actionneur_2;
  short* Actionneur_2_Mobius_Mark;

  double* TheDistributionParameters;
  T_Calculateur_2Activity_case1();
  ~T_Calculateur_2Activity_case1();
  double Rate(){return 0;}
  bool Enabled();
  void LinkVariables();
  double Weight();
  bool ReactivationPredicate();
  bool ReactivationFunction();
  double SampleDistribution();
  double* ReturnDistributionParameters();
  int Rank();
  BaseActionClass* Fire();
  double LognormalParamMu();
  double LognormalParamAlpha_Squared();
}; // T_Calculateur_2Activity_case1Activity

class T_Calculateur_2Activity_case2:public Activity {
public:

  Place* Calculateur_2;
  short* Calculateur_2_Mobius_Mark;
  Place* Plaquette_2;
  short* Plaquette_2_Mobius_Mark;

  double* TheDistributionParameters;
  T_Calculateur_2Activity_case2();
  ~T_Calculateur_2Activity_case2();
  double Rate(){return 0;}
  bool Enabled();
  void LinkVariables();
  double Weight();
  bool ReactivationPredicate();
  bool ReactivationFunction();
  double SampleDistribution();
  double* ReturnDistributionParameters();
  int Rank();
  BaseActionClass* Fire();
  double LognormalParamMu();
  double LognormalParamAlpha_Squared();
}; // T_Calculateur_2Activity_case2Activity

class T_Plaquette_2Activity:public Activity {
public:

  Place* Plaquette_2;
  short* Plaquette_2_Mobius_Mark;
  Place* Disque_2;
  short* Disque_2_Mobius_Mark;

  double* TheDistributionParameters;
  T_Plaquette_2Activity();
  ~T_Plaquette_2Activity();
  double Rate(){return 0;}
  bool Enabled();
  void LinkVariables();
  double Weight();
  bool ReactivationPredicate();
  bool ReactivationFunction();
  double SampleDistribution();
  double* ReturnDistributionParameters();
  int Rank();
  BaseActionClass* Fire();
  double LognormalParamMu();
  double LognormalParamAlpha_Squared();
}; // T_Plaquette_2ActivityActivity

class T_Disque_2Activity:public Activity {
public:

  Place* Disque_2;
  short* Disque_2_Mobius_Mark;
  Place* Frein_2;
  short* Frein_2_Mobius_Mark;

  double* TheDistributionParameters;
  T_Disque_2Activity();
  ~T_Disque_2Activity();
  double Rate(){return 0;}
  bool Enabled();
  void LinkVariables();
  double Weight();
  bool ReactivationPredicate();
  bool ReactivationFunction();
  double SampleDistribution();
  double* ReturnDistributionParameters();
  int Rank();
  BaseActionClass* Fire();
  double LognormalParamMu();
  double LognormalParamAlpha_Squared();
}; // T_Disque_2ActivityActivity

class T_Actionneur_2Activity:public Activity {
public:

  Place* Actionneur_2;
  short* Actionneur_2_Mobius_Mark;
  Place* Valve_2;
  short* Valve_2_Mobius_Mark;

  double* TheDistributionParameters;
  T_Actionneur_2Activity();
  ~T_Actionneur_2Activity();
  double Rate(){return 0;}
  bool Enabled();
  void LinkVariables();
  double Weight();
  bool ReactivationPredicate();
  bool ReactivationFunction();
  double SampleDistribution();
  double* ReturnDistributionParameters();
  int Rank();
  BaseActionClass* Fire();
  double LognormalParamMu();
  double LognormalParamAlpha_Squared();
}; // T_Actionneur_2ActivityActivity

class T_Valve_2Activity:public Activity {
public:

  Place* Valve_2;
  short* Valve_2_Mobius_Mark;
  Place* Plaquette_2;
  short* Plaquette_2_Mobius_Mark;

  double* TheDistributionParameters;
  T_Valve_2Activity();
  ~T_Valve_2Activity();
  double Rate(){return 0;}
  bool Enabled();
  void LinkVariables();
  double Weight();
  bool ReactivationPredicate();
  bool ReactivationFunction();
  double SampleDistribution();
  double* ReturnDistributionParameters();
  int Rank();
  BaseActionClass* Fire();
  double LognormalParamMu();
  double LognormalParamAlpha_Squared();
}; // T_Valve_2ActivityActivity

class Rupture_MecaniqueActivity:public Activity {
public:

  Place* Pedale_2;
  short* Pedale_2_Mobius_Mark;
  Place* Pedale_dys;
  short* Pedale_dys_Mobius_Mark;

  double* TheDistributionParameters;
  Rupture_MecaniqueActivity();
  ~Rupture_MecaniqueActivity();
  double Rate(){return 0;}
  bool Enabled();
  void LinkVariables();
  double Weight();
  bool ReactivationPredicate();
  bool ReactivationFunction();
  double SampleDistribution();
  double* ReturnDistributionParameters();
  int Rank();
  BaseActionClass* Fire();
  double WeibullParamAlpha();
  double WeibullParamBeta();
}; // Rupture_MecaniqueActivityActivity

class Grippage_PistonActivity:public Activity {
public:

  Place* Piston_2;
  short* Piston_2_Mobius_Mark;
  Place* Piston_dys;
  short* Piston_dys_Mobius_Mark;

  double* TheDistributionParameters;
  Grippage_PistonActivity();
  ~Grippage_PistonActivity();
  double Rate(){return 0;}
  bool Enabled();
  void LinkVariables();
  double Weight();
  bool ReactivationPredicate();
  bool ReactivationFunction();
  double SampleDistribution();
  double* ReturnDistributionParameters();
  int Rank();
  BaseActionClass* Fire();
  double WeibullParamAlpha();
  double WeibullParamBeta();
}; // Grippage_PistonActivityActivity

class Problemes_FluiditeActivity:public Activity {
public:

  Place* Liquide_Frein_2;
  short* Liquide_Frein_2_Mobius_Mark;
  Place* Liquide_Frein_dys;
  short* Liquide_Frein_dys_Mobius_Mark;

  double* TheDistributionParameters;
  Problemes_FluiditeActivity();
  ~Problemes_FluiditeActivity();
  double Rate(){return 0;}
  bool Enabled();
  void LinkVariables();
  double Weight();
  bool ReactivationPredicate();
  bool ReactivationFunction();
  double SampleDistribution();
  double* ReturnDistributionParameters();
  int Rank();
  BaseActionClass* Fire();
  double WeibullParamAlpha();
  double WeibullParamBeta();
}; // Problemes_FluiditeActivityActivity

class Problemes_LubrificationActivity:public Activity {
public:

  Place* Liquide_Frein_2;
  short* Liquide_Frein_2_Mobius_Mark;
  Place* Liquide_Frein_dys;
  short* Liquide_Frein_dys_Mobius_Mark;

  double* TheDistributionParameters;
  Problemes_LubrificationActivity();
  ~Problemes_LubrificationActivity();
  double Rate(){return 0;}
  bool Enabled();
  void LinkVariables();
  double Weight();
  bool ReactivationPredicate();
  bool ReactivationFunction();
  double SampleDistribution();
  double* ReturnDistributionParameters();
  int Rank();
  BaseActionClass* Fire();
  double WeibullParamAlpha();
  double WeibullParamBeta();
}; // Problemes_LubrificationActivityActivity

class Fissuration_ReservoirActivity:public Activity {
public:

  Place* Reservoir_2;
  short* Reservoir_2_Mobius_Mark;
  Place* Reservoir_dys;
  short* Reservoir_dys_Mobius_Mark;

  double* TheDistributionParameters;
  Fissuration_ReservoirActivity();
  ~Fissuration_ReservoirActivity();
  double Rate(){return 0;}
  bool Enabled();
  void LinkVariables();
  double Weight();
  bool ReactivationPredicate();
  bool ReactivationFunction();
  double SampleDistribution();
  double* ReturnDistributionParameters();
  int Rank();
  BaseActionClass* Fire();
  double WeibullParamAlpha();
  double WeibullParamBeta();
}; // Fissuration_ReservoirActivityActivity

class Grippage_Maitre_CylindreActivity:public Activity {
public:

  Place* Maitre_Cylindre_2;
  short* Maitre_Cylindre_2_Mobius_Mark;
  Place* Maitre_Cylindre_dys;
  short* Maitre_Cylindre_dys_Mobius_Mark;

  double* TheDistributionParameters;
  Grippage_Maitre_CylindreActivity();
  ~Grippage_Maitre_CylindreActivity();
  double Rate(){return 0;}
  bool Enabled();
  void LinkVariables();
  double Weight();
  bool ReactivationPredicate();
  bool ReactivationFunction();
  double SampleDistribution();
  double* ReturnDistributionParameters();
  int Rank();
  BaseActionClass* Fire();
  double WeibullParamAlpha();
  double WeibullParamBeta();
}; // Grippage_Maitre_CylindreActivityActivity

class Rupture_Fil_LiaisonActivity:public Activity {
public:

  Place* Capteur_de_Vitesse_2;
  short* Capteur_de_Vitesse_2_Mobius_Mark;
  Place* Capteur_dys;
  short* Capteur_dys_Mobius_Mark;

  double* TheDistributionParameters;
  Rupture_Fil_LiaisonActivity();
  ~Rupture_Fil_LiaisonActivity();
  bool Enabled();
  void LinkVariables();
  double Weight();
  bool ReactivationPredicate();
  bool ReactivationFunction();
  double SampleDistribution();
  double* ReturnDistributionParameters();
  int Rank();
  BaseActionClass* Fire();
  double Rate();
}; // Rupture_Fil_LiaisonActivityActivity

class Donnees_AberrantesActivity:public Activity {
public:

  Place* Calculateur_2;
  short* Calculateur_2_Mobius_Mark;
  Place* Calculateur_dys;
  short* Calculateur_dys_Mobius_Mark;

  double* TheDistributionParameters;
  Donnees_AberrantesActivity();
  ~Donnees_AberrantesActivity();
  bool Enabled();
  void LinkVariables();
  double Weight();
  bool ReactivationPredicate();
  bool ReactivationFunction();
  double SampleDistribution();
  double* ReturnDistributionParameters();
  int Rank();
  BaseActionClass* Fire();
  double Rate();
}; // Donnees_AberrantesActivityActivity

class Problemes_Entree_SortieActivity:public Activity {
public:

  Place* Calculateur_2;
  short* Calculateur_2_Mobius_Mark;
  Place* Calculateur_dys;
  short* Calculateur_dys_Mobius_Mark;

  double* TheDistributionParameters;
  Problemes_Entree_SortieActivity();
  ~Problemes_Entree_SortieActivity();
  bool Enabled();
  void LinkVariables();
  double Weight();
  bool ReactivationPredicate();
  bool ReactivationFunction();
  double SampleDistribution();
  double* ReturnDistributionParameters();
  int Rank();
  BaseActionClass* Fire();
  double Rate();
}; // Problemes_Entree_SortieActivityActivity

class Deifallance_Systeme_OperationActivity:public Activity {
public:

  Place* Calculateur_2;
  short* Calculateur_2_Mobius_Mark;
  Place* Calculateur_dys;
  short* Calculateur_dys_Mobius_Mark;

  double* TheDistributionParameters;
  Deifallance_Systeme_OperationActivity();
  ~Deifallance_Systeme_OperationActivity();
  bool Enabled();
  void LinkVariables();
  double Weight();
  bool ReactivationPredicate();
  bool ReactivationFunction();
  double SampleDistribution();
  double* ReturnDistributionParameters();
  int Rank();
  BaseActionClass* Fire();
  double Rate();
}; // Deifallance_Systeme_OperationActivityActivity

class Court_Circuit_BobineActivity:public Activity {
public:

  Place* Actionneur_2;
  short* Actionneur_2_Mobius_Mark;
  Place* Actionneur_dys;
  short* Actionneur_dys_Mobius_Mark;

  double* TheDistributionParameters;
  Court_Circuit_BobineActivity();
  ~Court_Circuit_BobineActivity();
  bool Enabled();
  void LinkVariables();
  double Weight();
  bool ReactivationPredicate();
  bool ReactivationFunction();
  double SampleDistribution();
  double* ReturnDistributionParameters();
  int Rank();
  BaseActionClass* Fire();
  double Rate();
}; // Court_Circuit_BobineActivityActivity

class Grippage_ValveActivity:public Activity {
public:

  Place* Valve_2;
  short* Valve_2_Mobius_Mark;
  Place* Valve_dys;
  short* Valve_dys_Mobius_Mark;

  double* TheDistributionParameters;
  Grippage_ValveActivity();
  ~Grippage_ValveActivity();
  double Rate(){return 0;}
  bool Enabled();
  void LinkVariables();
  double Weight();
  bool ReactivationPredicate();
  bool ReactivationFunction();
  double SampleDistribution();
  double* ReturnDistributionParameters();
  int Rank();
  BaseActionClass* Fire();
  double WeibullParamAlpha();
  double WeibullParamBeta();
}; // Grippage_ValveActivityActivity

class FuiteActivity:public Activity {
public:

  Place* Valve_2;
  short* Valve_2_Mobius_Mark;
  Place* Valve_dys;
  short* Valve_dys_Mobius_Mark;

  double* TheDistributionParameters;
  FuiteActivity();
  ~FuiteActivity();
  double Rate(){return 0;}
  bool Enabled();
  void LinkVariables();
  double Weight();
  bool ReactivationPredicate();
  bool ReactivationFunction();
  double SampleDistribution();
  double* ReturnDistributionParameters();
  int Rank();
  BaseActionClass* Fire();
  double WeibullParamAlpha();
  double WeibullParamBeta();
}; // FuiteActivityActivity

class Usure_PlaquettesActivity:public Activity {
public:

  Place* Plaquette_2;
  short* Plaquette_2_Mobius_Mark;
  Place* Plaquettes_dys;
  short* Plaquettes_dys_Mobius_Mark;

  double* TheDistributionParameters;
  Usure_PlaquettesActivity();
  ~Usure_PlaquettesActivity();
  double Rate(){return 0;}
  bool Enabled();
  void LinkVariables();
  double Weight();
  bool ReactivationPredicate();
  bool ReactivationFunction();
  double SampleDistribution();
  double* ReturnDistributionParameters();
  int Rank();
  BaseActionClass* Fire();
  double WeibullParamAlpha();
  double WeibullParamBeta();
}; // Usure_PlaquettesActivityActivity

class Verification_Disques_FreinActivity:public Activity {
public:

  Place* Disque_2;
  short* Disque_2_Mobius_Mark;
  Place* Disque_dys;
  short* Disque_dys_Mobius_Mark;

  double* TheDistributionParameters;
  Verification_Disques_FreinActivity();
  ~Verification_Disques_FreinActivity();
  double Rate(){return 0;}
  bool Enabled();
  void LinkVariables();
  double Weight();
  bool ReactivationPredicate();
  bool ReactivationFunction();
  double SampleDistribution();
  double* ReturnDistributionParameters();
  int Rank();
  BaseActionClass* Fire();
  double WeibullParamAlpha();
  double WeibullParamBeta();
}; // Verification_Disques_FreinActivityActivity

  //List of user-specified place names
  Place* Piston_2;
  Place* Maitre_Cylindre_2;
  Place* Reservoir_2;
  Place* Liquide_Frein_2;
  Place* Donnees_Piston_2;
  Place* Pedale_2;
  Place* Donnees_Capteur_2;
  Place* Capteur_de_Vitesse_2;
  Place* Calculateur_2;
  Place* Actionneur_2;
  Place* Disque_2;
  Place* Plaquette_2;
  Place* Frein_2;
  Place* Valve_2;
  Place* Pedale_dys;
  Place* Piston_dys;
  Place* Liquide_Frein_dys;
  Place* Reservoir_dys;
  Place* Maitre_Cylindre_dys;
  Place* Capteur_dys;
  Place* Calculateur_dys;
  Place* Actionneur_dys;
  Place* Valve_dys;
  Place* Plaquettes_dys;
  Place* Disque_dys;

  // Create instances of all actvities
  Instantaneous_Activity1_2Activity Instantaneous_Activity1_2;
  Boucle_2Activity Boucle_2;
  Actionner_Piston_2Activity Actionner_Piston_2;
  T_Cylindre_2Activity T_Cylindre_2;
  T_Reservoir_2Activity T_Reservoir_2;
  T_Liquide_Frein_2Activity T_Liquide_Frein_2;
  Actionner_Pedale_2Activity Actionner_Pedale_2;
  Envoyer_Donnees_Capteur_2Activity Envoyer_Donnees_Capteur_2;
  T_Calculateur_2Activity_case1 T_Calculateur_2_case1;
  T_Calculateur_2Activity_case2 T_Calculateur_2_case2;
  T_Plaquette_2Activity T_Plaquette_2;
  T_Disque_2Activity T_Disque_2;
  T_Actionneur_2Activity T_Actionneur_2;
  T_Valve_2Activity T_Valve_2;
  Rupture_MecaniqueActivity Rupture_Mecanique;
  Grippage_PistonActivity Grippage_Piston;
  Problemes_FluiditeActivity Problemes_Fluidite;
  Problemes_LubrificationActivity Problemes_Lubrification;
  Fissuration_ReservoirActivity Fissuration_Reservoir;
  Grippage_Maitre_CylindreActivity Grippage_Maitre_Cylindre;
  Rupture_Fil_LiaisonActivity Rupture_Fil_Liaison;
  Donnees_AberrantesActivity Donnees_Aberrantes;
  Problemes_Entree_SortieActivity Problemes_Entree_Sortie;
  Deifallance_Systeme_OperationActivity Deifallance_Systeme_Operation;
  Court_Circuit_BobineActivity Court_Circuit_Bobine;
  Grippage_ValveActivity Grippage_Valve;
  FuiteActivity Fuite;
  Usure_PlaquettesActivity Usure_Plaquettes;
  Verification_Disques_FreinActivity Verification_Disques_Frein;
  //Create instances of all groups 
  PreselectGroup ImmediateGroup;
  PostselectGroup Instantaneous_Activity1_2Group;
  PostselectGroup Boucle_2Group;
  PostselectGroup T_Calculateur_2Group;
  Modele_DysfonctionnelSAN();
  ~Modele_DysfonctionnelSAN();
  void CustomInitialization();

  void assignPlacesToActivitiesInst();
  void assignPlacesToActivitiesTimed();
}; // end Modele_DysfonctionnelSAN

#endif // Modele_DysfonctionnelSAN_H_

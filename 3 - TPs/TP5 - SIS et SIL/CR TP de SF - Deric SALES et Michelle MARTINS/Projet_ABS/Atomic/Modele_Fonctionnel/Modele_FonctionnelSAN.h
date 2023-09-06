#ifndef Modele_FonctionnelSAN_H_
#define Modele_FonctionnelSAN_H_

#include "Cpp/BaseClasses/EmptyGroup.h"
#include "Cpp/BaseClasses/GlobalVariables.h"
#include "Cpp/BaseClasses/PreselectGroup.h"
#include "Cpp/BaseClasses/PostselectGroup.h"
#include "Cpp/BaseClasses/state/StructStateVariable.h"
#include "Cpp/BaseClasses/state/ArrayStateVariable.h"
#include "Cpp/BaseClasses/SAN/SANModel.h" 
#include "Cpp/BaseClasses/SAN/Place.h"
#include "Cpp/BaseClasses/SAN/ExtendedPlace.h"
extern Float mu1;
extern Float sigma;
extern Float mu2;
extern UserDistributions* TheDistribution;

void MemoryError();


/*********************************************************************
               Modele_FonctionnelSAN Submodel Definition                   
*********************************************************************/

class Modele_FonctionnelSAN:public SANModel{
public:

class Instantaneous_Activity1Activity:public Activity {
public:

  Place* Donnees_Piston;
  short* Donnees_Piston_Mobius_Mark;
  Place* Donnees_Capteur;
  short* Donnees_Capteur_Mobius_Mark;
  Place* Calculateur;
  short* Calculateur_Mobius_Mark;

  double* TheDistributionParameters;
  Instantaneous_Activity1Activity();
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
}; // Instantaneous_Activity1ActivityActivity

class BoucleActivity:public Activity {
public:

  Place* Frein;
  short* Frein_Mobius_Mark;
  Place* Pedale;
  short* Pedale_Mobius_Mark;

  double* TheDistributionParameters;
  BoucleActivity();
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
}; // BoucleActivityActivity

class Actionner_PedaleActivity:public Activity {
public:

  Place* Pedale;
  short* Pedale_Mobius_Mark;
  Place* Piston;
  short* Piston_Mobius_Mark;
  Place* Capteur_de_Vitesse;
  short* Capteur_de_Vitesse_Mobius_Mark;

  double* TheDistributionParameters;
  Actionner_PedaleActivity();
  ~Actionner_PedaleActivity();
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
}; // Actionner_PedaleActivityActivity

class Actionner_PistonActivity:public Activity {
public:

  Place* Piston;
  short* Piston_Mobius_Mark;
  Place* Maitre_Cylindre;
  short* Maitre_Cylindre_Mobius_Mark;
  Place* Reservoir;
  short* Reservoir_Mobius_Mark;
  Place* Liquide_Frein;
  short* Liquide_Frein_Mobius_Mark;

  double* TheDistributionParameters;
  Actionner_PistonActivity();
  ~Actionner_PistonActivity();
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
}; // Actionner_PistonActivityActivity

class T_CylindreActivity:public Activity {
public:

  Place* Maitre_Cylindre;
  short* Maitre_Cylindre_Mobius_Mark;
  Place* Donnees_Piston;
  short* Donnees_Piston_Mobius_Mark;

  double* TheDistributionParameters;
  T_CylindreActivity();
  ~T_CylindreActivity();
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
}; // T_CylindreActivityActivity

class Envoyer_Donnees_CapteurActivity:public Activity {
public:

  Place* Capteur_de_Vitesse;
  short* Capteur_de_Vitesse_Mobius_Mark;
  Place* Donnees_Capteur;
  short* Donnees_Capteur_Mobius_Mark;

  double* TheDistributionParameters;
  Envoyer_Donnees_CapteurActivity();
  ~Envoyer_Donnees_CapteurActivity();
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
}; // Envoyer_Donnees_CapteurActivityActivity

class T_ReservoirActivity:public Activity {
public:

  Place* Reservoir;
  short* Reservoir_Mobius_Mark;
  Place* Donnees_Piston;
  short* Donnees_Piston_Mobius_Mark;

  double* TheDistributionParameters;
  T_ReservoirActivity();
  ~T_ReservoirActivity();
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
}; // T_ReservoirActivityActivity

class T_Liquide_FreinActivity:public Activity {
public:

  Place* Liquide_Frein;
  short* Liquide_Frein_Mobius_Mark;
  Place* Donnees_Piston;
  short* Donnees_Piston_Mobius_Mark;

  double* TheDistributionParameters;
  T_Liquide_FreinActivity();
  ~T_Liquide_FreinActivity();
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
}; // T_Liquide_FreinActivityActivity

class T_CalculateurActivity_case1:public Activity {
public:

  Place* Calculateur;
  short* Calculateur_Mobius_Mark;
  Place* Actionneur;
  short* Actionneur_Mobius_Mark;

  double* TheDistributionParameters;
  T_CalculateurActivity_case1();
  ~T_CalculateurActivity_case1();
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
}; // T_CalculateurActivity_case1Activity

class T_CalculateurActivity_case2:public Activity {
public:

  Place* Calculateur;
  short* Calculateur_Mobius_Mark;
  Place* Plaquette;
  short* Plaquette_Mobius_Mark;

  double* TheDistributionParameters;
  T_CalculateurActivity_case2();
  ~T_CalculateurActivity_case2();
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
}; // T_CalculateurActivity_case2Activity

class T_ActionneurActivity:public Activity {
public:

  Place* Actionneur;
  short* Actionneur_Mobius_Mark;
  Place* Valve;
  short* Valve_Mobius_Mark;

  double* TheDistributionParameters;
  T_ActionneurActivity();
  ~T_ActionneurActivity();
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
}; // T_ActionneurActivityActivity

class T_ValveActivity:public Activity {
public:

  Place* Valve;
  short* Valve_Mobius_Mark;
  Place* Plaquette;
  short* Plaquette_Mobius_Mark;

  double* TheDistributionParameters;
  T_ValveActivity();
  ~T_ValveActivity();
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
}; // T_ValveActivityActivity

class T_PlaquetteActivity:public Activity {
public:

  Place* Plaquette;
  short* Plaquette_Mobius_Mark;
  Place* Disque;
  short* Disque_Mobius_Mark;

  double* TheDistributionParameters;
  T_PlaquetteActivity();
  ~T_PlaquetteActivity();
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
}; // T_PlaquetteActivityActivity

class T_DisqueActivity:public Activity {
public:

  Place* Disque;
  short* Disque_Mobius_Mark;
  Place* Frein;
  short* Frein_Mobius_Mark;

  double* TheDistributionParameters;
  T_DisqueActivity();
  ~T_DisqueActivity();
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
}; // T_DisqueActivityActivity

  //List of user-specified place names
  Place* Pedale;
  Place* Piston;
  Place* Maitre_Cylindre;
  Place* Capteur_de_Vitesse;
  Place* Reservoir;
  Place* Liquide_Frein;
  Place* Donnees_Capteur;
  Place* Donnees_Piston;
  Place* Calculateur;
  Place* Actionneur;
  Place* Valve;
  Place* Plaquette;
  Place* Disque;
  Place* Frein;

  // Create instances of all actvities
  Instantaneous_Activity1Activity Instantaneous_Activity1;
  BoucleActivity Boucle;
  Actionner_PedaleActivity Actionner_Pedale;
  Actionner_PistonActivity Actionner_Piston;
  T_CylindreActivity T_Cylindre;
  Envoyer_Donnees_CapteurActivity Envoyer_Donnees_Capteur;
  T_ReservoirActivity T_Reservoir;
  T_Liquide_FreinActivity T_Liquide_Frein;
  T_CalculateurActivity_case1 T_Calculateur_case1;
  T_CalculateurActivity_case2 T_Calculateur_case2;
  T_ActionneurActivity T_Actionneur;
  T_ValveActivity T_Valve;
  T_PlaquetteActivity T_Plaquette;
  T_DisqueActivity T_Disque;
  //Create instances of all groups 
  PreselectGroup ImmediateGroup;
  PostselectGroup Instantaneous_Activity1Group;
  PostselectGroup BoucleGroup;
  PostselectGroup T_CalculateurGroup;
  Modele_FonctionnelSAN();
  ~Modele_FonctionnelSAN();
  void CustomInitialization();

  void assignPlacesToActivitiesInst();
  void assignPlacesToActivitiesTimed();
}; // end Modele_FonctionnelSAN

#endif // Modele_FonctionnelSAN_H_

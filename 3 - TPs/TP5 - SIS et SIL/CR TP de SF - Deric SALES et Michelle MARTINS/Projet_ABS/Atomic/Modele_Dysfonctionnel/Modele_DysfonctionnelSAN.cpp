

// This C++ file was created by SanEditor

#include "Atomic/Modele_Dysfonctionnel/Modele_DysfonctionnelSAN.h"

#include <stdlib.h>
#include <iostream>

#include <math.h>


/*****************************************************************
                         Modele_DysfonctionnelSAN Constructor             
******************************************************************/


Modele_DysfonctionnelSAN::Modele_DysfonctionnelSAN(){


  T_Calculateur_2Group.initialize(2, "T_Calculateur_2Group");
  T_Calculateur_2Group.appendGroup((BaseGroupClass*) &T_Calculateur_2_case1);
  T_Calculateur_2Group.appendGroup((BaseGroupClass*) &T_Calculateur_2_case2);

  Activity* InitialActionList[29]={
    &Instantaneous_Activity1_2, //0
    &Boucle_2, //1
    &Actionner_Piston_2, //2
    &T_Cylindre_2, //3
    &T_Reservoir_2, //4
    &T_Liquide_Frein_2, //5
    &Actionner_Pedale_2, //6
    &Envoyer_Donnees_Capteur_2, //7
    &T_Calculateur_2_case1, //8
    &T_Calculateur_2_case2, //9
    &T_Plaquette_2, //10
    &T_Disque_2, //11
    &T_Actionneur_2, //12
    &T_Valve_2, //13
    &Rupture_Mecanique, //14
    &Grippage_Piston, //15
    &Problemes_Fluidite, //16
    &Problemes_Lubrification, //17
    &Fissuration_Reservoir, //18
    &Grippage_Maitre_Cylindre, //19
    &Rupture_Fil_Liaison, //20
    &Donnees_Aberrantes, //21
    &Problemes_Entree_Sortie, //22
    &Deifallance_Systeme_Operation, //23
    &Court_Circuit_Bobine, //24
    &Grippage_Valve, //25
    &Fuite, //26
    &Usure_Plaquettes, //27
    &Verification_Disques_Frein  // 28
  };

  BaseGroupClass* InitialGroupList[28]={
    (BaseGroupClass*) &(Actionner_Piston_2), 
    (BaseGroupClass*) &(T_Cylindre_2), 
    (BaseGroupClass*) &(T_Reservoir_2), 
    (BaseGroupClass*) &(T_Liquide_Frein_2), 
    (BaseGroupClass*) &(Actionner_Pedale_2), 
    (BaseGroupClass*) &(Envoyer_Donnees_Capteur_2), 
    (BaseGroupClass*) &(T_Calculateur_2Group), 
    (BaseGroupClass*) &(T_Plaquette_2), 
    (BaseGroupClass*) &(T_Disque_2), 
    (BaseGroupClass*) &(T_Actionneur_2), 
    (BaseGroupClass*) &(T_Valve_2), 
    (BaseGroupClass*) &(Rupture_Mecanique), 
    (BaseGroupClass*) &(Grippage_Piston), 
    (BaseGroupClass*) &(Problemes_Fluidite), 
    (BaseGroupClass*) &(Problemes_Lubrification), 
    (BaseGroupClass*) &(Fissuration_Reservoir), 
    (BaseGroupClass*) &(Grippage_Maitre_Cylindre), 
    (BaseGroupClass*) &(Rupture_Fil_Liaison), 
    (BaseGroupClass*) &(Donnees_Aberrantes), 
    (BaseGroupClass*) &(Problemes_Entree_Sortie), 
    (BaseGroupClass*) &(Deifallance_Systeme_Operation), 
    (BaseGroupClass*) &(Court_Circuit_Bobine), 
    (BaseGroupClass*) &(Grippage_Valve), 
    (BaseGroupClass*) &(Fuite), 
    (BaseGroupClass*) &(Usure_Plaquettes), 
    (BaseGroupClass*) &(Verification_Disques_Frein), 
    (BaseGroupClass*) &(Instantaneous_Activity1_2), 
    (BaseGroupClass*) &(Boucle_2)
  };

  Piston_2 = new Place("Piston_2" ,0);
  Maitre_Cylindre_2 = new Place("Maitre_Cylindre_2" ,0);
  Reservoir_2 = new Place("Reservoir_2" ,0);
  Liquide_Frein_2 = new Place("Liquide_Frein_2" ,0);
  Donnees_Piston_2 = new Place("Donnees_Piston_2" ,0);
  Pedale_2 = new Place("Pedale_2" ,var_initiale);
  Donnees_Capteur_2 = new Place("Donnees_Capteur_2" ,0);
  Capteur_de_Vitesse_2 = new Place("Capteur_de_Vitesse_2" ,0);
  Calculateur_2 = new Place("Calculateur_2" ,0);
  Actionneur_2 = new Place("Actionneur_2" ,0);
  Disque_2 = new Place("Disque_2" ,0);
  Plaquette_2 = new Place("Plaquette_2" ,0);
  Frein_2 = new Place("Frein_2" ,0);
  Valve_2 = new Place("Valve_2" ,0);
  Pedale_dys = new Place("Pedale_dys" ,0);
  Piston_dys = new Place("Piston_dys" ,0);
  Liquide_Frein_dys = new Place("Liquide_Frein_dys" ,0);
  Reservoir_dys = new Place("Reservoir_dys" ,0);
  Maitre_Cylindre_dys = new Place("Maitre_Cylindre_dys" ,0);
  Capteur_dys = new Place("Capteur_dys" ,0);
  Calculateur_dys = new Place("Calculateur_dys" ,0);
  Actionneur_dys = new Place("Actionneur_dys" ,0);
  Valve_dys = new Place("Valve_dys" ,0);
  Plaquettes_dys = new Place("Plaquettes_dys" ,0);
  Disque_dys = new Place("Disque_dys" ,0);
  BaseStateVariableClass* InitialPlaces[25]={
    Piston_2,  // 0
    Maitre_Cylindre_2,  // 1
    Reservoir_2,  // 2
    Liquide_Frein_2,  // 3
    Donnees_Piston_2,  // 4
    Pedale_2,  // 5
    Donnees_Capteur_2,  // 6
    Capteur_de_Vitesse_2,  // 7
    Calculateur_2,  // 8
    Actionneur_2,  // 9
    Disque_2,  // 10
    Plaquette_2,  // 11
    Frein_2,  // 12
    Valve_2,  // 13
    Pedale_dys,  // 14
    Piston_dys,  // 15
    Liquide_Frein_dys,  // 16
    Reservoir_dys,  // 17
    Maitre_Cylindre_dys,  // 18
    Capteur_dys,  // 19
    Calculateur_dys,  // 20
    Actionneur_dys,  // 21
    Valve_dys,  // 22
    Plaquettes_dys,  // 23
    Disque_dys   // 24
  };
  BaseStateVariableClass* InitialROPlaces[0]={
  };
  initializeSANModelNow("Modele_Dysfonctionnel", 25, InitialPlaces, 
                        0, InitialROPlaces, 
                        29, InitialActionList, 28, InitialGroupList);


  assignPlacesToActivitiesInst();
  assignPlacesToActivitiesTimed();

  int AffectArcs[62][2]={ 
    {8,0}, {4,0}, {6,0}, {12,1}, {5,1}, {0,2}, {1,2}, {2,2}, 
    {3,2}, {1,3}, {4,3}, {2,4}, {4,4}, {3,5}, {4,5}, {5,6}, {0,6}, 
    {7,6}, {7,7}, {6,7}, {8,8}, {9,8}, {8,9}, {11,9}, {11,10}, 
    {10,10}, {10,11}, {12,11}, {9,12}, {13,12}, {13,13}, {11,13}, 
    {5,14}, {14,14}, {0,15}, {15,15}, {3,16}, {16,16}, {3,17}, 
    {16,17}, {2,18}, {17,18}, {1,19}, {18,19}, {7,20}, {19,20}, 
    {8,21}, {20,21}, {8,22}, {20,22}, {8,23}, {20,23}, {9,24}, 
    {21,24}, {13,25}, {22,25}, {13,26}, {22,26}, {11,27}, {23,27}, 
    {10,28}, {24,28}
  };
  for(int n=0;n<62;n++) {
    AddAffectArc(InitialPlaces[AffectArcs[n][0]],
                 InitialActionList[AffectArcs[n][1]]);
  }
  int EnableArcs[30][2]={ 
    {4,0}, {6,0}, {12,1}, {0,2}, {1,3}, {2,4}, {3,5}, {5,6}, 
    {7,7}, {8,8}, {8,9}, {11,10}, {10,11}, {9,12}, {13,13}, {5,14}, 
    {0,15}, {3,16}, {3,17}, {2,18}, {1,19}, {7,20}, {8,21}, {8,22}, 
    {8,23}, {9,24}, {13,25}, {13,26}, {11,27}, {10,28}
  };
  for(int n=0;n<30;n++) {
    AddEnableArc(InitialPlaces[EnableArcs[n][0]],
                 InitialActionList[EnableArcs[n][1]]);
  }

  for(int n=0;n<29;n++) {
    InitialActionList[n]->LinkVariables();
  }
  CustomInitialization();

}

void Modele_DysfonctionnelSAN::CustomInitialization() {

}
Modele_DysfonctionnelSAN::~Modele_DysfonctionnelSAN(){
  for (int i = 0; i < NumStateVariables-NumReadOnlyPlaces; i++)
    delete LocalStateVariables[i];
};

void Modele_DysfonctionnelSAN::assignPlacesToActivitiesInst(){
  Instantaneous_Activity1_2.Donnees_Piston_2 = (Place*) LocalStateVariables[4];
  Instantaneous_Activity1_2.Donnees_Capteur_2 = (Place*) LocalStateVariables[6];
  Instantaneous_Activity1_2.Calculateur_2 = (Place*) LocalStateVariables[8];
  Boucle_2.Frein_2 = (Place*) LocalStateVariables[12];
  Boucle_2.Pedale_2 = (Place*) LocalStateVariables[5];
}
void Modele_DysfonctionnelSAN::assignPlacesToActivitiesTimed(){
  Actionner_Piston_2.Piston_2 = (Place*) LocalStateVariables[0];
  Actionner_Piston_2.Maitre_Cylindre_2 = (Place*) LocalStateVariables[1];
  Actionner_Piston_2.Reservoir_2 = (Place*) LocalStateVariables[2];
  Actionner_Piston_2.Liquide_Frein_2 = (Place*) LocalStateVariables[3];
  T_Cylindre_2.Maitre_Cylindre_2 = (Place*) LocalStateVariables[1];
  T_Cylindre_2.Donnees_Piston_2 = (Place*) LocalStateVariables[4];
  T_Reservoir_2.Reservoir_2 = (Place*) LocalStateVariables[2];
  T_Reservoir_2.Donnees_Piston_2 = (Place*) LocalStateVariables[4];
  T_Liquide_Frein_2.Liquide_Frein_2 = (Place*) LocalStateVariables[3];
  T_Liquide_Frein_2.Donnees_Piston_2 = (Place*) LocalStateVariables[4];
  Actionner_Pedale_2.Pedale_2 = (Place*) LocalStateVariables[5];
  Actionner_Pedale_2.Piston_2 = (Place*) LocalStateVariables[0];
  Actionner_Pedale_2.Capteur_de_Vitesse_2 = (Place*) LocalStateVariables[7];
  Envoyer_Donnees_Capteur_2.Capteur_de_Vitesse_2 = (Place*) LocalStateVariables[7];
  Envoyer_Donnees_Capteur_2.Donnees_Capteur_2 = (Place*) LocalStateVariables[6];
  T_Calculateur_2_case1.Calculateur_2 = (Place*) LocalStateVariables[8];
  T_Calculateur_2_case1.Actionneur_2 = (Place*) LocalStateVariables[9];
  T_Calculateur_2_case2.Calculateur_2 = (Place*) LocalStateVariables[8];
  T_Calculateur_2_case2.Plaquette_2 = (Place*) LocalStateVariables[11];
  T_Plaquette_2.Plaquette_2 = (Place*) LocalStateVariables[11];
  T_Plaquette_2.Disque_2 = (Place*) LocalStateVariables[10];
  T_Disque_2.Disque_2 = (Place*) LocalStateVariables[10];
  T_Disque_2.Frein_2 = (Place*) LocalStateVariables[12];
  T_Actionneur_2.Actionneur_2 = (Place*) LocalStateVariables[9];
  T_Actionneur_2.Valve_2 = (Place*) LocalStateVariables[13];
  T_Valve_2.Valve_2 = (Place*) LocalStateVariables[13];
  T_Valve_2.Plaquette_2 = (Place*) LocalStateVariables[11];
  Rupture_Mecanique.Pedale_2 = (Place*) LocalStateVariables[5];
  Rupture_Mecanique.Pedale_dys = (Place*) LocalStateVariables[14];
  Grippage_Piston.Piston_2 = (Place*) LocalStateVariables[0];
  Grippage_Piston.Piston_dys = (Place*) LocalStateVariables[15];
  Problemes_Fluidite.Liquide_Frein_2 = (Place*) LocalStateVariables[3];
  Problemes_Fluidite.Liquide_Frein_dys = (Place*) LocalStateVariables[16];
  Problemes_Lubrification.Liquide_Frein_2 = (Place*) LocalStateVariables[3];
  Problemes_Lubrification.Liquide_Frein_dys = (Place*) LocalStateVariables[16];
  Fissuration_Reservoir.Reservoir_2 = (Place*) LocalStateVariables[2];
  Fissuration_Reservoir.Reservoir_dys = (Place*) LocalStateVariables[17];
  Grippage_Maitre_Cylindre.Maitre_Cylindre_2 = (Place*) LocalStateVariables[1];
  Grippage_Maitre_Cylindre.Maitre_Cylindre_dys = (Place*) LocalStateVariables[18];
  Rupture_Fil_Liaison.Capteur_de_Vitesse_2 = (Place*) LocalStateVariables[7];
  Rupture_Fil_Liaison.Capteur_dys = (Place*) LocalStateVariables[19];
  Donnees_Aberrantes.Calculateur_2 = (Place*) LocalStateVariables[8];
  Donnees_Aberrantes.Calculateur_dys = (Place*) LocalStateVariables[20];
  Problemes_Entree_Sortie.Calculateur_2 = (Place*) LocalStateVariables[8];
  Problemes_Entree_Sortie.Calculateur_dys = (Place*) LocalStateVariables[20];
  Deifallance_Systeme_Operation.Calculateur_2 = (Place*) LocalStateVariables[8];
  Deifallance_Systeme_Operation.Calculateur_dys = (Place*) LocalStateVariables[20];
  Court_Circuit_Bobine.Actionneur_2 = (Place*) LocalStateVariables[9];
  Court_Circuit_Bobine.Actionneur_dys = (Place*) LocalStateVariables[21];
  Grippage_Valve.Valve_2 = (Place*) LocalStateVariables[13];
  Grippage_Valve.Valve_dys = (Place*) LocalStateVariables[22];
  Fuite.Valve_2 = (Place*) LocalStateVariables[13];
  Fuite.Valve_dys = (Place*) LocalStateVariables[22];
  Usure_Plaquettes.Plaquette_2 = (Place*) LocalStateVariables[11];
  Usure_Plaquettes.Plaquettes_dys = (Place*) LocalStateVariables[23];
  Verification_Disques_Frein.Disque_2 = (Place*) LocalStateVariables[10];
  Verification_Disques_Frein.Disque_dys = (Place*) LocalStateVariables[24];
}
/*****************************************************************/
/*                  Activity Method Definitions                  */
/*****************************************************************/

/*======================Instantaneous_Activity1_2Activity========================*/


Modele_DysfonctionnelSAN::Instantaneous_Activity1_2Activity::Instantaneous_Activity1_2Activity(){
  ActivityInitialize("Instantaneous_Activity1_2",26,Instantaneous , RaceEnabled, 3,2, false);
}

void Modele_DysfonctionnelSAN::Instantaneous_Activity1_2Activity::LinkVariables(){
  Donnees_Piston_2->Register(&Donnees_Piston_2_Mobius_Mark);
  Donnees_Capteur_2->Register(&Donnees_Capteur_2_Mobius_Mark);
  Calculateur_2->Register(&Calculateur_2_Mobius_Mark);
}

bool Modele_DysfonctionnelSAN::Instantaneous_Activity1_2Activity::Enabled(){
  OldEnabled=NewEnabled;
  NewEnabled=((Donnees_Piston_2->Mark()>2 && Donnees_Capteur_2->Mark()>0));
  return NewEnabled;
}

double Modele_DysfonctionnelSAN::Instantaneous_Activity1_2Activity::Weight(){ 
  return 1;
}

bool Modele_DysfonctionnelSAN::Instantaneous_Activity1_2Activity::ReactivationPredicate(){ 
  return false;
}

bool Modele_DysfonctionnelSAN::Instantaneous_Activity1_2Activity::ReactivationFunction(){ 
  return false;
}

double Modele_DysfonctionnelSAN::Instantaneous_Activity1_2Activity::SampleDistribution(){
  return 0;
}

double* Modele_DysfonctionnelSAN::Instantaneous_Activity1_2Activity::ReturnDistributionParameters(){
    return NULL;
}

int Modele_DysfonctionnelSAN::Instantaneous_Activity1_2Activity::Rank(){
  return 1;
}

BaseActionClass* Modele_DysfonctionnelSAN::Instantaneous_Activity1_2Activity::Fire(){
  Donnees_Piston_2->Mark() = Donnees_Piston_2->Mark() - 3;
Donnees_Capteur_2->Mark() = Donnees_Capteur_2->Mark() - 1;
  (*(Calculateur_2_Mobius_Mark))++;
  return this;
}

/*======================Boucle_2Activity========================*/


Modele_DysfonctionnelSAN::Boucle_2Activity::Boucle_2Activity(){
  ActivityInitialize("Boucle_2",27,Instantaneous , RaceEnabled, 2,1, false);
}

void Modele_DysfonctionnelSAN::Boucle_2Activity::LinkVariables(){
  Frein_2->Register(&Frein_2_Mobius_Mark);
  Pedale_2->Register(&Pedale_2_Mobius_Mark);
}

bool Modele_DysfonctionnelSAN::Boucle_2Activity::Enabled(){
  OldEnabled=NewEnabled;
  NewEnabled=(((*(Frein_2_Mobius_Mark)) >=1));
  return NewEnabled;
}

double Modele_DysfonctionnelSAN::Boucle_2Activity::Weight(){ 
  return 1;
}

bool Modele_DysfonctionnelSAN::Boucle_2Activity::ReactivationPredicate(){ 
  return false;
}

bool Modele_DysfonctionnelSAN::Boucle_2Activity::ReactivationFunction(){ 
  return false;
}

double Modele_DysfonctionnelSAN::Boucle_2Activity::SampleDistribution(){
  return 0;
}

double* Modele_DysfonctionnelSAN::Boucle_2Activity::ReturnDistributionParameters(){
    return NULL;
}

int Modele_DysfonctionnelSAN::Boucle_2Activity::Rank(){
  return 1;
}

BaseActionClass* Modele_DysfonctionnelSAN::Boucle_2Activity::Fire(){
  (*(Frein_2_Mobius_Mark))--;
  (*(Pedale_2_Mobius_Mark))++;
  return this;
}

/*======================Actionner_Piston_2Activity========================*/

Modele_DysfonctionnelSAN::Actionner_Piston_2Activity::Actionner_Piston_2Activity(){
  TheDistributionParameters = new double[2];
  ActivityInitialize("Actionner_Piston_2",0,Lognormal, RaceEnabled, 4,1, false);
}

Modele_DysfonctionnelSAN::Actionner_Piston_2Activity::~Actionner_Piston_2Activity(){
  delete[] TheDistributionParameters;
}

void Modele_DysfonctionnelSAN::Actionner_Piston_2Activity::LinkVariables(){
  Piston_2->Register(&Piston_2_Mobius_Mark);
  Maitre_Cylindre_2->Register(&Maitre_Cylindre_2_Mobius_Mark);
  Reservoir_2->Register(&Reservoir_2_Mobius_Mark);
  Liquide_Frein_2->Register(&Liquide_Frein_2_Mobius_Mark);
}

bool Modele_DysfonctionnelSAN::Actionner_Piston_2Activity::Enabled(){
  OldEnabled=NewEnabled;
  NewEnabled=(((*(Piston_2_Mobius_Mark)) >=1));
  return NewEnabled;
}

double Modele_DysfonctionnelSAN::Actionner_Piston_2Activity::LognormalParamMu(){
  return mu1;
  return 1.0;  // default rate if none is specified
}

double Modele_DysfonctionnelSAN::Actionner_Piston_2Activity::LognormalParamAlpha_Squared(){
  return sigma;
  return 1.0;  // default rate if none is specified
}

double Modele_DysfonctionnelSAN::Actionner_Piston_2Activity::Weight(){ 
  return 1;
}

bool Modele_DysfonctionnelSAN::Actionner_Piston_2Activity::ReactivationPredicate(){ 
  return false;
}

bool Modele_DysfonctionnelSAN::Actionner_Piston_2Activity::ReactivationFunction(){ 
  return false;
}

double Modele_DysfonctionnelSAN::Actionner_Piston_2Activity::SampleDistribution(){
  return TheDistribution->Lognormal(mu1, sigma);
}

double* Modele_DysfonctionnelSAN::Actionner_Piston_2Activity::ReturnDistributionParameters(){
  TheDistributionParameters[0] = LognormalParamMu();
  TheDistributionParameters[1] = LognormalParamAlpha_Squared();
  return TheDistributionParameters;
}

int Modele_DysfonctionnelSAN::Actionner_Piston_2Activity::Rank(){
  return 1;
}

BaseActionClass* Modele_DysfonctionnelSAN::Actionner_Piston_2Activity::Fire(){
  (*(Piston_2_Mobius_Mark))--;
  (*(Maitre_Cylindre_2_Mobius_Mark))++;
  (*(Reservoir_2_Mobius_Mark))++;
  (*(Liquide_Frein_2_Mobius_Mark))++;
  return this;
}

/*======================T_Cylindre_2Activity========================*/

Modele_DysfonctionnelSAN::T_Cylindre_2Activity::T_Cylindre_2Activity(){
  TheDistributionParameters = new double[2];
  ActivityInitialize("T_Cylindre_2",1,Lognormal, RaceEnabled, 2,1, false);
}

Modele_DysfonctionnelSAN::T_Cylindre_2Activity::~T_Cylindre_2Activity(){
  delete[] TheDistributionParameters;
}

void Modele_DysfonctionnelSAN::T_Cylindre_2Activity::LinkVariables(){
  Maitre_Cylindre_2->Register(&Maitre_Cylindre_2_Mobius_Mark);
  Donnees_Piston_2->Register(&Donnees_Piston_2_Mobius_Mark);
}

bool Modele_DysfonctionnelSAN::T_Cylindre_2Activity::Enabled(){
  OldEnabled=NewEnabled;
  NewEnabled=(((*(Maitre_Cylindre_2_Mobius_Mark)) >=1));
  return NewEnabled;
}

double Modele_DysfonctionnelSAN::T_Cylindre_2Activity::LognormalParamMu(){
  return mu1;
  return 1.0;  // default rate if none is specified
}

double Modele_DysfonctionnelSAN::T_Cylindre_2Activity::LognormalParamAlpha_Squared(){
  return sigma;
  return 1.0;  // default rate if none is specified
}

double Modele_DysfonctionnelSAN::T_Cylindre_2Activity::Weight(){ 
  return 1;
}

bool Modele_DysfonctionnelSAN::T_Cylindre_2Activity::ReactivationPredicate(){ 
  return false;
}

bool Modele_DysfonctionnelSAN::T_Cylindre_2Activity::ReactivationFunction(){ 
  return false;
}

double Modele_DysfonctionnelSAN::T_Cylindre_2Activity::SampleDistribution(){
  return TheDistribution->Lognormal(mu1, sigma);
}

double* Modele_DysfonctionnelSAN::T_Cylindre_2Activity::ReturnDistributionParameters(){
  TheDistributionParameters[0] = LognormalParamMu();
  TheDistributionParameters[1] = LognormalParamAlpha_Squared();
  return TheDistributionParameters;
}

int Modele_DysfonctionnelSAN::T_Cylindre_2Activity::Rank(){
  return 1;
}

BaseActionClass* Modele_DysfonctionnelSAN::T_Cylindre_2Activity::Fire(){
  (*(Maitre_Cylindre_2_Mobius_Mark))--;
  (*(Donnees_Piston_2_Mobius_Mark))++;
  return this;
}

/*======================T_Reservoir_2Activity========================*/

Modele_DysfonctionnelSAN::T_Reservoir_2Activity::T_Reservoir_2Activity(){
  TheDistributionParameters = new double[2];
  ActivityInitialize("T_Reservoir_2",2,Lognormal, RaceEnabled, 2,1, false);
}

Modele_DysfonctionnelSAN::T_Reservoir_2Activity::~T_Reservoir_2Activity(){
  delete[] TheDistributionParameters;
}

void Modele_DysfonctionnelSAN::T_Reservoir_2Activity::LinkVariables(){
  Reservoir_2->Register(&Reservoir_2_Mobius_Mark);
  Donnees_Piston_2->Register(&Donnees_Piston_2_Mobius_Mark);
}

bool Modele_DysfonctionnelSAN::T_Reservoir_2Activity::Enabled(){
  OldEnabled=NewEnabled;
  NewEnabled=(((*(Reservoir_2_Mobius_Mark)) >=1));
  return NewEnabled;
}

double Modele_DysfonctionnelSAN::T_Reservoir_2Activity::LognormalParamMu(){
  return mu1;
  return 1.0;  // default rate if none is specified
}

double Modele_DysfonctionnelSAN::T_Reservoir_2Activity::LognormalParamAlpha_Squared(){
  return sigma;
  return 1.0;  // default rate if none is specified
}

double Modele_DysfonctionnelSAN::T_Reservoir_2Activity::Weight(){ 
  return 1;
}

bool Modele_DysfonctionnelSAN::T_Reservoir_2Activity::ReactivationPredicate(){ 
  return false;
}

bool Modele_DysfonctionnelSAN::T_Reservoir_2Activity::ReactivationFunction(){ 
  return false;
}

double Modele_DysfonctionnelSAN::T_Reservoir_2Activity::SampleDistribution(){
  return TheDistribution->Lognormal(mu1, sigma);
}

double* Modele_DysfonctionnelSAN::T_Reservoir_2Activity::ReturnDistributionParameters(){
  TheDistributionParameters[0] = LognormalParamMu();
  TheDistributionParameters[1] = LognormalParamAlpha_Squared();
  return TheDistributionParameters;
}

int Modele_DysfonctionnelSAN::T_Reservoir_2Activity::Rank(){
  return 1;
}

BaseActionClass* Modele_DysfonctionnelSAN::T_Reservoir_2Activity::Fire(){
  (*(Reservoir_2_Mobius_Mark))--;
  (*(Donnees_Piston_2_Mobius_Mark))++;
  return this;
}

/*======================T_Liquide_Frein_2Activity========================*/

Modele_DysfonctionnelSAN::T_Liquide_Frein_2Activity::T_Liquide_Frein_2Activity(){
  TheDistributionParameters = new double[2];
  ActivityInitialize("T_Liquide_Frein_2",3,Lognormal, RaceEnabled, 2,1, false);
}

Modele_DysfonctionnelSAN::T_Liquide_Frein_2Activity::~T_Liquide_Frein_2Activity(){
  delete[] TheDistributionParameters;
}

void Modele_DysfonctionnelSAN::T_Liquide_Frein_2Activity::LinkVariables(){
  Liquide_Frein_2->Register(&Liquide_Frein_2_Mobius_Mark);
  Donnees_Piston_2->Register(&Donnees_Piston_2_Mobius_Mark);
}

bool Modele_DysfonctionnelSAN::T_Liquide_Frein_2Activity::Enabled(){
  OldEnabled=NewEnabled;
  NewEnabled=(((*(Liquide_Frein_2_Mobius_Mark)) >=1));
  return NewEnabled;
}

double Modele_DysfonctionnelSAN::T_Liquide_Frein_2Activity::LognormalParamMu(){
  return mu1;
  return 1.0;  // default rate if none is specified
}

double Modele_DysfonctionnelSAN::T_Liquide_Frein_2Activity::LognormalParamAlpha_Squared(){
  return sigma;
  return 1.0;  // default rate if none is specified
}

double Modele_DysfonctionnelSAN::T_Liquide_Frein_2Activity::Weight(){ 
  return 1;
}

bool Modele_DysfonctionnelSAN::T_Liquide_Frein_2Activity::ReactivationPredicate(){ 
  return false;
}

bool Modele_DysfonctionnelSAN::T_Liquide_Frein_2Activity::ReactivationFunction(){ 
  return false;
}

double Modele_DysfonctionnelSAN::T_Liquide_Frein_2Activity::SampleDistribution(){
  return TheDistribution->Lognormal(mu1, sigma);
}

double* Modele_DysfonctionnelSAN::T_Liquide_Frein_2Activity::ReturnDistributionParameters(){
  TheDistributionParameters[0] = LognormalParamMu();
  TheDistributionParameters[1] = LognormalParamAlpha_Squared();
  return TheDistributionParameters;
}

int Modele_DysfonctionnelSAN::T_Liquide_Frein_2Activity::Rank(){
  return 1;
}

BaseActionClass* Modele_DysfonctionnelSAN::T_Liquide_Frein_2Activity::Fire(){
  (*(Liquide_Frein_2_Mobius_Mark))--;
  (*(Donnees_Piston_2_Mobius_Mark))++;
  return this;
}

/*======================Actionner_Pedale_2Activity========================*/

Modele_DysfonctionnelSAN::Actionner_Pedale_2Activity::Actionner_Pedale_2Activity(){
  TheDistributionParameters = new double[2];
  ActivityInitialize("Actionner_Pedale_2",4,Lognormal, RaceEnabled, 3,1, false);
}

Modele_DysfonctionnelSAN::Actionner_Pedale_2Activity::~Actionner_Pedale_2Activity(){
  delete[] TheDistributionParameters;
}

void Modele_DysfonctionnelSAN::Actionner_Pedale_2Activity::LinkVariables(){
  Pedale_2->Register(&Pedale_2_Mobius_Mark);
  Piston_2->Register(&Piston_2_Mobius_Mark);
  Capteur_de_Vitesse_2->Register(&Capteur_de_Vitesse_2_Mobius_Mark);
}

bool Modele_DysfonctionnelSAN::Actionner_Pedale_2Activity::Enabled(){
  OldEnabled=NewEnabled;
  NewEnabled=(((*(Pedale_2_Mobius_Mark)) >=1));
  return NewEnabled;
}

double Modele_DysfonctionnelSAN::Actionner_Pedale_2Activity::LognormalParamMu(){
  return mu1;
  return 1.0;  // default rate if none is specified
}

double Modele_DysfonctionnelSAN::Actionner_Pedale_2Activity::LognormalParamAlpha_Squared(){
  return sigma;
  return 1.0;  // default rate if none is specified
}

double Modele_DysfonctionnelSAN::Actionner_Pedale_2Activity::Weight(){ 
  return 1;
}

bool Modele_DysfonctionnelSAN::Actionner_Pedale_2Activity::ReactivationPredicate(){ 
  return false;
}

bool Modele_DysfonctionnelSAN::Actionner_Pedale_2Activity::ReactivationFunction(){ 
  return false;
}

double Modele_DysfonctionnelSAN::Actionner_Pedale_2Activity::SampleDistribution(){
  return TheDistribution->Lognormal(mu1, sigma);
}

double* Modele_DysfonctionnelSAN::Actionner_Pedale_2Activity::ReturnDistributionParameters(){
  TheDistributionParameters[0] = LognormalParamMu();
  TheDistributionParameters[1] = LognormalParamAlpha_Squared();
  return TheDistributionParameters;
}

int Modele_DysfonctionnelSAN::Actionner_Pedale_2Activity::Rank(){
  return 1;
}

BaseActionClass* Modele_DysfonctionnelSAN::Actionner_Pedale_2Activity::Fire(){
  (*(Pedale_2_Mobius_Mark))--;
  (*(Piston_2_Mobius_Mark))++;
  (*(Capteur_de_Vitesse_2_Mobius_Mark))++;
  return this;
}

/*======================Envoyer_Donnees_Capteur_2Activity========================*/

Modele_DysfonctionnelSAN::Envoyer_Donnees_Capteur_2Activity::Envoyer_Donnees_Capteur_2Activity(){
  TheDistributionParameters = new double[2];
  ActivityInitialize("Envoyer_Donnees_Capteur_2",5,Lognormal, RaceEnabled, 2,1, false);
}

Modele_DysfonctionnelSAN::Envoyer_Donnees_Capteur_2Activity::~Envoyer_Donnees_Capteur_2Activity(){
  delete[] TheDistributionParameters;
}

void Modele_DysfonctionnelSAN::Envoyer_Donnees_Capteur_2Activity::LinkVariables(){
  Capteur_de_Vitesse_2->Register(&Capteur_de_Vitesse_2_Mobius_Mark);
  Donnees_Capteur_2->Register(&Donnees_Capteur_2_Mobius_Mark);
}

bool Modele_DysfonctionnelSAN::Envoyer_Donnees_Capteur_2Activity::Enabled(){
  OldEnabled=NewEnabled;
  NewEnabled=(((*(Capteur_de_Vitesse_2_Mobius_Mark)) >=1));
  return NewEnabled;
}

double Modele_DysfonctionnelSAN::Envoyer_Donnees_Capteur_2Activity::LognormalParamMu(){
  return mu1;
  return 1.0;  // default rate if none is specified
}

double Modele_DysfonctionnelSAN::Envoyer_Donnees_Capteur_2Activity::LognormalParamAlpha_Squared(){
  return sigma;
  return 1.0;  // default rate if none is specified
}

double Modele_DysfonctionnelSAN::Envoyer_Donnees_Capteur_2Activity::Weight(){ 
  return 1;
}

bool Modele_DysfonctionnelSAN::Envoyer_Donnees_Capteur_2Activity::ReactivationPredicate(){ 
  return false;
}

bool Modele_DysfonctionnelSAN::Envoyer_Donnees_Capteur_2Activity::ReactivationFunction(){ 
  return false;
}

double Modele_DysfonctionnelSAN::Envoyer_Donnees_Capteur_2Activity::SampleDistribution(){
  return TheDistribution->Lognormal(mu1, sigma);
}

double* Modele_DysfonctionnelSAN::Envoyer_Donnees_Capteur_2Activity::ReturnDistributionParameters(){
  TheDistributionParameters[0] = LognormalParamMu();
  TheDistributionParameters[1] = LognormalParamAlpha_Squared();
  return TheDistributionParameters;
}

int Modele_DysfonctionnelSAN::Envoyer_Donnees_Capteur_2Activity::Rank(){
  return 1;
}

BaseActionClass* Modele_DysfonctionnelSAN::Envoyer_Donnees_Capteur_2Activity::Fire(){
  (*(Capteur_de_Vitesse_2_Mobius_Mark))--;
  (*(Donnees_Capteur_2_Mobius_Mark))++;
  return this;
}

/*======================T_Calculateur_2Activity_case1========================*/

Modele_DysfonctionnelSAN::T_Calculateur_2Activity_case1::T_Calculateur_2Activity_case1(){
  TheDistributionParameters = new double[2];
  ActivityInitialize("T_Calculateur_2_case1",6,Lognormal, RaceEnabled, 2,1, false);
}

Modele_DysfonctionnelSAN::T_Calculateur_2Activity_case1::~T_Calculateur_2Activity_case1(){
  delete[] TheDistributionParameters;
}

void Modele_DysfonctionnelSAN::T_Calculateur_2Activity_case1::LinkVariables(){
  Calculateur_2->Register(&Calculateur_2_Mobius_Mark);
  Actionneur_2->Register(&Actionneur_2_Mobius_Mark);
}

bool Modele_DysfonctionnelSAN::T_Calculateur_2Activity_case1::Enabled(){
  OldEnabled=NewEnabled;
  NewEnabled=(((*(Calculateur_2_Mobius_Mark)) >=1));
  return NewEnabled;
}

double Modele_DysfonctionnelSAN::T_Calculateur_2Activity_case1::LognormalParamMu(){
  return mu1;
  return 1.0;  // default rate if none is specified
}

double Modele_DysfonctionnelSAN::T_Calculateur_2Activity_case1::LognormalParamAlpha_Squared(){
  return sigma;
  return 1.0;  // default rate if none is specified
}

double Modele_DysfonctionnelSAN::T_Calculateur_2Activity_case1::Weight(){ 
  return 0.05;
}

bool Modele_DysfonctionnelSAN::T_Calculateur_2Activity_case1::ReactivationPredicate(){ 
  return false;
}

bool Modele_DysfonctionnelSAN::T_Calculateur_2Activity_case1::ReactivationFunction(){ 
  return false;
}

double Modele_DysfonctionnelSAN::T_Calculateur_2Activity_case1::SampleDistribution(){
  return TheDistribution->Lognormal(mu1, sigma);
}

double* Modele_DysfonctionnelSAN::T_Calculateur_2Activity_case1::ReturnDistributionParameters(){
  TheDistributionParameters[0] = LognormalParamMu();
  TheDistributionParameters[1] = LognormalParamAlpha_Squared();
  return TheDistributionParameters;
}

int Modele_DysfonctionnelSAN::T_Calculateur_2Activity_case1::Rank(){
  return 1;
}

BaseActionClass* Modele_DysfonctionnelSAN::T_Calculateur_2Activity_case1::Fire(){
  (*(Calculateur_2_Mobius_Mark))--;
  (*(Actionneur_2_Mobius_Mark))++;
  return this;
}

/*======================T_Calculateur_2Activity_case2========================*/

Modele_DysfonctionnelSAN::T_Calculateur_2Activity_case2::T_Calculateur_2Activity_case2(){
  TheDistributionParameters = new double[2];
  ActivityInitialize("T_Calculateur_2_case2",6,Lognormal, RaceEnabled, 2,1, false);
}

Modele_DysfonctionnelSAN::T_Calculateur_2Activity_case2::~T_Calculateur_2Activity_case2(){
  delete[] TheDistributionParameters;
}

void Modele_DysfonctionnelSAN::T_Calculateur_2Activity_case2::LinkVariables(){
  Calculateur_2->Register(&Calculateur_2_Mobius_Mark);
  Plaquette_2->Register(&Plaquette_2_Mobius_Mark);
}

bool Modele_DysfonctionnelSAN::T_Calculateur_2Activity_case2::Enabled(){
  OldEnabled=NewEnabled;
  NewEnabled=(((*(Calculateur_2_Mobius_Mark)) >=1));
  return NewEnabled;
}

double Modele_DysfonctionnelSAN::T_Calculateur_2Activity_case2::LognormalParamMu(){
  return mu1;
  return 1.0;  // default rate if none is specified
}

double Modele_DysfonctionnelSAN::T_Calculateur_2Activity_case2::LognormalParamAlpha_Squared(){
  return sigma;
  return 1.0;  // default rate if none is specified
}

double Modele_DysfonctionnelSAN::T_Calculateur_2Activity_case2::Weight(){ 
  return 0.95;
}

bool Modele_DysfonctionnelSAN::T_Calculateur_2Activity_case2::ReactivationPredicate(){ 
  return false;
}

bool Modele_DysfonctionnelSAN::T_Calculateur_2Activity_case2::ReactivationFunction(){ 
  return false;
}

double Modele_DysfonctionnelSAN::T_Calculateur_2Activity_case2::SampleDistribution(){
  return TheDistribution->Lognormal(mu1, sigma);
}

double* Modele_DysfonctionnelSAN::T_Calculateur_2Activity_case2::ReturnDistributionParameters(){
  TheDistributionParameters[0] = LognormalParamMu();
  TheDistributionParameters[1] = LognormalParamAlpha_Squared();
  return TheDistributionParameters;
}

int Modele_DysfonctionnelSAN::T_Calculateur_2Activity_case2::Rank(){
  return 1;
}

BaseActionClass* Modele_DysfonctionnelSAN::T_Calculateur_2Activity_case2::Fire(){
  (*(Calculateur_2_Mobius_Mark))--;
  (*(Plaquette_2_Mobius_Mark))++;
  return this;
}

/*======================T_Plaquette_2Activity========================*/

Modele_DysfonctionnelSAN::T_Plaquette_2Activity::T_Plaquette_2Activity(){
  TheDistributionParameters = new double[2];
  ActivityInitialize("T_Plaquette_2",7,Lognormal, RaceEnabled, 2,1, false);
}

Modele_DysfonctionnelSAN::T_Plaquette_2Activity::~T_Plaquette_2Activity(){
  delete[] TheDistributionParameters;
}

void Modele_DysfonctionnelSAN::T_Plaquette_2Activity::LinkVariables(){
  Plaquette_2->Register(&Plaquette_2_Mobius_Mark);
  Disque_2->Register(&Disque_2_Mobius_Mark);
}

bool Modele_DysfonctionnelSAN::T_Plaquette_2Activity::Enabled(){
  OldEnabled=NewEnabled;
  NewEnabled=(((*(Plaquette_2_Mobius_Mark)) >=1));
  return NewEnabled;
}

double Modele_DysfonctionnelSAN::T_Plaquette_2Activity::LognormalParamMu(){
  return mu2;
  return 1.0;  // default rate if none is specified
}

double Modele_DysfonctionnelSAN::T_Plaquette_2Activity::LognormalParamAlpha_Squared(){
  return sigma;
  return 1.0;  // default rate if none is specified
}

double Modele_DysfonctionnelSAN::T_Plaquette_2Activity::Weight(){ 
  return 1;
}

bool Modele_DysfonctionnelSAN::T_Plaquette_2Activity::ReactivationPredicate(){ 
  return false;
}

bool Modele_DysfonctionnelSAN::T_Plaquette_2Activity::ReactivationFunction(){ 
  return false;
}

double Modele_DysfonctionnelSAN::T_Plaquette_2Activity::SampleDistribution(){
  return TheDistribution->Lognormal(mu2, sigma);
}

double* Modele_DysfonctionnelSAN::T_Plaquette_2Activity::ReturnDistributionParameters(){
  TheDistributionParameters[0] = LognormalParamMu();
  TheDistributionParameters[1] = LognormalParamAlpha_Squared();
  return TheDistributionParameters;
}

int Modele_DysfonctionnelSAN::T_Plaquette_2Activity::Rank(){
  return 1;
}

BaseActionClass* Modele_DysfonctionnelSAN::T_Plaquette_2Activity::Fire(){
  (*(Plaquette_2_Mobius_Mark))--;
  (*(Disque_2_Mobius_Mark))++;
  return this;
}

/*======================T_Disque_2Activity========================*/

Modele_DysfonctionnelSAN::T_Disque_2Activity::T_Disque_2Activity(){
  TheDistributionParameters = new double[2];
  ActivityInitialize("T_Disque_2",8,Lognormal, RaceEnabled, 2,1, false);
}

Modele_DysfonctionnelSAN::T_Disque_2Activity::~T_Disque_2Activity(){
  delete[] TheDistributionParameters;
}

void Modele_DysfonctionnelSAN::T_Disque_2Activity::LinkVariables(){
  Disque_2->Register(&Disque_2_Mobius_Mark);
  Frein_2->Register(&Frein_2_Mobius_Mark);
}

bool Modele_DysfonctionnelSAN::T_Disque_2Activity::Enabled(){
  OldEnabled=NewEnabled;
  NewEnabled=(((*(Disque_2_Mobius_Mark)) >=1));
  return NewEnabled;
}

double Modele_DysfonctionnelSAN::T_Disque_2Activity::LognormalParamMu(){
  return mu2;
  return 1.0;  // default rate if none is specified
}

double Modele_DysfonctionnelSAN::T_Disque_2Activity::LognormalParamAlpha_Squared(){
  return sigma;
  return 1.0;  // default rate if none is specified
}

double Modele_DysfonctionnelSAN::T_Disque_2Activity::Weight(){ 
  return 1;
}

bool Modele_DysfonctionnelSAN::T_Disque_2Activity::ReactivationPredicate(){ 
  return false;
}

bool Modele_DysfonctionnelSAN::T_Disque_2Activity::ReactivationFunction(){ 
  return false;
}

double Modele_DysfonctionnelSAN::T_Disque_2Activity::SampleDistribution(){
  return TheDistribution->Lognormal(mu2, sigma);
}

double* Modele_DysfonctionnelSAN::T_Disque_2Activity::ReturnDistributionParameters(){
  TheDistributionParameters[0] = LognormalParamMu();
  TheDistributionParameters[1] = LognormalParamAlpha_Squared();
  return TheDistributionParameters;
}

int Modele_DysfonctionnelSAN::T_Disque_2Activity::Rank(){
  return 1;
}

BaseActionClass* Modele_DysfonctionnelSAN::T_Disque_2Activity::Fire(){
  (*(Disque_2_Mobius_Mark))--;
  (*(Frein_2_Mobius_Mark))++;
  return this;
}

/*======================T_Actionneur_2Activity========================*/

Modele_DysfonctionnelSAN::T_Actionneur_2Activity::T_Actionneur_2Activity(){
  TheDistributionParameters = new double[2];
  ActivityInitialize("T_Actionneur_2",9,Lognormal, RaceEnabled, 2,1, false);
}

Modele_DysfonctionnelSAN::T_Actionneur_2Activity::~T_Actionneur_2Activity(){
  delete[] TheDistributionParameters;
}

void Modele_DysfonctionnelSAN::T_Actionneur_2Activity::LinkVariables(){
  Actionneur_2->Register(&Actionneur_2_Mobius_Mark);
  Valve_2->Register(&Valve_2_Mobius_Mark);
}

bool Modele_DysfonctionnelSAN::T_Actionneur_2Activity::Enabled(){
  OldEnabled=NewEnabled;
  NewEnabled=(((*(Actionneur_2_Mobius_Mark)) >=1));
  return NewEnabled;
}

double Modele_DysfonctionnelSAN::T_Actionneur_2Activity::LognormalParamMu(){
  return mu1;
  return 1.0;  // default rate if none is specified
}

double Modele_DysfonctionnelSAN::T_Actionneur_2Activity::LognormalParamAlpha_Squared(){
  return sigma;
  return 1.0;  // default rate if none is specified
}

double Modele_DysfonctionnelSAN::T_Actionneur_2Activity::Weight(){ 
  return 1;
}

bool Modele_DysfonctionnelSAN::T_Actionneur_2Activity::ReactivationPredicate(){ 
  return false;
}

bool Modele_DysfonctionnelSAN::T_Actionneur_2Activity::ReactivationFunction(){ 
  return false;
}

double Modele_DysfonctionnelSAN::T_Actionneur_2Activity::SampleDistribution(){
  return TheDistribution->Lognormal(mu1, sigma);
}

double* Modele_DysfonctionnelSAN::T_Actionneur_2Activity::ReturnDistributionParameters(){
  TheDistributionParameters[0] = LognormalParamMu();
  TheDistributionParameters[1] = LognormalParamAlpha_Squared();
  return TheDistributionParameters;
}

int Modele_DysfonctionnelSAN::T_Actionneur_2Activity::Rank(){
  return 1;
}

BaseActionClass* Modele_DysfonctionnelSAN::T_Actionneur_2Activity::Fire(){
  (*(Actionneur_2_Mobius_Mark))--;
  (*(Valve_2_Mobius_Mark))++;
  return this;
}

/*======================T_Valve_2Activity========================*/

Modele_DysfonctionnelSAN::T_Valve_2Activity::T_Valve_2Activity(){
  TheDistributionParameters = new double[2];
  ActivityInitialize("T_Valve_2",10,Lognormal, RaceEnabled, 2,1, false);
}

Modele_DysfonctionnelSAN::T_Valve_2Activity::~T_Valve_2Activity(){
  delete[] TheDistributionParameters;
}

void Modele_DysfonctionnelSAN::T_Valve_2Activity::LinkVariables(){
  Valve_2->Register(&Valve_2_Mobius_Mark);
  Plaquette_2->Register(&Plaquette_2_Mobius_Mark);
}

bool Modele_DysfonctionnelSAN::T_Valve_2Activity::Enabled(){
  OldEnabled=NewEnabled;
  NewEnabled=(((*(Valve_2_Mobius_Mark)) >=1));
  return NewEnabled;
}

double Modele_DysfonctionnelSAN::T_Valve_2Activity::LognormalParamMu(){
  return mu2;
  return 1.0;  // default rate if none is specified
}

double Modele_DysfonctionnelSAN::T_Valve_2Activity::LognormalParamAlpha_Squared(){
  return sigma;
  return 1.0;  // default rate if none is specified
}

double Modele_DysfonctionnelSAN::T_Valve_2Activity::Weight(){ 
  return 1;
}

bool Modele_DysfonctionnelSAN::T_Valve_2Activity::ReactivationPredicate(){ 
  return false;
}

bool Modele_DysfonctionnelSAN::T_Valve_2Activity::ReactivationFunction(){ 
  return false;
}

double Modele_DysfonctionnelSAN::T_Valve_2Activity::SampleDistribution(){
  return TheDistribution->Lognormal(mu2, sigma);
}

double* Modele_DysfonctionnelSAN::T_Valve_2Activity::ReturnDistributionParameters(){
  TheDistributionParameters[0] = LognormalParamMu();
  TheDistributionParameters[1] = LognormalParamAlpha_Squared();
  return TheDistributionParameters;
}

int Modele_DysfonctionnelSAN::T_Valve_2Activity::Rank(){
  return 1;
}

BaseActionClass* Modele_DysfonctionnelSAN::T_Valve_2Activity::Fire(){
  (*(Valve_2_Mobius_Mark))--;
  (*(Plaquette_2_Mobius_Mark))++;
  return this;
}

/*======================Rupture_MecaniqueActivity========================*/

Modele_DysfonctionnelSAN::Rupture_MecaniqueActivity::Rupture_MecaniqueActivity(){
  TheDistributionParameters = new double[2];
  ActivityInitialize("Rupture_Mecanique",11,Weibull, RaceEnabled, 2,1, false);
}

Modele_DysfonctionnelSAN::Rupture_MecaniqueActivity::~Rupture_MecaniqueActivity(){
  delete[] TheDistributionParameters;
}

void Modele_DysfonctionnelSAN::Rupture_MecaniqueActivity::LinkVariables(){
  Pedale_2->Register(&Pedale_2_Mobius_Mark);
  Pedale_dys->Register(&Pedale_dys_Mobius_Mark);
}

bool Modele_DysfonctionnelSAN::Rupture_MecaniqueActivity::Enabled(){
  OldEnabled=NewEnabled;
  NewEnabled=(((*(Pedale_2_Mobius_Mark)) >=1));
  return NewEnabled;
}

double Modele_DysfonctionnelSAN::Rupture_MecaniqueActivity::WeibullParamAlpha(){
  return alpha;
  return 1.0;  // default rate if none is specified
}

double Modele_DysfonctionnelSAN::Rupture_MecaniqueActivity::WeibullParamBeta(){
  return beta1;
  return 1.0;  // default rate if none is specified
}

double Modele_DysfonctionnelSAN::Rupture_MecaniqueActivity::Weight(){ 
  return 1;
}

bool Modele_DysfonctionnelSAN::Rupture_MecaniqueActivity::ReactivationPredicate(){ 
  return false;
}

bool Modele_DysfonctionnelSAN::Rupture_MecaniqueActivity::ReactivationFunction(){ 
  return false;
}

double Modele_DysfonctionnelSAN::Rupture_MecaniqueActivity::SampleDistribution(){
  return TheDistribution->Weibull(alpha, beta1);
}

double* Modele_DysfonctionnelSAN::Rupture_MecaniqueActivity::ReturnDistributionParameters(){
  TheDistributionParameters[0] = WeibullParamAlpha();
  TheDistributionParameters[1] = WeibullParamBeta();
  return TheDistributionParameters;
}

int Modele_DysfonctionnelSAN::Rupture_MecaniqueActivity::Rank(){
  return 1;
}

BaseActionClass* Modele_DysfonctionnelSAN::Rupture_MecaniqueActivity::Fire(){
  (*(Pedale_2_Mobius_Mark))--;
  (*(Pedale_dys_Mobius_Mark))++;
  return this;
}

/*======================Grippage_PistonActivity========================*/

Modele_DysfonctionnelSAN::Grippage_PistonActivity::Grippage_PistonActivity(){
  TheDistributionParameters = new double[2];
  ActivityInitialize("Grippage_Piston",12,Weibull, RaceEnabled, 2,1, false);
}

Modele_DysfonctionnelSAN::Grippage_PistonActivity::~Grippage_PistonActivity(){
  delete[] TheDistributionParameters;
}

void Modele_DysfonctionnelSAN::Grippage_PistonActivity::LinkVariables(){
  Piston_2->Register(&Piston_2_Mobius_Mark);
  Piston_dys->Register(&Piston_dys_Mobius_Mark);
}

bool Modele_DysfonctionnelSAN::Grippage_PistonActivity::Enabled(){
  OldEnabled=NewEnabled;
  NewEnabled=(((*(Piston_2_Mobius_Mark)) >=1));
  return NewEnabled;
}

double Modele_DysfonctionnelSAN::Grippage_PistonActivity::WeibullParamAlpha(){
  return alpha;
  return 1.0;  // default rate if none is specified
}

double Modele_DysfonctionnelSAN::Grippage_PistonActivity::WeibullParamBeta(){
  return beta1;
  return 1.0;  // default rate if none is specified
}

double Modele_DysfonctionnelSAN::Grippage_PistonActivity::Weight(){ 
  return 1;
}

bool Modele_DysfonctionnelSAN::Grippage_PistonActivity::ReactivationPredicate(){ 
  return false;
}

bool Modele_DysfonctionnelSAN::Grippage_PistonActivity::ReactivationFunction(){ 
  return false;
}

double Modele_DysfonctionnelSAN::Grippage_PistonActivity::SampleDistribution(){
  return TheDistribution->Weibull(alpha, beta1);
}

double* Modele_DysfonctionnelSAN::Grippage_PistonActivity::ReturnDistributionParameters(){
  TheDistributionParameters[0] = WeibullParamAlpha();
  TheDistributionParameters[1] = WeibullParamBeta();
  return TheDistributionParameters;
}

int Modele_DysfonctionnelSAN::Grippage_PistonActivity::Rank(){
  return 1;
}

BaseActionClass* Modele_DysfonctionnelSAN::Grippage_PistonActivity::Fire(){
  (*(Piston_2_Mobius_Mark))--;
  (*(Piston_dys_Mobius_Mark))++;
  return this;
}

/*======================Problemes_FluiditeActivity========================*/

Modele_DysfonctionnelSAN::Problemes_FluiditeActivity::Problemes_FluiditeActivity(){
  TheDistributionParameters = new double[2];
  ActivityInitialize("Problemes_Fluidite",13,Weibull, RaceEnabled, 2,1, false);
}

Modele_DysfonctionnelSAN::Problemes_FluiditeActivity::~Problemes_FluiditeActivity(){
  delete[] TheDistributionParameters;
}

void Modele_DysfonctionnelSAN::Problemes_FluiditeActivity::LinkVariables(){
  Liquide_Frein_2->Register(&Liquide_Frein_2_Mobius_Mark);
  Liquide_Frein_dys->Register(&Liquide_Frein_dys_Mobius_Mark);
}

bool Modele_DysfonctionnelSAN::Problemes_FluiditeActivity::Enabled(){
  OldEnabled=NewEnabled;
  NewEnabled=(((*(Liquide_Frein_2_Mobius_Mark)) >=1));
  return NewEnabled;
}

double Modele_DysfonctionnelSAN::Problemes_FluiditeActivity::WeibullParamAlpha(){
  return alpha;
  return 1.0;  // default rate if none is specified
}

double Modele_DysfonctionnelSAN::Problemes_FluiditeActivity::WeibullParamBeta(){
  return beta1;
  return 1.0;  // default rate if none is specified
}

double Modele_DysfonctionnelSAN::Problemes_FluiditeActivity::Weight(){ 
  return 1;
}

bool Modele_DysfonctionnelSAN::Problemes_FluiditeActivity::ReactivationPredicate(){ 
  return false;
}

bool Modele_DysfonctionnelSAN::Problemes_FluiditeActivity::ReactivationFunction(){ 
  return false;
}

double Modele_DysfonctionnelSAN::Problemes_FluiditeActivity::SampleDistribution(){
  return TheDistribution->Weibull(alpha, beta1);
}

double* Modele_DysfonctionnelSAN::Problemes_FluiditeActivity::ReturnDistributionParameters(){
  TheDistributionParameters[0] = WeibullParamAlpha();
  TheDistributionParameters[1] = WeibullParamBeta();
  return TheDistributionParameters;
}

int Modele_DysfonctionnelSAN::Problemes_FluiditeActivity::Rank(){
  return 1;
}

BaseActionClass* Modele_DysfonctionnelSAN::Problemes_FluiditeActivity::Fire(){
  (*(Liquide_Frein_2_Mobius_Mark))--;
  (*(Liquide_Frein_dys_Mobius_Mark))++;
  return this;
}

/*======================Problemes_LubrificationActivity========================*/

Modele_DysfonctionnelSAN::Problemes_LubrificationActivity::Problemes_LubrificationActivity(){
  TheDistributionParameters = new double[2];
  ActivityInitialize("Problemes_Lubrification",14,Weibull, RaceEnabled, 2,1, false);
}

Modele_DysfonctionnelSAN::Problemes_LubrificationActivity::~Problemes_LubrificationActivity(){
  delete[] TheDistributionParameters;
}

void Modele_DysfonctionnelSAN::Problemes_LubrificationActivity::LinkVariables(){
  Liquide_Frein_2->Register(&Liquide_Frein_2_Mobius_Mark);
  Liquide_Frein_dys->Register(&Liquide_Frein_dys_Mobius_Mark);
}

bool Modele_DysfonctionnelSAN::Problemes_LubrificationActivity::Enabled(){
  OldEnabled=NewEnabled;
  NewEnabled=(((*(Liquide_Frein_2_Mobius_Mark)) >=1));
  return NewEnabled;
}

double Modele_DysfonctionnelSAN::Problemes_LubrificationActivity::WeibullParamAlpha(){
  return alpha;
  return 1.0;  // default rate if none is specified
}

double Modele_DysfonctionnelSAN::Problemes_LubrificationActivity::WeibullParamBeta(){
  return beta1;
  return 1.0;  // default rate if none is specified
}

double Modele_DysfonctionnelSAN::Problemes_LubrificationActivity::Weight(){ 
  return 1;
}

bool Modele_DysfonctionnelSAN::Problemes_LubrificationActivity::ReactivationPredicate(){ 
  return false;
}

bool Modele_DysfonctionnelSAN::Problemes_LubrificationActivity::ReactivationFunction(){ 
  return false;
}

double Modele_DysfonctionnelSAN::Problemes_LubrificationActivity::SampleDistribution(){
  return TheDistribution->Weibull(alpha, beta1);
}

double* Modele_DysfonctionnelSAN::Problemes_LubrificationActivity::ReturnDistributionParameters(){
  TheDistributionParameters[0] = WeibullParamAlpha();
  TheDistributionParameters[1] = WeibullParamBeta();
  return TheDistributionParameters;
}

int Modele_DysfonctionnelSAN::Problemes_LubrificationActivity::Rank(){
  return 1;
}

BaseActionClass* Modele_DysfonctionnelSAN::Problemes_LubrificationActivity::Fire(){
  (*(Liquide_Frein_2_Mobius_Mark))--;
  (*(Liquide_Frein_dys_Mobius_Mark))++;
  return this;
}

/*======================Fissuration_ReservoirActivity========================*/

Modele_DysfonctionnelSAN::Fissuration_ReservoirActivity::Fissuration_ReservoirActivity(){
  TheDistributionParameters = new double[2];
  ActivityInitialize("Fissuration_Reservoir",15,Weibull, RaceEnabled, 2,1, false);
}

Modele_DysfonctionnelSAN::Fissuration_ReservoirActivity::~Fissuration_ReservoirActivity(){
  delete[] TheDistributionParameters;
}

void Modele_DysfonctionnelSAN::Fissuration_ReservoirActivity::LinkVariables(){
  Reservoir_2->Register(&Reservoir_2_Mobius_Mark);
  Reservoir_dys->Register(&Reservoir_dys_Mobius_Mark);
}

bool Modele_DysfonctionnelSAN::Fissuration_ReservoirActivity::Enabled(){
  OldEnabled=NewEnabled;
  NewEnabled=(((*(Reservoir_2_Mobius_Mark)) >=1));
  return NewEnabled;
}

double Modele_DysfonctionnelSAN::Fissuration_ReservoirActivity::WeibullParamAlpha(){
  return alpha;
  return 1.0;  // default rate if none is specified
}

double Modele_DysfonctionnelSAN::Fissuration_ReservoirActivity::WeibullParamBeta(){
  return beta1;
  return 1.0;  // default rate if none is specified
}

double Modele_DysfonctionnelSAN::Fissuration_ReservoirActivity::Weight(){ 
  return 1;
}

bool Modele_DysfonctionnelSAN::Fissuration_ReservoirActivity::ReactivationPredicate(){ 
  return false;
}

bool Modele_DysfonctionnelSAN::Fissuration_ReservoirActivity::ReactivationFunction(){ 
  return false;
}

double Modele_DysfonctionnelSAN::Fissuration_ReservoirActivity::SampleDistribution(){
  return TheDistribution->Weibull(alpha, beta1);
}

double* Modele_DysfonctionnelSAN::Fissuration_ReservoirActivity::ReturnDistributionParameters(){
  TheDistributionParameters[0] = WeibullParamAlpha();
  TheDistributionParameters[1] = WeibullParamBeta();
  return TheDistributionParameters;
}

int Modele_DysfonctionnelSAN::Fissuration_ReservoirActivity::Rank(){
  return 1;
}

BaseActionClass* Modele_DysfonctionnelSAN::Fissuration_ReservoirActivity::Fire(){
  (*(Reservoir_2_Mobius_Mark))--;
  (*(Reservoir_dys_Mobius_Mark))++;
  return this;
}

/*======================Grippage_Maitre_CylindreActivity========================*/

Modele_DysfonctionnelSAN::Grippage_Maitre_CylindreActivity::Grippage_Maitre_CylindreActivity(){
  TheDistributionParameters = new double[2];
  ActivityInitialize("Grippage_Maitre_Cylindre",16,Weibull, RaceEnabled, 2,1, false);
}

Modele_DysfonctionnelSAN::Grippage_Maitre_CylindreActivity::~Grippage_Maitre_CylindreActivity(){
  delete[] TheDistributionParameters;
}

void Modele_DysfonctionnelSAN::Grippage_Maitre_CylindreActivity::LinkVariables(){
  Maitre_Cylindre_2->Register(&Maitre_Cylindre_2_Mobius_Mark);
  Maitre_Cylindre_dys->Register(&Maitre_Cylindre_dys_Mobius_Mark);
}

bool Modele_DysfonctionnelSAN::Grippage_Maitre_CylindreActivity::Enabled(){
  OldEnabled=NewEnabled;
  NewEnabled=(((*(Maitre_Cylindre_2_Mobius_Mark)) >=1));
  return NewEnabled;
}

double Modele_DysfonctionnelSAN::Grippage_Maitre_CylindreActivity::WeibullParamAlpha(){
  return alpha;
  return 1.0;  // default rate if none is specified
}

double Modele_DysfonctionnelSAN::Grippage_Maitre_CylindreActivity::WeibullParamBeta(){
  return beta1;
  return 1.0;  // default rate if none is specified
}

double Modele_DysfonctionnelSAN::Grippage_Maitre_CylindreActivity::Weight(){ 
  return 1;
}

bool Modele_DysfonctionnelSAN::Grippage_Maitre_CylindreActivity::ReactivationPredicate(){ 
  return false;
}

bool Modele_DysfonctionnelSAN::Grippage_Maitre_CylindreActivity::ReactivationFunction(){ 
  return false;
}

double Modele_DysfonctionnelSAN::Grippage_Maitre_CylindreActivity::SampleDistribution(){
  return TheDistribution->Weibull(alpha, beta1);
}

double* Modele_DysfonctionnelSAN::Grippage_Maitre_CylindreActivity::ReturnDistributionParameters(){
  TheDistributionParameters[0] = WeibullParamAlpha();
  TheDistributionParameters[1] = WeibullParamBeta();
  return TheDistributionParameters;
}

int Modele_DysfonctionnelSAN::Grippage_Maitre_CylindreActivity::Rank(){
  return 1;
}

BaseActionClass* Modele_DysfonctionnelSAN::Grippage_Maitre_CylindreActivity::Fire(){
  (*(Maitre_Cylindre_2_Mobius_Mark))--;
  (*(Maitre_Cylindre_dys_Mobius_Mark))++;
  return this;
}

/*======================Rupture_Fil_LiaisonActivity========================*/

Modele_DysfonctionnelSAN::Rupture_Fil_LiaisonActivity::Rupture_Fil_LiaisonActivity(){
  TheDistributionParameters = new double[1];
  ActivityInitialize("Rupture_Fil_Liaison",17,Exponential, RaceEnabled, 2,1, false);
}

Modele_DysfonctionnelSAN::Rupture_Fil_LiaisonActivity::~Rupture_Fil_LiaisonActivity(){
  delete[] TheDistributionParameters;
}

void Modele_DysfonctionnelSAN::Rupture_Fil_LiaisonActivity::LinkVariables(){
  Capteur_de_Vitesse_2->Register(&Capteur_de_Vitesse_2_Mobius_Mark);
  Capteur_dys->Register(&Capteur_dys_Mobius_Mark);
}

bool Modele_DysfonctionnelSAN::Rupture_Fil_LiaisonActivity::Enabled(){
  OldEnabled=NewEnabled;
  NewEnabled=(((*(Capteur_de_Vitesse_2_Mobius_Mark)) >=1));
  return NewEnabled;
}

double Modele_DysfonctionnelSAN::Rupture_Fil_LiaisonActivity::Rate(){
  return lambda;
  return 1.0;  // default rate if none is specified
}

double Modele_DysfonctionnelSAN::Rupture_Fil_LiaisonActivity::Weight(){ 
  return 1;
}

bool Modele_DysfonctionnelSAN::Rupture_Fil_LiaisonActivity::ReactivationPredicate(){ 
  return false;
}

bool Modele_DysfonctionnelSAN::Rupture_Fil_LiaisonActivity::ReactivationFunction(){ 
  return false;
}

double Modele_DysfonctionnelSAN::Rupture_Fil_LiaisonActivity::SampleDistribution(){
  return TheDistribution->Exponential(lambda);
}

double* Modele_DysfonctionnelSAN::Rupture_Fil_LiaisonActivity::ReturnDistributionParameters(){
  TheDistributionParameters[0] = Rate();
  return TheDistributionParameters;
}

int Modele_DysfonctionnelSAN::Rupture_Fil_LiaisonActivity::Rank(){
  return 1;
}

BaseActionClass* Modele_DysfonctionnelSAN::Rupture_Fil_LiaisonActivity::Fire(){
  (*(Capteur_de_Vitesse_2_Mobius_Mark))--;
  (*(Capteur_dys_Mobius_Mark))++;
  return this;
}

/*======================Donnees_AberrantesActivity========================*/

Modele_DysfonctionnelSAN::Donnees_AberrantesActivity::Donnees_AberrantesActivity(){
  TheDistributionParameters = new double[1];
  ActivityInitialize("Donnees_Aberrantes",18,Exponential, RaceEnabled, 2,1, false);
}

Modele_DysfonctionnelSAN::Donnees_AberrantesActivity::~Donnees_AberrantesActivity(){
  delete[] TheDistributionParameters;
}

void Modele_DysfonctionnelSAN::Donnees_AberrantesActivity::LinkVariables(){
  Calculateur_2->Register(&Calculateur_2_Mobius_Mark);
  Calculateur_dys->Register(&Calculateur_dys_Mobius_Mark);
}

bool Modele_DysfonctionnelSAN::Donnees_AberrantesActivity::Enabled(){
  OldEnabled=NewEnabled;
  NewEnabled=(((*(Calculateur_2_Mobius_Mark)) >=1));
  return NewEnabled;
}

double Modele_DysfonctionnelSAN::Donnees_AberrantesActivity::Rate(){
  return lambda;
  return 1.0;  // default rate if none is specified
}

double Modele_DysfonctionnelSAN::Donnees_AberrantesActivity::Weight(){ 
  return 1;
}

bool Modele_DysfonctionnelSAN::Donnees_AberrantesActivity::ReactivationPredicate(){ 
  return false;
}

bool Modele_DysfonctionnelSAN::Donnees_AberrantesActivity::ReactivationFunction(){ 
  return false;
}

double Modele_DysfonctionnelSAN::Donnees_AberrantesActivity::SampleDistribution(){
  return TheDistribution->Exponential(lambda);
}

double* Modele_DysfonctionnelSAN::Donnees_AberrantesActivity::ReturnDistributionParameters(){
  TheDistributionParameters[0] = Rate();
  return TheDistributionParameters;
}

int Modele_DysfonctionnelSAN::Donnees_AberrantesActivity::Rank(){
  return 1;
}

BaseActionClass* Modele_DysfonctionnelSAN::Donnees_AberrantesActivity::Fire(){
  (*(Calculateur_2_Mobius_Mark))--;
  (*(Calculateur_dys_Mobius_Mark))++;
  return this;
}

/*======================Problemes_Entree_SortieActivity========================*/

Modele_DysfonctionnelSAN::Problemes_Entree_SortieActivity::Problemes_Entree_SortieActivity(){
  TheDistributionParameters = new double[1];
  ActivityInitialize("Problemes_Entree_Sortie",19,Exponential, RaceEnabled, 2,1, false);
}

Modele_DysfonctionnelSAN::Problemes_Entree_SortieActivity::~Problemes_Entree_SortieActivity(){
  delete[] TheDistributionParameters;
}

void Modele_DysfonctionnelSAN::Problemes_Entree_SortieActivity::LinkVariables(){
  Calculateur_2->Register(&Calculateur_2_Mobius_Mark);
  Calculateur_dys->Register(&Calculateur_dys_Mobius_Mark);
}

bool Modele_DysfonctionnelSAN::Problemes_Entree_SortieActivity::Enabled(){
  OldEnabled=NewEnabled;
  NewEnabled=(((*(Calculateur_2_Mobius_Mark)) >=1));
  return NewEnabled;
}

double Modele_DysfonctionnelSAN::Problemes_Entree_SortieActivity::Rate(){
  return lambda;
  return 1.0;  // default rate if none is specified
}

double Modele_DysfonctionnelSAN::Problemes_Entree_SortieActivity::Weight(){ 
  return 1;
}

bool Modele_DysfonctionnelSAN::Problemes_Entree_SortieActivity::ReactivationPredicate(){ 
  return false;
}

bool Modele_DysfonctionnelSAN::Problemes_Entree_SortieActivity::ReactivationFunction(){ 
  return false;
}

double Modele_DysfonctionnelSAN::Problemes_Entree_SortieActivity::SampleDistribution(){
  return TheDistribution->Exponential(lambda);
}

double* Modele_DysfonctionnelSAN::Problemes_Entree_SortieActivity::ReturnDistributionParameters(){
  TheDistributionParameters[0] = Rate();
  return TheDistributionParameters;
}

int Modele_DysfonctionnelSAN::Problemes_Entree_SortieActivity::Rank(){
  return 1;
}

BaseActionClass* Modele_DysfonctionnelSAN::Problemes_Entree_SortieActivity::Fire(){
  (*(Calculateur_2_Mobius_Mark))--;
  (*(Calculateur_dys_Mobius_Mark))++;
  return this;
}

/*======================Deifallance_Systeme_OperationActivity========================*/

Modele_DysfonctionnelSAN::Deifallance_Systeme_OperationActivity::Deifallance_Systeme_OperationActivity(){
  TheDistributionParameters = new double[1];
  ActivityInitialize("Deifallance_Systeme_Operation",20,Exponential, RaceEnabled, 2,1, false);
}

Modele_DysfonctionnelSAN::Deifallance_Systeme_OperationActivity::~Deifallance_Systeme_OperationActivity(){
  delete[] TheDistributionParameters;
}

void Modele_DysfonctionnelSAN::Deifallance_Systeme_OperationActivity::LinkVariables(){
  Calculateur_2->Register(&Calculateur_2_Mobius_Mark);
  Calculateur_dys->Register(&Calculateur_dys_Mobius_Mark);
}

bool Modele_DysfonctionnelSAN::Deifallance_Systeme_OperationActivity::Enabled(){
  OldEnabled=NewEnabled;
  NewEnabled=(((*(Calculateur_2_Mobius_Mark)) >=1));
  return NewEnabled;
}

double Modele_DysfonctionnelSAN::Deifallance_Systeme_OperationActivity::Rate(){
  return lambda;
  return 1.0;  // default rate if none is specified
}

double Modele_DysfonctionnelSAN::Deifallance_Systeme_OperationActivity::Weight(){ 
  return 1;
}

bool Modele_DysfonctionnelSAN::Deifallance_Systeme_OperationActivity::ReactivationPredicate(){ 
  return false;
}

bool Modele_DysfonctionnelSAN::Deifallance_Systeme_OperationActivity::ReactivationFunction(){ 
  return false;
}

double Modele_DysfonctionnelSAN::Deifallance_Systeme_OperationActivity::SampleDistribution(){
  return TheDistribution->Exponential(lambda);
}

double* Modele_DysfonctionnelSAN::Deifallance_Systeme_OperationActivity::ReturnDistributionParameters(){
  TheDistributionParameters[0] = Rate();
  return TheDistributionParameters;
}

int Modele_DysfonctionnelSAN::Deifallance_Systeme_OperationActivity::Rank(){
  return 1;
}

BaseActionClass* Modele_DysfonctionnelSAN::Deifallance_Systeme_OperationActivity::Fire(){
  (*(Calculateur_2_Mobius_Mark))--;
  (*(Calculateur_dys_Mobius_Mark))++;
  return this;
}

/*======================Court_Circuit_BobineActivity========================*/

Modele_DysfonctionnelSAN::Court_Circuit_BobineActivity::Court_Circuit_BobineActivity(){
  TheDistributionParameters = new double[1];
  ActivityInitialize("Court_Circuit_Bobine",21,Exponential, RaceEnabled, 2,1, false);
}

Modele_DysfonctionnelSAN::Court_Circuit_BobineActivity::~Court_Circuit_BobineActivity(){
  delete[] TheDistributionParameters;
}

void Modele_DysfonctionnelSAN::Court_Circuit_BobineActivity::LinkVariables(){
  Actionneur_2->Register(&Actionneur_2_Mobius_Mark);
  Actionneur_dys->Register(&Actionneur_dys_Mobius_Mark);
}

bool Modele_DysfonctionnelSAN::Court_Circuit_BobineActivity::Enabled(){
  OldEnabled=NewEnabled;
  NewEnabled=(((*(Actionneur_2_Mobius_Mark)) >=1));
  return NewEnabled;
}

double Modele_DysfonctionnelSAN::Court_Circuit_BobineActivity::Rate(){
  return lambda;
  return 1.0;  // default rate if none is specified
}

double Modele_DysfonctionnelSAN::Court_Circuit_BobineActivity::Weight(){ 
  return 1;
}

bool Modele_DysfonctionnelSAN::Court_Circuit_BobineActivity::ReactivationPredicate(){ 
  return false;
}

bool Modele_DysfonctionnelSAN::Court_Circuit_BobineActivity::ReactivationFunction(){ 
  return false;
}

double Modele_DysfonctionnelSAN::Court_Circuit_BobineActivity::SampleDistribution(){
  return TheDistribution->Exponential(lambda);
}

double* Modele_DysfonctionnelSAN::Court_Circuit_BobineActivity::ReturnDistributionParameters(){
  TheDistributionParameters[0] = Rate();
  return TheDistributionParameters;
}

int Modele_DysfonctionnelSAN::Court_Circuit_BobineActivity::Rank(){
  return 1;
}

BaseActionClass* Modele_DysfonctionnelSAN::Court_Circuit_BobineActivity::Fire(){
  (*(Actionneur_2_Mobius_Mark))--;
  (*(Actionneur_dys_Mobius_Mark))++;
  return this;
}

/*======================Grippage_ValveActivity========================*/

Modele_DysfonctionnelSAN::Grippage_ValveActivity::Grippage_ValveActivity(){
  TheDistributionParameters = new double[2];
  ActivityInitialize("Grippage_Valve",22,Weibull, RaceEnabled, 2,1, false);
}

Modele_DysfonctionnelSAN::Grippage_ValveActivity::~Grippage_ValveActivity(){
  delete[] TheDistributionParameters;
}

void Modele_DysfonctionnelSAN::Grippage_ValveActivity::LinkVariables(){
  Valve_2->Register(&Valve_2_Mobius_Mark);
  Valve_dys->Register(&Valve_dys_Mobius_Mark);
}

bool Modele_DysfonctionnelSAN::Grippage_ValveActivity::Enabled(){
  OldEnabled=NewEnabled;
  NewEnabled=(((*(Valve_2_Mobius_Mark)) >=1));
  return NewEnabled;
}

double Modele_DysfonctionnelSAN::Grippage_ValveActivity::WeibullParamAlpha(){
  return alpha;
  return 1.0;  // default rate if none is specified
}

double Modele_DysfonctionnelSAN::Grippage_ValveActivity::WeibullParamBeta(){
  return beta2;
  return 1.0;  // default rate if none is specified
}

double Modele_DysfonctionnelSAN::Grippage_ValveActivity::Weight(){ 
  return 1;
}

bool Modele_DysfonctionnelSAN::Grippage_ValveActivity::ReactivationPredicate(){ 
  return false;
}

bool Modele_DysfonctionnelSAN::Grippage_ValveActivity::ReactivationFunction(){ 
  return false;
}

double Modele_DysfonctionnelSAN::Grippage_ValveActivity::SampleDistribution(){
  return TheDistribution->Weibull(alpha, beta2);
}

double* Modele_DysfonctionnelSAN::Grippage_ValveActivity::ReturnDistributionParameters(){
  TheDistributionParameters[0] = WeibullParamAlpha();
  TheDistributionParameters[1] = WeibullParamBeta();
  return TheDistributionParameters;
}

int Modele_DysfonctionnelSAN::Grippage_ValveActivity::Rank(){
  return 1;
}

BaseActionClass* Modele_DysfonctionnelSAN::Grippage_ValveActivity::Fire(){
  (*(Valve_2_Mobius_Mark))--;
  (*(Valve_dys_Mobius_Mark))++;
  return this;
}

/*======================FuiteActivity========================*/

Modele_DysfonctionnelSAN::FuiteActivity::FuiteActivity(){
  TheDistributionParameters = new double[2];
  ActivityInitialize("Fuite",23,Weibull, RaceEnabled, 2,1, false);
}

Modele_DysfonctionnelSAN::FuiteActivity::~FuiteActivity(){
  delete[] TheDistributionParameters;
}

void Modele_DysfonctionnelSAN::FuiteActivity::LinkVariables(){
  Valve_2->Register(&Valve_2_Mobius_Mark);
  Valve_dys->Register(&Valve_dys_Mobius_Mark);
}

bool Modele_DysfonctionnelSAN::FuiteActivity::Enabled(){
  OldEnabled=NewEnabled;
  NewEnabled=(((*(Valve_2_Mobius_Mark)) >=1));
  return NewEnabled;
}

double Modele_DysfonctionnelSAN::FuiteActivity::WeibullParamAlpha(){
  return alpha;
  return 1.0;  // default rate if none is specified
}

double Modele_DysfonctionnelSAN::FuiteActivity::WeibullParamBeta(){
  return beta2;
  return 1.0;  // default rate if none is specified
}

double Modele_DysfonctionnelSAN::FuiteActivity::Weight(){ 
  return 1;
}

bool Modele_DysfonctionnelSAN::FuiteActivity::ReactivationPredicate(){ 
  return false;
}

bool Modele_DysfonctionnelSAN::FuiteActivity::ReactivationFunction(){ 
  return false;
}

double Modele_DysfonctionnelSAN::FuiteActivity::SampleDistribution(){
  return TheDistribution->Weibull(alpha, beta2);
}

double* Modele_DysfonctionnelSAN::FuiteActivity::ReturnDistributionParameters(){
  TheDistributionParameters[0] = WeibullParamAlpha();
  TheDistributionParameters[1] = WeibullParamBeta();
  return TheDistributionParameters;
}

int Modele_DysfonctionnelSAN::FuiteActivity::Rank(){
  return 1;
}

BaseActionClass* Modele_DysfonctionnelSAN::FuiteActivity::Fire(){
  (*(Valve_2_Mobius_Mark))--;
  (*(Valve_dys_Mobius_Mark))++;
  return this;
}

/*======================Usure_PlaquettesActivity========================*/

Modele_DysfonctionnelSAN::Usure_PlaquettesActivity::Usure_PlaquettesActivity(){
  TheDistributionParameters = new double[2];
  ActivityInitialize("Usure_Plaquettes",24,Weibull, RaceEnabled, 2,1, false);
}

Modele_DysfonctionnelSAN::Usure_PlaquettesActivity::~Usure_PlaquettesActivity(){
  delete[] TheDistributionParameters;
}

void Modele_DysfonctionnelSAN::Usure_PlaquettesActivity::LinkVariables(){
  Plaquette_2->Register(&Plaquette_2_Mobius_Mark);
  Plaquettes_dys->Register(&Plaquettes_dys_Mobius_Mark);
}

bool Modele_DysfonctionnelSAN::Usure_PlaquettesActivity::Enabled(){
  OldEnabled=NewEnabled;
  NewEnabled=(((*(Plaquette_2_Mobius_Mark)) >=1));
  return NewEnabled;
}

double Modele_DysfonctionnelSAN::Usure_PlaquettesActivity::WeibullParamAlpha(){
  return alpha;
  return 1.0;  // default rate if none is specified
}

double Modele_DysfonctionnelSAN::Usure_PlaquettesActivity::WeibullParamBeta(){
  return beta3;
  return 1.0;  // default rate if none is specified
}

double Modele_DysfonctionnelSAN::Usure_PlaquettesActivity::Weight(){ 
  return 1;
}

bool Modele_DysfonctionnelSAN::Usure_PlaquettesActivity::ReactivationPredicate(){ 
  return false;
}

bool Modele_DysfonctionnelSAN::Usure_PlaquettesActivity::ReactivationFunction(){ 
  return false;
}

double Modele_DysfonctionnelSAN::Usure_PlaquettesActivity::SampleDistribution(){
  return TheDistribution->Weibull(alpha, beta3);
}

double* Modele_DysfonctionnelSAN::Usure_PlaquettesActivity::ReturnDistributionParameters(){
  TheDistributionParameters[0] = WeibullParamAlpha();
  TheDistributionParameters[1] = WeibullParamBeta();
  return TheDistributionParameters;
}

int Modele_DysfonctionnelSAN::Usure_PlaquettesActivity::Rank(){
  return 1;
}

BaseActionClass* Modele_DysfonctionnelSAN::Usure_PlaquettesActivity::Fire(){
  (*(Plaquette_2_Mobius_Mark))--;
  (*(Plaquettes_dys_Mobius_Mark))++;
  return this;
}

/*======================Verification_Disques_FreinActivity========================*/

Modele_DysfonctionnelSAN::Verification_Disques_FreinActivity::Verification_Disques_FreinActivity(){
  TheDistributionParameters = new double[2];
  ActivityInitialize("Verification_Disques_Frein",25,Weibull, RaceEnabled, 2,1, false);
}

Modele_DysfonctionnelSAN::Verification_Disques_FreinActivity::~Verification_Disques_FreinActivity(){
  delete[] TheDistributionParameters;
}

void Modele_DysfonctionnelSAN::Verification_Disques_FreinActivity::LinkVariables(){
  Disque_2->Register(&Disque_2_Mobius_Mark);
  Disque_dys->Register(&Disque_dys_Mobius_Mark);
}

bool Modele_DysfonctionnelSAN::Verification_Disques_FreinActivity::Enabled(){
  OldEnabled=NewEnabled;
  NewEnabled=(((*(Disque_2_Mobius_Mark)) >=1));
  return NewEnabled;
}

double Modele_DysfonctionnelSAN::Verification_Disques_FreinActivity::WeibullParamAlpha(){
  return alpha;
  return 1.0;  // default rate if none is specified
}

double Modele_DysfonctionnelSAN::Verification_Disques_FreinActivity::WeibullParamBeta(){
  return beta3;
  return 1.0;  // default rate if none is specified
}

double Modele_DysfonctionnelSAN::Verification_Disques_FreinActivity::Weight(){ 
  return 1;
}

bool Modele_DysfonctionnelSAN::Verification_Disques_FreinActivity::ReactivationPredicate(){ 
  return false;
}

bool Modele_DysfonctionnelSAN::Verification_Disques_FreinActivity::ReactivationFunction(){ 
  return false;
}

double Modele_DysfonctionnelSAN::Verification_Disques_FreinActivity::SampleDistribution(){
  return TheDistribution->Weibull(alpha, beta3);
}

double* Modele_DysfonctionnelSAN::Verification_Disques_FreinActivity::ReturnDistributionParameters(){
  TheDistributionParameters[0] = WeibullParamAlpha();
  TheDistributionParameters[1] = WeibullParamBeta();
  return TheDistributionParameters;
}

int Modele_DysfonctionnelSAN::Verification_Disques_FreinActivity::Rank(){
  return 1;
}

BaseActionClass* Modele_DysfonctionnelSAN::Verification_Disques_FreinActivity::Fire(){
  (*(Disque_2_Mobius_Mark))--;
  (*(Disque_dys_Mobius_Mark))++;
  return this;
}


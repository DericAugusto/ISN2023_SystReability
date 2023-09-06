

// This C++ file was created by SanEditor

#include "Atomic/Modele_Fonctionnel/Modele_FonctionnelSAN.h"

#include <stdlib.h>
#include <iostream>

#include <math.h>


/*****************************************************************
                         Modele_FonctionnelSAN Constructor             
******************************************************************/


Modele_FonctionnelSAN::Modele_FonctionnelSAN(){


  T_CalculateurGroup.initialize(2, "T_CalculateurGroup");
  T_CalculateurGroup.appendGroup((BaseGroupClass*) &T_Calculateur_case1);
  T_CalculateurGroup.appendGroup((BaseGroupClass*) &T_Calculateur_case2);

  Activity* InitialActionList[14]={
    &Instantaneous_Activity1, //0
    &Boucle, //1
    &Actionner_Pedale, //2
    &Actionner_Piston, //3
    &T_Cylindre, //4
    &Envoyer_Donnees_Capteur, //5
    &T_Reservoir, //6
    &T_Liquide_Frein, //7
    &T_Calculateur_case1, //8
    &T_Calculateur_case2, //9
    &T_Actionneur, //10
    &T_Valve, //11
    &T_Plaquette, //12
    &T_Disque  // 13
  };

  BaseGroupClass* InitialGroupList[13]={
    (BaseGroupClass*) &(Actionner_Pedale), 
    (BaseGroupClass*) &(Actionner_Piston), 
    (BaseGroupClass*) &(T_Cylindre), 
    (BaseGroupClass*) &(Envoyer_Donnees_Capteur), 
    (BaseGroupClass*) &(T_Reservoir), 
    (BaseGroupClass*) &(T_Liquide_Frein), 
    (BaseGroupClass*) &(T_CalculateurGroup), 
    (BaseGroupClass*) &(T_Actionneur), 
    (BaseGroupClass*) &(T_Valve), 
    (BaseGroupClass*) &(T_Plaquette), 
    (BaseGroupClass*) &(T_Disque), 
    (BaseGroupClass*) &(Instantaneous_Activity1), 
    (BaseGroupClass*) &(Boucle)
  };

  Pedale = new Place("Pedale" ,0);
  Piston = new Place("Piston" ,0);
  Maitre_Cylindre = new Place("Maitre_Cylindre" ,0);
  Capteur_de_Vitesse = new Place("Capteur_de_Vitesse" ,0);
  Reservoir = new Place("Reservoir" ,0);
  Liquide_Frein = new Place("Liquide_Frein" ,0);
  Donnees_Capteur = new Place("Donnees_Capteur" ,0);
  Donnees_Piston = new Place("Donnees_Piston" ,0);
  Calculateur = new Place("Calculateur" ,0);
  Actionneur = new Place("Actionneur" ,0);
  Valve = new Place("Valve" ,0);
  Plaquette = new Place("Plaquette" ,0);
  Disque = new Place("Disque" ,0);
  Frein = new Place("Frein" ,0);
  BaseStateVariableClass* InitialPlaces[14]={
    Pedale,  // 0
    Piston,  // 1
    Maitre_Cylindre,  // 2
    Capteur_de_Vitesse,  // 3
    Reservoir,  // 4
    Liquide_Frein,  // 5
    Donnees_Capteur,  // 6
    Donnees_Piston,  // 7
    Calculateur,  // 8
    Actionneur,  // 9
    Valve,  // 10
    Plaquette,  // 11
    Disque,  // 12
    Frein   // 13
  };
  BaseStateVariableClass* InitialROPlaces[0]={
  };
  initializeSANModelNow("Modele_Fonctionnel", 14, InitialPlaces, 
                        0, InitialROPlaces, 
                        14, InitialActionList, 13, InitialGroupList);


  assignPlacesToActivitiesInst();
  assignPlacesToActivitiesTimed();

  int AffectArcs[32][2]={ 
    {8,0}, {7,0}, {6,0}, {13,1}, {0,1}, {0,2}, {1,2}, {3,2}, 
    {1,3}, {2,3}, {4,3}, {5,3}, {2,4}, {7,4}, {3,5}, {6,5}, {4,6}, 
    {7,6}, {5,7}, {7,7}, {8,8}, {9,8}, {8,9}, {11,9}, {9,10}, 
    {10,10}, {10,11}, {11,11}, {11,12}, {12,12}, {12,13}, {13,13}
  };
  for(int n=0;n<32;n++) {
    AddAffectArc(InitialPlaces[AffectArcs[n][0]],
                 InitialActionList[AffectArcs[n][1]]);
  }
  int EnableArcs[15][2]={ 
    {7,0}, {6,0}, {13,1}, {0,2}, {1,3}, {2,4}, {3,5}, {4,6}, 
    {5,7}, {8,8}, {8,9}, {9,10}, {10,11}, {11,12}, {12,13}
  };
  for(int n=0;n<15;n++) {
    AddEnableArc(InitialPlaces[EnableArcs[n][0]],
                 InitialActionList[EnableArcs[n][1]]);
  }

  for(int n=0;n<14;n++) {
    InitialActionList[n]->LinkVariables();
  }
  CustomInitialization();

}

void Modele_FonctionnelSAN::CustomInitialization() {

}
Modele_FonctionnelSAN::~Modele_FonctionnelSAN(){
  for (int i = 0; i < NumStateVariables-NumReadOnlyPlaces; i++)
    delete LocalStateVariables[i];
};

void Modele_FonctionnelSAN::assignPlacesToActivitiesInst(){
  Instantaneous_Activity1.Donnees_Piston = (Place*) LocalStateVariables[7];
  Instantaneous_Activity1.Donnees_Capteur = (Place*) LocalStateVariables[6];
  Instantaneous_Activity1.Calculateur = (Place*) LocalStateVariables[8];
  Boucle.Frein = (Place*) LocalStateVariables[13];
  Boucle.Pedale = (Place*) LocalStateVariables[0];
}
void Modele_FonctionnelSAN::assignPlacesToActivitiesTimed(){
  Actionner_Pedale.Pedale = (Place*) LocalStateVariables[0];
  Actionner_Pedale.Piston = (Place*) LocalStateVariables[1];
  Actionner_Pedale.Capteur_de_Vitesse = (Place*) LocalStateVariables[3];
  Actionner_Piston.Piston = (Place*) LocalStateVariables[1];
  Actionner_Piston.Maitre_Cylindre = (Place*) LocalStateVariables[2];
  Actionner_Piston.Reservoir = (Place*) LocalStateVariables[4];
  Actionner_Piston.Liquide_Frein = (Place*) LocalStateVariables[5];
  T_Cylindre.Maitre_Cylindre = (Place*) LocalStateVariables[2];
  T_Cylindre.Donnees_Piston = (Place*) LocalStateVariables[7];
  Envoyer_Donnees_Capteur.Capteur_de_Vitesse = (Place*) LocalStateVariables[3];
  Envoyer_Donnees_Capteur.Donnees_Capteur = (Place*) LocalStateVariables[6];
  T_Reservoir.Reservoir = (Place*) LocalStateVariables[4];
  T_Reservoir.Donnees_Piston = (Place*) LocalStateVariables[7];
  T_Liquide_Frein.Liquide_Frein = (Place*) LocalStateVariables[5];
  T_Liquide_Frein.Donnees_Piston = (Place*) LocalStateVariables[7];
  T_Calculateur_case1.Calculateur = (Place*) LocalStateVariables[8];
  T_Calculateur_case1.Actionneur = (Place*) LocalStateVariables[9];
  T_Calculateur_case2.Calculateur = (Place*) LocalStateVariables[8];
  T_Calculateur_case2.Plaquette = (Place*) LocalStateVariables[11];
  T_Actionneur.Actionneur = (Place*) LocalStateVariables[9];
  T_Actionneur.Valve = (Place*) LocalStateVariables[10];
  T_Valve.Valve = (Place*) LocalStateVariables[10];
  T_Valve.Plaquette = (Place*) LocalStateVariables[11];
  T_Plaquette.Plaquette = (Place*) LocalStateVariables[11];
  T_Plaquette.Disque = (Place*) LocalStateVariables[12];
  T_Disque.Disque = (Place*) LocalStateVariables[12];
  T_Disque.Frein = (Place*) LocalStateVariables[13];
}
/*****************************************************************/
/*                  Activity Method Definitions                  */
/*****************************************************************/

/*======================Instantaneous_Activity1Activity========================*/


Modele_FonctionnelSAN::Instantaneous_Activity1Activity::Instantaneous_Activity1Activity(){
  ActivityInitialize("Instantaneous_Activity1",11,Instantaneous , RaceEnabled, 3,2, false);
}

void Modele_FonctionnelSAN::Instantaneous_Activity1Activity::LinkVariables(){
  Donnees_Piston->Register(&Donnees_Piston_Mobius_Mark);
  Donnees_Capteur->Register(&Donnees_Capteur_Mobius_Mark);
  Calculateur->Register(&Calculateur_Mobius_Mark);
}

bool Modele_FonctionnelSAN::Instantaneous_Activity1Activity::Enabled(){
  OldEnabled=NewEnabled;
  NewEnabled=((Donnees_Piston->Mark()>2 && Donnees_Capteur->Mark()>0));
  return NewEnabled;
}

double Modele_FonctionnelSAN::Instantaneous_Activity1Activity::Weight(){ 
  return 1;
}

bool Modele_FonctionnelSAN::Instantaneous_Activity1Activity::ReactivationPredicate(){ 
  return false;
}

bool Modele_FonctionnelSAN::Instantaneous_Activity1Activity::ReactivationFunction(){ 
  return false;
}

double Modele_FonctionnelSAN::Instantaneous_Activity1Activity::SampleDistribution(){
  return 0;
}

double* Modele_FonctionnelSAN::Instantaneous_Activity1Activity::ReturnDistributionParameters(){
    return NULL;
}

int Modele_FonctionnelSAN::Instantaneous_Activity1Activity::Rank(){
  return 1;
}

BaseActionClass* Modele_FonctionnelSAN::Instantaneous_Activity1Activity::Fire(){
  Donnees_Piston->Mark() = Donnees_Piston->Mark() - 3;
Donnees_Capteur->Mark() = Donnees_Capteur->Mark() - 1;
  (*(Calculateur_Mobius_Mark))++;
  return this;
}

/*======================BoucleActivity========================*/


Modele_FonctionnelSAN::BoucleActivity::BoucleActivity(){
  ActivityInitialize("Boucle",12,Instantaneous , RaceEnabled, 2,1, false);
}

void Modele_FonctionnelSAN::BoucleActivity::LinkVariables(){
  Frein->Register(&Frein_Mobius_Mark);
  Pedale->Register(&Pedale_Mobius_Mark);
}

bool Modele_FonctionnelSAN::BoucleActivity::Enabled(){
  OldEnabled=NewEnabled;
  NewEnabled=(((*(Frein_Mobius_Mark)) >=1));
  return NewEnabled;
}

double Modele_FonctionnelSAN::BoucleActivity::Weight(){ 
  return 1;
}

bool Modele_FonctionnelSAN::BoucleActivity::ReactivationPredicate(){ 
  return false;
}

bool Modele_FonctionnelSAN::BoucleActivity::ReactivationFunction(){ 
  return false;
}

double Modele_FonctionnelSAN::BoucleActivity::SampleDistribution(){
  return 0;
}

double* Modele_FonctionnelSAN::BoucleActivity::ReturnDistributionParameters(){
    return NULL;
}

int Modele_FonctionnelSAN::BoucleActivity::Rank(){
  return 1;
}

BaseActionClass* Modele_FonctionnelSAN::BoucleActivity::Fire(){
  (*(Frein_Mobius_Mark))--;
  (*(Pedale_Mobius_Mark))++;
  return this;
}

/*======================Actionner_PedaleActivity========================*/

Modele_FonctionnelSAN::Actionner_PedaleActivity::Actionner_PedaleActivity(){
  TheDistributionParameters = new double[2];
  ActivityInitialize("Actionner_Pedale",0,Lognormal, RaceEnabled, 3,1, false);
}

Modele_FonctionnelSAN::Actionner_PedaleActivity::~Actionner_PedaleActivity(){
  delete[] TheDistributionParameters;
}

void Modele_FonctionnelSAN::Actionner_PedaleActivity::LinkVariables(){
  Pedale->Register(&Pedale_Mobius_Mark);
  Piston->Register(&Piston_Mobius_Mark);
  Capteur_de_Vitesse->Register(&Capteur_de_Vitesse_Mobius_Mark);
}

bool Modele_FonctionnelSAN::Actionner_PedaleActivity::Enabled(){
  OldEnabled=NewEnabled;
  NewEnabled=(((*(Pedale_Mobius_Mark)) >=1));
  return NewEnabled;
}

double Modele_FonctionnelSAN::Actionner_PedaleActivity::LognormalParamMu(){
  return mu1;
  return 1.0;  // default rate if none is specified
}

double Modele_FonctionnelSAN::Actionner_PedaleActivity::LognormalParamAlpha_Squared(){
  return sigma;
  return 1.0;  // default rate if none is specified
}

double Modele_FonctionnelSAN::Actionner_PedaleActivity::Weight(){ 
  return 1;
}

bool Modele_FonctionnelSAN::Actionner_PedaleActivity::ReactivationPredicate(){ 
  return false;
}

bool Modele_FonctionnelSAN::Actionner_PedaleActivity::ReactivationFunction(){ 
  return false;
}

double Modele_FonctionnelSAN::Actionner_PedaleActivity::SampleDistribution(){
  return TheDistribution->Lognormal(mu1, sigma);
}

double* Modele_FonctionnelSAN::Actionner_PedaleActivity::ReturnDistributionParameters(){
  TheDistributionParameters[0] = LognormalParamMu();
  TheDistributionParameters[1] = LognormalParamAlpha_Squared();
  return TheDistributionParameters;
}

int Modele_FonctionnelSAN::Actionner_PedaleActivity::Rank(){
  return 1;
}

BaseActionClass* Modele_FonctionnelSAN::Actionner_PedaleActivity::Fire(){
  (*(Pedale_Mobius_Mark))--;
  (*(Piston_Mobius_Mark))++;
  (*(Capteur_de_Vitesse_Mobius_Mark))++;
  return this;
}

/*======================Actionner_PistonActivity========================*/

Modele_FonctionnelSAN::Actionner_PistonActivity::Actionner_PistonActivity(){
  TheDistributionParameters = new double[2];
  ActivityInitialize("Actionner_Piston",1,Lognormal, RaceEnabled, 4,1, false);
}

Modele_FonctionnelSAN::Actionner_PistonActivity::~Actionner_PistonActivity(){
  delete[] TheDistributionParameters;
}

void Modele_FonctionnelSAN::Actionner_PistonActivity::LinkVariables(){
  Piston->Register(&Piston_Mobius_Mark);
  Maitre_Cylindre->Register(&Maitre_Cylindre_Mobius_Mark);
  Reservoir->Register(&Reservoir_Mobius_Mark);
  Liquide_Frein->Register(&Liquide_Frein_Mobius_Mark);
}

bool Modele_FonctionnelSAN::Actionner_PistonActivity::Enabled(){
  OldEnabled=NewEnabled;
  NewEnabled=(((*(Piston_Mobius_Mark)) >=1));
  return NewEnabled;
}

double Modele_FonctionnelSAN::Actionner_PistonActivity::LognormalParamMu(){
  return mu1;
  return 1.0;  // default rate if none is specified
}

double Modele_FonctionnelSAN::Actionner_PistonActivity::LognormalParamAlpha_Squared(){
  return sigma;
  return 1.0;  // default rate if none is specified
}

double Modele_FonctionnelSAN::Actionner_PistonActivity::Weight(){ 
  return 1;
}

bool Modele_FonctionnelSAN::Actionner_PistonActivity::ReactivationPredicate(){ 
  return false;
}

bool Modele_FonctionnelSAN::Actionner_PistonActivity::ReactivationFunction(){ 
  return false;
}

double Modele_FonctionnelSAN::Actionner_PistonActivity::SampleDistribution(){
  return TheDistribution->Lognormal(mu1, sigma);
}

double* Modele_FonctionnelSAN::Actionner_PistonActivity::ReturnDistributionParameters(){
  TheDistributionParameters[0] = LognormalParamMu();
  TheDistributionParameters[1] = LognormalParamAlpha_Squared();
  return TheDistributionParameters;
}

int Modele_FonctionnelSAN::Actionner_PistonActivity::Rank(){
  return 1;
}

BaseActionClass* Modele_FonctionnelSAN::Actionner_PistonActivity::Fire(){
  (*(Piston_Mobius_Mark))--;
  (*(Maitre_Cylindre_Mobius_Mark))++;
  (*(Reservoir_Mobius_Mark))++;
  (*(Liquide_Frein_Mobius_Mark))++;
  return this;
}

/*======================T_CylindreActivity========================*/

Modele_FonctionnelSAN::T_CylindreActivity::T_CylindreActivity(){
  TheDistributionParameters = new double[2];
  ActivityInitialize("T_Cylindre",2,Lognormal, RaceEnabled, 2,1, false);
}

Modele_FonctionnelSAN::T_CylindreActivity::~T_CylindreActivity(){
  delete[] TheDistributionParameters;
}

void Modele_FonctionnelSAN::T_CylindreActivity::LinkVariables(){
  Maitre_Cylindre->Register(&Maitre_Cylindre_Mobius_Mark);
  Donnees_Piston->Register(&Donnees_Piston_Mobius_Mark);
}

bool Modele_FonctionnelSAN::T_CylindreActivity::Enabled(){
  OldEnabled=NewEnabled;
  NewEnabled=(((*(Maitre_Cylindre_Mobius_Mark)) >=1));
  return NewEnabled;
}

double Modele_FonctionnelSAN::T_CylindreActivity::LognormalParamMu(){
  return mu1;
  return 1.0;  // default rate if none is specified
}

double Modele_FonctionnelSAN::T_CylindreActivity::LognormalParamAlpha_Squared(){
  return sigma;
  return 1.0;  // default rate if none is specified
}

double Modele_FonctionnelSAN::T_CylindreActivity::Weight(){ 
  return 1;
}

bool Modele_FonctionnelSAN::T_CylindreActivity::ReactivationPredicate(){ 
  return false;
}

bool Modele_FonctionnelSAN::T_CylindreActivity::ReactivationFunction(){ 
  return false;
}

double Modele_FonctionnelSAN::T_CylindreActivity::SampleDistribution(){
  return TheDistribution->Lognormal(mu1, sigma);
}

double* Modele_FonctionnelSAN::T_CylindreActivity::ReturnDistributionParameters(){
  TheDistributionParameters[0] = LognormalParamMu();
  TheDistributionParameters[1] = LognormalParamAlpha_Squared();
  return TheDistributionParameters;
}

int Modele_FonctionnelSAN::T_CylindreActivity::Rank(){
  return 1;
}

BaseActionClass* Modele_FonctionnelSAN::T_CylindreActivity::Fire(){
  (*(Maitre_Cylindre_Mobius_Mark))--;
  (*(Donnees_Piston_Mobius_Mark))++;
  return this;
}

/*======================Envoyer_Donnees_CapteurActivity========================*/

Modele_FonctionnelSAN::Envoyer_Donnees_CapteurActivity::Envoyer_Donnees_CapteurActivity(){
  TheDistributionParameters = new double[2];
  ActivityInitialize("Envoyer_Donnees_Capteur",3,Lognormal, RaceEnabled, 2,1, false);
}

Modele_FonctionnelSAN::Envoyer_Donnees_CapteurActivity::~Envoyer_Donnees_CapteurActivity(){
  delete[] TheDistributionParameters;
}

void Modele_FonctionnelSAN::Envoyer_Donnees_CapteurActivity::LinkVariables(){
  Capteur_de_Vitesse->Register(&Capteur_de_Vitesse_Mobius_Mark);
  Donnees_Capteur->Register(&Donnees_Capteur_Mobius_Mark);
}

bool Modele_FonctionnelSAN::Envoyer_Donnees_CapteurActivity::Enabled(){
  OldEnabled=NewEnabled;
  NewEnabled=(((*(Capteur_de_Vitesse_Mobius_Mark)) >=1));
  return NewEnabled;
}

double Modele_FonctionnelSAN::Envoyer_Donnees_CapteurActivity::LognormalParamMu(){
  return mu1;
  return 1.0;  // default rate if none is specified
}

double Modele_FonctionnelSAN::Envoyer_Donnees_CapteurActivity::LognormalParamAlpha_Squared(){
  return sigma;
  return 1.0;  // default rate if none is specified
}

double Modele_FonctionnelSAN::Envoyer_Donnees_CapteurActivity::Weight(){ 
  return 1;
}

bool Modele_FonctionnelSAN::Envoyer_Donnees_CapteurActivity::ReactivationPredicate(){ 
  return false;
}

bool Modele_FonctionnelSAN::Envoyer_Donnees_CapteurActivity::ReactivationFunction(){ 
  return false;
}

double Modele_FonctionnelSAN::Envoyer_Donnees_CapteurActivity::SampleDistribution(){
  return TheDistribution->Lognormal(mu1, sigma);
}

double* Modele_FonctionnelSAN::Envoyer_Donnees_CapteurActivity::ReturnDistributionParameters(){
  TheDistributionParameters[0] = LognormalParamMu();
  TheDistributionParameters[1] = LognormalParamAlpha_Squared();
  return TheDistributionParameters;
}

int Modele_FonctionnelSAN::Envoyer_Donnees_CapteurActivity::Rank(){
  return 1;
}

BaseActionClass* Modele_FonctionnelSAN::Envoyer_Donnees_CapteurActivity::Fire(){
  (*(Capteur_de_Vitesse_Mobius_Mark))--;
  (*(Donnees_Capteur_Mobius_Mark))++;
  return this;
}

/*======================T_ReservoirActivity========================*/

Modele_FonctionnelSAN::T_ReservoirActivity::T_ReservoirActivity(){
  TheDistributionParameters = new double[2];
  ActivityInitialize("T_Reservoir",4,Lognormal, RaceEnabled, 2,1, false);
}

Modele_FonctionnelSAN::T_ReservoirActivity::~T_ReservoirActivity(){
  delete[] TheDistributionParameters;
}

void Modele_FonctionnelSAN::T_ReservoirActivity::LinkVariables(){
  Reservoir->Register(&Reservoir_Mobius_Mark);
  Donnees_Piston->Register(&Donnees_Piston_Mobius_Mark);
}

bool Modele_FonctionnelSAN::T_ReservoirActivity::Enabled(){
  OldEnabled=NewEnabled;
  NewEnabled=(((*(Reservoir_Mobius_Mark)) >=1));
  return NewEnabled;
}

double Modele_FonctionnelSAN::T_ReservoirActivity::LognormalParamMu(){
  return mu1;
  return 1.0;  // default rate if none is specified
}

double Modele_FonctionnelSAN::T_ReservoirActivity::LognormalParamAlpha_Squared(){
  return sigma;
  return 1.0;  // default rate if none is specified
}

double Modele_FonctionnelSAN::T_ReservoirActivity::Weight(){ 
  return 1;
}

bool Modele_FonctionnelSAN::T_ReservoirActivity::ReactivationPredicate(){ 
  return false;
}

bool Modele_FonctionnelSAN::T_ReservoirActivity::ReactivationFunction(){ 
  return false;
}

double Modele_FonctionnelSAN::T_ReservoirActivity::SampleDistribution(){
  return TheDistribution->Lognormal(mu1, sigma);
}

double* Modele_FonctionnelSAN::T_ReservoirActivity::ReturnDistributionParameters(){
  TheDistributionParameters[0] = LognormalParamMu();
  TheDistributionParameters[1] = LognormalParamAlpha_Squared();
  return TheDistributionParameters;
}

int Modele_FonctionnelSAN::T_ReservoirActivity::Rank(){
  return 1;
}

BaseActionClass* Modele_FonctionnelSAN::T_ReservoirActivity::Fire(){
  (*(Reservoir_Mobius_Mark))--;
  (*(Donnees_Piston_Mobius_Mark))++;
  return this;
}

/*======================T_Liquide_FreinActivity========================*/

Modele_FonctionnelSAN::T_Liquide_FreinActivity::T_Liquide_FreinActivity(){
  TheDistributionParameters = new double[2];
  ActivityInitialize("T_Liquide_Frein",5,Lognormal, RaceEnabled, 2,1, false);
}

Modele_FonctionnelSAN::T_Liquide_FreinActivity::~T_Liquide_FreinActivity(){
  delete[] TheDistributionParameters;
}

void Modele_FonctionnelSAN::T_Liquide_FreinActivity::LinkVariables(){
  Liquide_Frein->Register(&Liquide_Frein_Mobius_Mark);
  Donnees_Piston->Register(&Donnees_Piston_Mobius_Mark);
}

bool Modele_FonctionnelSAN::T_Liquide_FreinActivity::Enabled(){
  OldEnabled=NewEnabled;
  NewEnabled=(((*(Liquide_Frein_Mobius_Mark)) >=1));
  return NewEnabled;
}

double Modele_FonctionnelSAN::T_Liquide_FreinActivity::LognormalParamMu(){
  return mu1;
  return 1.0;  // default rate if none is specified
}

double Modele_FonctionnelSAN::T_Liquide_FreinActivity::LognormalParamAlpha_Squared(){
  return sigma;
  return 1.0;  // default rate if none is specified
}

double Modele_FonctionnelSAN::T_Liquide_FreinActivity::Weight(){ 
  return 1;
}

bool Modele_FonctionnelSAN::T_Liquide_FreinActivity::ReactivationPredicate(){ 
  return false;
}

bool Modele_FonctionnelSAN::T_Liquide_FreinActivity::ReactivationFunction(){ 
  return false;
}

double Modele_FonctionnelSAN::T_Liquide_FreinActivity::SampleDistribution(){
  return TheDistribution->Lognormal(mu1, sigma);
}

double* Modele_FonctionnelSAN::T_Liquide_FreinActivity::ReturnDistributionParameters(){
  TheDistributionParameters[0] = LognormalParamMu();
  TheDistributionParameters[1] = LognormalParamAlpha_Squared();
  return TheDistributionParameters;
}

int Modele_FonctionnelSAN::T_Liquide_FreinActivity::Rank(){
  return 1;
}

BaseActionClass* Modele_FonctionnelSAN::T_Liquide_FreinActivity::Fire(){
  (*(Liquide_Frein_Mobius_Mark))--;
  (*(Donnees_Piston_Mobius_Mark))++;
  return this;
}

/*======================T_CalculateurActivity_case1========================*/

Modele_FonctionnelSAN::T_CalculateurActivity_case1::T_CalculateurActivity_case1(){
  TheDistributionParameters = new double[2];
  ActivityInitialize("T_Calculateur_case1",6,Lognormal, RaceEnabled, 2,1, false);
}

Modele_FonctionnelSAN::T_CalculateurActivity_case1::~T_CalculateurActivity_case1(){
  delete[] TheDistributionParameters;
}

void Modele_FonctionnelSAN::T_CalculateurActivity_case1::LinkVariables(){
  Calculateur->Register(&Calculateur_Mobius_Mark);
  Actionneur->Register(&Actionneur_Mobius_Mark);
}

bool Modele_FonctionnelSAN::T_CalculateurActivity_case1::Enabled(){
  OldEnabled=NewEnabled;
  NewEnabled=(((*(Calculateur_Mobius_Mark)) >=1));
  return NewEnabled;
}

double Modele_FonctionnelSAN::T_CalculateurActivity_case1::LognormalParamMu(){
  return mu1;
  return 1.0;  // default rate if none is specified
}

double Modele_FonctionnelSAN::T_CalculateurActivity_case1::LognormalParamAlpha_Squared(){
  return sigma;
  return 1.0;  // default rate if none is specified
}

double Modele_FonctionnelSAN::T_CalculateurActivity_case1::Weight(){ 
  return 0.05;
}

bool Modele_FonctionnelSAN::T_CalculateurActivity_case1::ReactivationPredicate(){ 
  return false;
}

bool Modele_FonctionnelSAN::T_CalculateurActivity_case1::ReactivationFunction(){ 
  return false;
}

double Modele_FonctionnelSAN::T_CalculateurActivity_case1::SampleDistribution(){
  return TheDistribution->Lognormal(mu1, sigma);
}

double* Modele_FonctionnelSAN::T_CalculateurActivity_case1::ReturnDistributionParameters(){
  TheDistributionParameters[0] = LognormalParamMu();
  TheDistributionParameters[1] = LognormalParamAlpha_Squared();
  return TheDistributionParameters;
}

int Modele_FonctionnelSAN::T_CalculateurActivity_case1::Rank(){
  return 1;
}

BaseActionClass* Modele_FonctionnelSAN::T_CalculateurActivity_case1::Fire(){
  (*(Calculateur_Mobius_Mark))--;
  (*(Actionneur_Mobius_Mark))++;
  return this;
}

/*======================T_CalculateurActivity_case2========================*/

Modele_FonctionnelSAN::T_CalculateurActivity_case2::T_CalculateurActivity_case2(){
  TheDistributionParameters = new double[2];
  ActivityInitialize("T_Calculateur_case2",6,Lognormal, RaceEnabled, 2,1, false);
}

Modele_FonctionnelSAN::T_CalculateurActivity_case2::~T_CalculateurActivity_case2(){
  delete[] TheDistributionParameters;
}

void Modele_FonctionnelSAN::T_CalculateurActivity_case2::LinkVariables(){
  Calculateur->Register(&Calculateur_Mobius_Mark);
  Plaquette->Register(&Plaquette_Mobius_Mark);
}

bool Modele_FonctionnelSAN::T_CalculateurActivity_case2::Enabled(){
  OldEnabled=NewEnabled;
  NewEnabled=(((*(Calculateur_Mobius_Mark)) >=1));
  return NewEnabled;
}

double Modele_FonctionnelSAN::T_CalculateurActivity_case2::LognormalParamMu(){
  return mu1;
  return 1.0;  // default rate if none is specified
}

double Modele_FonctionnelSAN::T_CalculateurActivity_case2::LognormalParamAlpha_Squared(){
  return sigma;
  return 1.0;  // default rate if none is specified
}

double Modele_FonctionnelSAN::T_CalculateurActivity_case2::Weight(){ 
  return 0.95;
}

bool Modele_FonctionnelSAN::T_CalculateurActivity_case2::ReactivationPredicate(){ 
  return false;
}

bool Modele_FonctionnelSAN::T_CalculateurActivity_case2::ReactivationFunction(){ 
  return false;
}

double Modele_FonctionnelSAN::T_CalculateurActivity_case2::SampleDistribution(){
  return TheDistribution->Lognormal(mu1, sigma);
}

double* Modele_FonctionnelSAN::T_CalculateurActivity_case2::ReturnDistributionParameters(){
  TheDistributionParameters[0] = LognormalParamMu();
  TheDistributionParameters[1] = LognormalParamAlpha_Squared();
  return TheDistributionParameters;
}

int Modele_FonctionnelSAN::T_CalculateurActivity_case2::Rank(){
  return 1;
}

BaseActionClass* Modele_FonctionnelSAN::T_CalculateurActivity_case2::Fire(){
  (*(Calculateur_Mobius_Mark))--;
  (*(Plaquette_Mobius_Mark))++;
  return this;
}

/*======================T_ActionneurActivity========================*/

Modele_FonctionnelSAN::T_ActionneurActivity::T_ActionneurActivity(){
  TheDistributionParameters = new double[2];
  ActivityInitialize("T_Actionneur",7,Lognormal, RaceEnabled, 2,1, false);
}

Modele_FonctionnelSAN::T_ActionneurActivity::~T_ActionneurActivity(){
  delete[] TheDistributionParameters;
}

void Modele_FonctionnelSAN::T_ActionneurActivity::LinkVariables(){
  Actionneur->Register(&Actionneur_Mobius_Mark);
  Valve->Register(&Valve_Mobius_Mark);
}

bool Modele_FonctionnelSAN::T_ActionneurActivity::Enabled(){
  OldEnabled=NewEnabled;
  NewEnabled=(((*(Actionneur_Mobius_Mark)) >=1));
  return NewEnabled;
}

double Modele_FonctionnelSAN::T_ActionneurActivity::LognormalParamMu(){
  return mu1;
  return 1.0;  // default rate if none is specified
}

double Modele_FonctionnelSAN::T_ActionneurActivity::LognormalParamAlpha_Squared(){
  return sigma;
  return 1.0;  // default rate if none is specified
}

double Modele_FonctionnelSAN::T_ActionneurActivity::Weight(){ 
  return 1;
}

bool Modele_FonctionnelSAN::T_ActionneurActivity::ReactivationPredicate(){ 
  return false;
}

bool Modele_FonctionnelSAN::T_ActionneurActivity::ReactivationFunction(){ 
  return false;
}

double Modele_FonctionnelSAN::T_ActionneurActivity::SampleDistribution(){
  return TheDistribution->Lognormal(mu1, sigma);
}

double* Modele_FonctionnelSAN::T_ActionneurActivity::ReturnDistributionParameters(){
  TheDistributionParameters[0] = LognormalParamMu();
  TheDistributionParameters[1] = LognormalParamAlpha_Squared();
  return TheDistributionParameters;
}

int Modele_FonctionnelSAN::T_ActionneurActivity::Rank(){
  return 1;
}

BaseActionClass* Modele_FonctionnelSAN::T_ActionneurActivity::Fire(){
  (*(Actionneur_Mobius_Mark))--;
  (*(Valve_Mobius_Mark))++;
  return this;
}

/*======================T_ValveActivity========================*/

Modele_FonctionnelSAN::T_ValveActivity::T_ValveActivity(){
  TheDistributionParameters = new double[2];
  ActivityInitialize("T_Valve",8,Lognormal, RaceEnabled, 2,1, false);
}

Modele_FonctionnelSAN::T_ValveActivity::~T_ValveActivity(){
  delete[] TheDistributionParameters;
}

void Modele_FonctionnelSAN::T_ValveActivity::LinkVariables(){
  Valve->Register(&Valve_Mobius_Mark);
  Plaquette->Register(&Plaquette_Mobius_Mark);
}

bool Modele_FonctionnelSAN::T_ValveActivity::Enabled(){
  OldEnabled=NewEnabled;
  NewEnabled=(((*(Valve_Mobius_Mark)) >=1));
  return NewEnabled;
}

double Modele_FonctionnelSAN::T_ValveActivity::LognormalParamMu(){
  return mu2;
  return 1.0;  // default rate if none is specified
}

double Modele_FonctionnelSAN::T_ValveActivity::LognormalParamAlpha_Squared(){
  return sigma;
  return 1.0;  // default rate if none is specified
}

double Modele_FonctionnelSAN::T_ValveActivity::Weight(){ 
  return 1;
}

bool Modele_FonctionnelSAN::T_ValveActivity::ReactivationPredicate(){ 
  return false;
}

bool Modele_FonctionnelSAN::T_ValveActivity::ReactivationFunction(){ 
  return false;
}

double Modele_FonctionnelSAN::T_ValveActivity::SampleDistribution(){
  return TheDistribution->Lognormal(mu2, sigma);
}

double* Modele_FonctionnelSAN::T_ValveActivity::ReturnDistributionParameters(){
  TheDistributionParameters[0] = LognormalParamMu();
  TheDistributionParameters[1] = LognormalParamAlpha_Squared();
  return TheDistributionParameters;
}

int Modele_FonctionnelSAN::T_ValveActivity::Rank(){
  return 1;
}

BaseActionClass* Modele_FonctionnelSAN::T_ValveActivity::Fire(){
  (*(Valve_Mobius_Mark))--;
  (*(Plaquette_Mobius_Mark))++;
  return this;
}

/*======================T_PlaquetteActivity========================*/

Modele_FonctionnelSAN::T_PlaquetteActivity::T_PlaquetteActivity(){
  TheDistributionParameters = new double[2];
  ActivityInitialize("T_Plaquette",9,Lognormal, RaceEnabled, 2,1, false);
}

Modele_FonctionnelSAN::T_PlaquetteActivity::~T_PlaquetteActivity(){
  delete[] TheDistributionParameters;
}

void Modele_FonctionnelSAN::T_PlaquetteActivity::LinkVariables(){
  Plaquette->Register(&Plaquette_Mobius_Mark);
  Disque->Register(&Disque_Mobius_Mark);
}

bool Modele_FonctionnelSAN::T_PlaquetteActivity::Enabled(){
  OldEnabled=NewEnabled;
  NewEnabled=(((*(Plaquette_Mobius_Mark)) >=1));
  return NewEnabled;
}

double Modele_FonctionnelSAN::T_PlaquetteActivity::LognormalParamMu(){
  return mu2;
  return 1.0;  // default rate if none is specified
}

double Modele_FonctionnelSAN::T_PlaquetteActivity::LognormalParamAlpha_Squared(){
  return sigma;
  return 1.0;  // default rate if none is specified
}

double Modele_FonctionnelSAN::T_PlaquetteActivity::Weight(){ 
  return 1;
}

bool Modele_FonctionnelSAN::T_PlaquetteActivity::ReactivationPredicate(){ 
  return false;
}

bool Modele_FonctionnelSAN::T_PlaquetteActivity::ReactivationFunction(){ 
  return false;
}

double Modele_FonctionnelSAN::T_PlaquetteActivity::SampleDistribution(){
  return TheDistribution->Lognormal(mu2, sigma);
}

double* Modele_FonctionnelSAN::T_PlaquetteActivity::ReturnDistributionParameters(){
  TheDistributionParameters[0] = LognormalParamMu();
  TheDistributionParameters[1] = LognormalParamAlpha_Squared();
  return TheDistributionParameters;
}

int Modele_FonctionnelSAN::T_PlaquetteActivity::Rank(){
  return 1;
}

BaseActionClass* Modele_FonctionnelSAN::T_PlaquetteActivity::Fire(){
  (*(Plaquette_Mobius_Mark))--;
  (*(Disque_Mobius_Mark))++;
  return this;
}

/*======================T_DisqueActivity========================*/

Modele_FonctionnelSAN::T_DisqueActivity::T_DisqueActivity(){
  TheDistributionParameters = new double[2];
  ActivityInitialize("T_Disque",10,Lognormal, RaceEnabled, 2,1, false);
}

Modele_FonctionnelSAN::T_DisqueActivity::~T_DisqueActivity(){
  delete[] TheDistributionParameters;
}

void Modele_FonctionnelSAN::T_DisqueActivity::LinkVariables(){
  Disque->Register(&Disque_Mobius_Mark);
  Frein->Register(&Frein_Mobius_Mark);
}

bool Modele_FonctionnelSAN::T_DisqueActivity::Enabled(){
  OldEnabled=NewEnabled;
  NewEnabled=(((*(Disque_Mobius_Mark)) >=1));
  return NewEnabled;
}

double Modele_FonctionnelSAN::T_DisqueActivity::LognormalParamMu(){
  return mu2;
  return 1.0;  // default rate if none is specified
}

double Modele_FonctionnelSAN::T_DisqueActivity::LognormalParamAlpha_Squared(){
  return sigma;
  return 1.0;  // default rate if none is specified
}

double Modele_FonctionnelSAN::T_DisqueActivity::Weight(){ 
  return 1;
}

bool Modele_FonctionnelSAN::T_DisqueActivity::ReactivationPredicate(){ 
  return false;
}

bool Modele_FonctionnelSAN::T_DisqueActivity::ReactivationFunction(){ 
  return false;
}

double Modele_FonctionnelSAN::T_DisqueActivity::SampleDistribution(){
  return TheDistribution->Lognormal(mu2, sigma);
}

double* Modele_FonctionnelSAN::T_DisqueActivity::ReturnDistributionParameters(){
  TheDistributionParameters[0] = LognormalParamMu();
  TheDistributionParameters[1] = LognormalParamAlpha_Squared();
  return TheDistributionParameters;
}

int Modele_FonctionnelSAN::T_DisqueActivity::Rank(){
  return 1;
}

BaseActionClass* Modele_FonctionnelSAN::T_DisqueActivity::Fire(){
  (*(Disque_Mobius_Mark))--;
  (*(Frein_Mobius_Mark))++;
  return this;
}


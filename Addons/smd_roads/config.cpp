////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 3.52
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class smd_roads : config.bin{
class CfgPatches
{
 class smd_roads
 {
  units[] = {};
  weapons[] = {};
  requiredAddons[] = {};
 };
};
class CfgNonAIVehicles
{
 class Land_most_stred30
 {
  model = "\smd_Roads\most_stred30.p3d";
  simulation = "road";
  armor = 50;
  destrType = "destructBuilding";
  class Destruction
  {
   animations[] = {
    { "smd_Roads\Rtm\most_pad_01.rtm",0.2,17 }};
  };
 };
 class Land_most_bez_lamp
 {
  model = "\smd_Roads\most_bez_lamp.p3d";
  simulation = "road";
  armor = 50;
  destrType = "destructBuilding";
  class Destruction
  {
   animations[] = {
    { "smd_Roads\Rtm\most_pad_01.rtm",0.2,17 }};
  };
 };
 class Land_Kamenny_most30
 {
  model = "\smd_Roads\Kamenny_most30.p3d";
  simulation = "road";
  armor = 50;
  destrType = "destructBuilding";
  class Destruction
  {
   animations[] = {
    { "smd_Roads\Rtm\Kamenny_most_01.rtm",0.1,7 }};
  };
 };
 class Land_Kamenny_most30v2
 {
  model = "\smd_Roads\Kamenny_most30v2.p3d";
  simulation = "road";
  armor = 50;
  destrType = "destructBuilding";
  class Destruction
  {
   animations[] = {
    { "smd_Roads\Rtm\Kamenny_most_01.rtm",0.1,7 }};
  };
 };
};
//};

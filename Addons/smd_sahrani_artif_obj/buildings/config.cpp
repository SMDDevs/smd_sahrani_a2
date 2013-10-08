////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 3.52
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class smd_sahrani_artif_obj : buildings\config.bin{
class CfgPatches
{
 class buildings
 {
  units[] = {"Land_smd_ammostore2_open"};
  weapons[] = {};
  requiredVersion = 1.0;
  requiredAddons[] = {};
 };
};
class cfgSounds
{
 class smd_garage_doors
 {
  name = "ammostore garage doors";
  sound[] = {"smd_sahrani_artif_obj\buildings\sounds\hydraulic_slide.ogg",0.5,1.0};
  titles[] = {};
 };
 class smd_ammolid
 {
  name = "ammocrate lid";
  sound[] = {"smd_sahrani_artif_obj\buildings\sounds\lid.wss",0.5,1.0};
  titles[] = {};
 };
 class smd_garagedoor
 {
  name = "garage doors";
  sound[] = {"smd_sahrani_artif_obj\buildings\sounds\garagedoor.ogg",0.5,1.0};
  titles[] = {};
 };
 class smd_hangar_door_open
 {
  name = "hangar doors open";
  sound[] = {"smd_sahrani_artif_obj\buildings\sounds\hangar_door_open.ogg",0.5,1.0};
  titles[] = {};
 };
 class smd_hangar_door_close
 {
  name = "hangar door close";
  sound[] = {"smd_sahrani_artif_obj\buildings\sounds\hangar_door_close.ogg",0.5,1.0};
  titles[] = {};
 };
 class smd_keypad
 {
  name = "keypad button press";
  sound[] = {"smd_sahrani_artif_obj\buildings\sounds\buttonpresses.ogg",0.5,1.0};
  titles[] = {};
 };
};
class CfgVehicles
{
 class Thing;
 class Building;
 class Strategic;
 class NonStrategic: Building
 {
  class DestructionEffects;
 };
 class HouseBase;
 class Land_VASICore;
 class House: HouseBase
 {
  class DestructionEffects;
 };
 class Ruins;
 class Church: NonStrategic
 {
  class DestructionEffects;
 };
 class Land_smd_army_hut_int_ruins: Ruins
 {
  scope = 1;
  vehicleClass = "Ruins";
  model = "\smd_sahrani_artif_obj\buildings\Ruins\smd_army_hut_int_ruins";
 };
 class Land_smd_army_hut_storrage_ruins: Ruins
 {
  scope = 1;
  vehicleClass = "Ruins";
  model = "\smd_sahrani_artif_obj\buildings\Ruins\smd_army_hut_storrage_ruins";
 };
 class Land_smd_army_hut2_ruins: Ruins
 {
  scope = 1;
  vehicleClass = "Ruins";
  model = "\smd_sahrani_artif_obj\buildings\Ruins\smd_army_hut2_ruins";
 };
 class Land_smd_army_hut3_long_ruins: Ruins
 {
  scope = 1;
  vehicleClass = "Ruins";
  model = "\smd_sahrani_artif_obj\buildings\Ruins\smd_army_hut3_long_ruins";
 };
 class Land_smd_army_hut3_long_int_ruins: Ruins
 {
  scope = 1;
  vehicleClass = "Ruins";
  model = "\smd_sahrani_artif_obj\buildings\Ruins\smd_army_hut3_long_int_ruins";
 };
 class Land_smd_benzina_schnell_open_ruins: Ruins
 {
  scope = 1;
  vehicleClass = "Ruins";
  model = "\smd_sahrani_artif_obj\buildings\Ruins\smd_benzina_schnell_open_ruins";
 };
 class Land_smd_brana02_ruins: Ruins
 {
  scope = 1;
  vehicleClass = "Ruins";
  model = "\smd_sahrani_artif_obj\buildings\Ruins\smd_brana02_ruins";
 };
 class Land_smd_budova3_ruins: Ruins
 {
  scope = 1;
  vehicleClass = "Ruins";
  model = "\smd_sahrani_artif_obj\buildings\Ruins\smd_budova3_ruins";
 };
 class Land_smd_cihlovej_dum_mini_ruins: Ruins
 {
  scope = 1;
  vehicleClass = "Ruins";
  model = "\smd_sahrani_artif_obj\buildings\Ruins\smd_cihlovej_dum_mini_ruins";
 };
 class Land_smd_dum_istan2_ruins: Ruins
 {
  scope = 1;
  vehicleClass = "Ruins";
  model = "\smd_sahrani_artif_obj\buildings\Ruins\smd_dum_istan2_ruins";
 };
 class Land_smd_dum_istan2_01_ruins: Ruins
 {
  scope = 1;
  vehicleClass = "Ruins";
  model = "\smd_sahrani_artif_obj\buildings\Ruins\smd_dum_istan2_01_ruins";
 };
 class Land_smd_dum_istan2_02_ruins: Ruins
 {
  scope = 1;
  vehicleClass = "Ruins";
  model = "\smd_sahrani_artif_obj\buildings\Ruins\smd_dum_istan2_02_ruins";
 };
 class Land_smd_dum_istan2_03_ruins: Ruins
 {
  scope = 1;
  vehicleClass = "Ruins";
  model = "\smd_sahrani_artif_obj\buildings\Ruins\smd_dum_istan2_03_ruins";
 };
 class Land_smd_dum_istan2_03a_ruins: Ruins
 {
  scope = 1;
  vehicleClass = "Ruins";
  model = "\smd_sahrani_artif_obj\buildings\Ruins\smd_dum_istan2_03a_ruins";
 };
 class Land_smd_dum_istan2_04a_ruins: Ruins
 {
  scope = 1;
  vehicleClass = "Ruins";
  model = "\smd_sahrani_artif_obj\buildings\Ruins\smd_dum_istan2_04a_ruins";
 };
 class Land_smd_dum_istan2b_ruins: Ruins
 {
  scope = 1;
  vehicleClass = "Ruins";
  model = "\smd_sahrani_artif_obj\buildings\Ruins\smd_dum_istan2b_ruins";
 };
 class Land_smd_dum_istan3_ruins: Ruins
 {
  scope = 1;
  vehicleClass = "Ruins";
  model = "\smd_sahrani_artif_obj\buildings\Ruins\smd_dum_istan3_ruins";
 };
 class Land_smd_dum_istan3_hromada_ruins: Ruins
 {
  scope = 1;
  vehicleClass = "Ruins";
  model = "\smd_sahrani_artif_obj\buildings\Ruins\smd_dum_istan3_hromada_ruins";
 };
 class Land_smd_dum_istan4_ruins: Ruins
 {
  scope = 1;
  vehicleClass = "Ruins";
  model = "\smd_sahrani_artif_obj\buildings\Ruins\smd_dum_istan4_ruins";
 };
 class Land_smd_dum_istan4_big_ruins: Ruins
 {
  scope = 1;
  vehicleClass = "Ruins";
  model = "\smd_sahrani_artif_obj\buildings\Ruins\smd_dum_istan4_big_ruins";
 };
 class Land_smd_dum_istan4_big_inverse_ruins: Ruins
 {
  scope = 1;
  vehicleClass = "Ruins";
  model = "\smd_sahrani_artif_obj\buildings\Ruins\smd_dum_istan4_big_inverse_ruins";
 };
 class Land_smd_dum_istan4_detaily1_ruins: Ruins
 {
  scope = 1;
  vehicleClass = "Ruins";
  model = "\smd_sahrani_artif_obj\buildings\Ruins\smd_dum_istan4_detaily1_ruins";
 };
 class Land_smd_dum_istan4_inverse_ruins: Ruins
 {
  scope = 1;
  vehicleClass = "Ruins";
  model = "\smd_sahrani_artif_obj\buildings\Ruins\smd_dum_istan4_inverse_ruins";
 };
 class Land_smd_dum_mesto3_istan_ruins: Ruins
 {
  scope = 1;
  vehicleClass = "Ruins";
  model = "\smd_sahrani_artif_obj\buildings\Ruins\smd_dum_mesto3_istan_ruins";
 };
 class Land_smd_dum_olezlina_open_ruins: Ruins
 {
  scope = 1;
  vehicleClass = "Ruins";
  model = "\smd_sahrani_artif_obj\buildings\Ruins\dum_olezlina_open_ruins";
 };
 class Land_smd_dum_olez_istan2_open_ruins: Ruins
 {
  scope = 1;
  vehicleClass = "Ruins";
  model = "\ca\buildings\Ruins\dum_olez_istan2_ruins";
 };
 class Land_smd_dum_olez_istan2_open2_ruins: Ruins
 {
  scope = 1;
  vehicleClass = "Ruins";
  model = "\ca\buildings\Ruins\dum_olez_istan2_ruins";
 };
 class Land_smd_dum_olez_istan1_open_ruins: Ruins
 {
  scope = 1;
  vehicleClass = "Ruins";
  model = "\ca\buildings\Ruins\dum_olez_istan1_ruins";
 };
 class Land_smd_dum_olez_istan1_open2_ruins: Ruins
 {
  scope = 1;
  vehicleClass = "Ruins";
  model = "\ca\buildings\Ruins\dum_olez_istan1_ruins";
 };
 class Land_smd_dum02_ruins: Ruins
 {
  scope = 1;
  vehicleClass = "Ruins";
  model = "\smd_sahrani_artif_obj\buildings\Ruins\smd_dum02_ruins";
 };
 class Land_smd_dumruina_ruins: Ruins
 {
  scope = 1;
  vehicleClass = "Ruins";
  model = "\smd_sahrani_artif_obj\buildings\Ruins\smd_dumruina_ruins";
 };
 class Land_smd_garaz_mala_ruins: Ruins
 {
  scope = 1;
  vehicleClass = "Ruins";
  model = "\smd_sahrani_artif_obj\buildings\Ruins\smd_garaz_mala_ruins";
 };
 class Land_smd_hlaska_ruins: Ruins
 {
  scope = 1;
  vehicleClass = "Ruins";
  model = "\smd_sahrani_artif_obj\buildings\Ruins\smd_hlaska_ruins";
 };
 class Land_smd_hospoda_mesto_ruins: Ruins
 {
  scope = 1;
  vehicleClass = "Ruins";
  model = "\smd_sahrani_artif_obj\buildings\Ruins\smd_hospoda_mesto_ruins";
 };
 class Land_smd_hotel_ruins: Ruins
 {
  scope = 1;
  vehicleClass = "Ruins";
  model = "\smd_sahrani_artif_obj\buildings\Ruins\smd_hotel_ruins";
 };
 class Land_smd_hotel_riviera1_ruins: Ruins
 {
  scope = 1;
  vehicleClass = "Ruins";
  model = "\smd_sahrani_artif_obj\buildings\Ruins\smd_hotel_riviera1_ruins";
 };
 class Land_smd_hotel_riviera2_ruins: Ruins
 {
  scope = 1;
  vehicleClass = "Ruins";
  model = "\smd_sahrani_artif_obj\buildings\Ruins\smd_hotel_riviera2_ruins";
 };
 class Land_smd_house_y_ruins: Ruins
 {
  scope = 1;
  vehicleClass = "Ruins";
  model = "\smd_sahrani_artif_obj\buildings\Ruins\smd_house_y_ruins";
 };
 class Land_smd_hut01_ruins: Ruins
 {
  scope = 1;
  vehicleClass = "Ruins";
  model = "\smd_sahrani_artif_obj\buildings\Ruins\smd_hut01_ruins";
 };
 class Land_smd_hut02_ruins: Ruins
 {
  scope = 1;
  vehicleClass = "Ruins";
  model = "\smd_sahrani_artif_obj\buildings\Ruins\smd_hut02_ruins";
 };
 class Land_smd_hut03_ruins: Ruins
 {
  scope = 1;
  vehicleClass = "Ruins";
  model = "\smd_sahrani_artif_obj\buildings\Ruins\smd_hut03_ruins";
 };
 class Land_smd_hut04_ruins: Ruins
 {
  scope = 1;
  vehicleClass = "Ruins";
  model = "\smd_sahrani_artif_obj\buildings\Ruins\smd_hut04_ruins";
 };
 class Land_smd_kasarna_ruins: Ruins
 {
  scope = 1;
  vehicleClass = "Ruins";
  model = "\smd_sahrani_artif_obj\buildings\Ruins\smd_kasarna_ruins";
 };
 class Land_smd_kasarna_brana_ruins: Ruins
 {
  scope = 1;
  vehicleClass = "Ruins";
  model = "\smd_sahrani_artif_obj\buildings\Ruins\smd_kasarna_brana_ruins";
 };
 class Land_smd_kasarna_prujezd_ruins: Ruins
 {
  scope = 1;
  vehicleClass = "Ruins";
  model = "\smd_sahrani_artif_obj\buildings\Ruins\smd_kasarna_prujezd_ruins";
 };
 class Land_smd_kasarna_rohova_ruins: Ruins
 {
  scope = 1;
  vehicleClass = "Ruins";
  model = "\smd_sahrani_artif_obj\buildings\Ruins\smd_kasarna_rohova_ruins";
 };
 class Land_smd_kostel_mexico_ruins: Ruins
 {
  scope = 1;
  vehicleClass = "Ruins";
  model = "\smd_sahrani_artif_obj\buildings\Ruins\smd_kostel_mexico_ruins";
 };
 class Land_smd_kostel_trosky_ruins: Ruins
 {
  scope = 1;
  vehicleClass = "Ruins";
  model = "\smd_sahrani_artif_obj\buildings\Ruins\smd_kostel_trosky_ruins";
 };
 class Land_smd_kostel2_ruins: Ruins
 {
  scope = 1;
  vehicleClass = "Ruins";
  model = "\smd_sahrani_artif_obj\buildings\Ruins\smd_kostel2_ruins";
 };
 class Land_smd_kostelik_ruins: Ruins
 {
  scope = 1;
  vehicleClass = "Ruins";
  model = "\smd_sahrani_artif_obj\buildings\Ruins\smd_kostelik_ruins";
 };
 class Land_smd_letistni_hala_ruins: Ruins
 {
  scope = 1;
  vehicleClass = "Ruins";
  model = "\smd_sahrani_artif_obj\buildings\Ruins\smd_letistni_hala_ruins";
 };
 class Land_smd_majak_v_celku_ruins: Ruins
 {
  scope = 1;
  vehicleClass = "Ruins";
  model = "\smd_sahrani_artif_obj\buildings\Ruins\smd_majak_v_celku_ruins";
 };
 class Land_smd_orlhot_ruins: Ruins
 {
  scope = 1;
  vehicleClass = "Ruins";
  model = "\smd_sahrani_artif_obj\buildings\Ruins\smd_orlhot_ruins";
 };
 class Land_smd_posed_ruins: Ruins
 {
  scope = 1;
  vehicleClass = "Ruins";
  model = "\smd_sahrani_artif_obj\buildings\Ruins\smd_posed_ruins";
 };
 class Land_smd_ryb_domek_ruins: Ruins
 {
  scope = 1;
  vehicleClass = "Ruins";
  model = "\smd_sahrani_artif_obj\buildings\Ruins\smd_ryb_domek_ruins";
 };
 class Land_smd_sara_domek_rosa_ruins: Ruins
 {
  scope = 1;
  vehicleClass = "Ruins";
  model = "\smd_sahrani_artif_obj\buildings\Ruins\smd_sara_domek_rosa_ruins";
 };
 class Land_smd_sara_domek_sedy_bez_ruins: Ruins
 {
  scope = 1;
  vehicleClass = "Ruins";
  model = "\smd_sahrani_artif_obj\buildings\Ruins\smd_sara_domek_sedy_bez_ruins";
 };
 class Land_smd_sara_domek_zluty_bez_ruins: Ruins
 {
  scope = 1;
  vehicleClass = "Ruins";
  model = "\smd_sahrani_artif_obj\buildings\Ruins\smd_sara_domek_zluty_bez_ruins";
 };
 class Land_smd_sara_domek01_ruins: Ruins
 {
  scope = 1;
  vehicleClass = "Ruins";
  model = "\smd_sahrani_artif_obj\buildings\Ruins\smd_sara_domek01_ruins";
 };
 class Land_smd_sara_domek02_ruins: Ruins
 {
  scope = 1;
  vehicleClass = "Ruins";
  model = "\smd_sahrani_artif_obj\buildings\Ruins\smd_sara_domek02_ruins";
 };
 class Land_smd_sara_domek03_ruins: Ruins
 {
  scope = 1;
  vehicleClass = "Ruins";
  model = "\smd_sahrani_artif_obj\buildings\Ruins\smd_sara_domek03_ruins";
 };
 class Land_smd_sara_domek04_ruins: Ruins
 {
  scope = 1;
  vehicleClass = "Ruins";
  model = "\smd_sahrani_artif_obj\buildings\Ruins\smd_sara_domek04_ruins";
 };
 class Land_smd_sara_domek05_ruins: Ruins
 {
  scope = 1;
  vehicleClass = "Ruins";
  model = "\smd_sahrani_artif_obj\buildings\Ruins\smd_sara_domek05_ruins";
 };
 class Land_smd_sara_dum_podloubi03klaster_ruins: Ruins
 {
  scope = 1;
  vehicleClass = "Ruins";
  model = "\smd_sahrani_artif_obj\buildings\Ruins\smd_sara_dum_podloubi03klaster_ruins";
 };
 class Land_smd_sara_dum_podloubi03rovny_ruins: Ruins
 {
  scope = 1;
  vehicleClass = "Ruins";
  model = "\smd_sahrani_artif_obj\buildings\Ruins\smd_sara_dum_podloubi03rovny_ruins";
 };
 class Land_smd_sara_stodola2_ruins: Ruins
 {
  scope = 1;
  vehicleClass = "Ruins";
  model = "\smd_sahrani_artif_obj\buildings\Ruins\smd_sara_stodola2_ruins";
 };
 class Land_smd_sara_zluty_statek_ruins: Ruins
 {
  scope = 1;
  vehicleClass = "Ruins";
  model = "\smd_sahrani_artif_obj\buildings\Ruins\smd_sara_zluty_statek_ruins";
 };
 class Land_smd_sara_zluty_statek_in_ruins: Ruins
 {
  scope = 1;
  vehicleClass = "Ruins";
  model = "\smd_sahrani_artif_obj\buildings\Ruins\smd_sara_zluty_statek_in_ruins";
 };
 class Land_smd_skola_ruins: Ruins
 {
  scope = 1;
  vehicleClass = "Ruins";
  model = "\smd_sahrani_artif_obj\buildings\Ruins\smd_skola_ruins";
 };
 class Land_smd_ss_hangard_ruins: Ruins
 {
  scope = 1;
  vehicleClass = "Ruins";
  model = "\smd_sahrani_artif_obj\buildings\Ruins\smd_ss_hangard_ruins";
 };
 class Land_smd_stodola_old_ruins: Ruins
 {
  scope = 1;
  vehicleClass = "Ruins";
  model = "\smd_sahrani_artif_obj\buildings\Ruins\smd_stodola_old_ruins";
 };
 class Land_smd_strazni_vez_ruins: Ruins
 {
  scope = 1;
  vehicleClass = "Ruins";
  model = "\smd_sahrani_artif_obj\buildings\Ruins\smd_strazni_vez_ruins";
 };
 class Land_smd_tovarna1_ruins: Ruins
 {
  scope = 1;
  vehicleClass = "Ruins";
  model = "\smd_sahrani_artif_obj\buildings\Ruins\smd_tovarna1_ruins";
 };
 class Land_watertower1_ruins: Ruins
 {
  scope = 1;
  vehicleClass = "Ruins";
  model = "\smd_sahrani_artif_obj\buildings\Ruins\watertower1_ruins";
 };
 class Land_smd_dum_mesto_in_open_ruins: Ruins
 {
  scope = 1;
  vehicleClass = "Ruins";
  model = "\ca\buildings\Ruins\dum_mesto_in_ruins";
 };
 class Land_smd_bouda_plech_open: House
 {
  scope = 1;
  animated = "true";
  displayName = "Shed";
  model = "\smd_sahrani_artif_obj\buildings\smd_bouda_plech_open";
  destrType = "DestructTent";
  armor = 50;
  class AnimationSources
  {
   class Door1
   {
    source = "user";
    animPeriod = 1;
    initPhase = 0;
   };
   class Door2
   {
    source = "user";
    animPeriod = 1;
    initPhase = 0;
   };
   class Door3
   {
    source = "user";
    animPeriod = 0.5;
    initPhase = 0;
   };
  };
  class UserActions
  {
   class OpenDoor
   {
    displayName = "Open Shed";
    position = "Door2_Button";
    radius = 1;
    onlyForPlayer = 0;
    condition = "this animationPhase ""Door2"" < 0.5";
    statement = "0 = this spawn {_this animate [""Door3"", 1]; sleep 1; _this animate [""Door2"", 1]; _this animate [""Door1"", 1]}";
   };
   class CloseDoor: OpenDoor
   {
    displayName = "Close Shed";
    condition = "this animationPhase ""Door2"" >= 0.5";
    statement = "0 = this spawn {_this animate [""Door2"", 0]; _this animate [""Door1"", 0]; sleep 1;_this animate [""Door3"", 0]}";
   };
  };
 };
 class Land_smd_benzina_schnell_open: House
 {
  icon = "\smd_sahrani_artif_obj\buildings\icons\i_fuel_ca.paa";
  scope = 1;
  animated = "true";
  armor = 400;
  model = "\smd_sahrani_artif_obj\buildings\smd_benzina_schnell_open.p3d";
  displayName = "Fuel Station";
  nameSound = "building";
  accuracy = 0.5;
  transportFuel = 50000;
  cost = 0;
  mapSize = 7.5;
  destrType = "destructBuilding";
  class DestructionEffects: DestructionEffects
  {
   class FuelStationExp
   {
    simulation = "particles";
    type = "FuelStationExp";
    position = "";
    intensity = 0.15;
    interval = 1;
    lifeTime = 0.001;
   };
   class FuelStationSmk1
   {
    simulation = "particles";
    type = "FuelStationSmk1";
    position = "";
    intensity = 0.15;
    interval = 1;
    lifeTime = 0.001;
   };
   class Light1
   {
    simulation = "light";
    type = "ObjectDestructionLight";
    position = "DestructionFire";
    intensity = 0.001;
    interval = 1;
    lifeTime = 0.5;
   };
   class FuelFire1
   {
    simulation = "particles";
    type = "FuelFire1";
    position = "DestructionFire";
    intensity = 0.15;
    interval = 1;
    lifeTime = 0.5;
   };
   class FuelSmoke1
   {
    simulation = "particles";
    type = "FuelSmoke1";
    position = "DestructionFire";
    intensity = 0.15;
    interval = 1;
    lifeTime = 0.5;
   };
   class FuelSmoke2
   {
    simulation = "particles";
    type = "FuelSmoke2";
    position = "DestructionFire";
    intensity = 0.15;
    interval = 1;
    lifeTime = 0.5;
   };
   class Ruin1
   {
    simulation = "ruin";
    type = "\smd_sahrani_artif_obj\buildings\ruins\smd_benzina_schnell_open_Ruins";
    position = "";
    intensity = 1;
    interval = 1;
    lifeTime = 1;
   };
  };
  class AnimationSources
  {
   class DoorF
   {
    source = "user";
    animPeriod = 1;
    initPhase = 0;
   };
   class Door2F
   {
    source = "user";
    animPeriod = 12.5;
    initPhase = 0;
   };
  };
  class UserActions
  {
   class OpenDoor
   {
    displayName = "Open Door";
    position = "DoorF_Button";
    radius = 3;
    onlyForPlayer = 0;
    condition = "this animationPhase ""DoorF"" < 0.5";
    statement = "this animate [""DoorF"", 1]";
   };
   class CloseDoor: OpenDoor
   {
    displayName = "Close Door";
    condition = "this animationPhase ""DoorF"" >= 0.5";
    statement = "this animate [""DoorF"", 0]";
   };
   class OpenDoor2
   {
    displayName = "Open Garage Door";
    position = "Door2F_Button";
    radius = 2;
    onlyForPlayer = 0;
    condition = "this animationPhase ""Door2F"" < 0.5";
    statement = "this animate [""Door2F"", 1];this say 'smd_garagedoor';";
   };
   class CloseDoor2: OpenDoor2
   {
    displayName = "Close Garage Door";
    condition = "this animationPhase ""Door2F"" >= 0.5";
    statement = "this animate [""Door2F"", 0];this say 'smd_garagedoor';";
   };
  };
 };
 class Land_smd_ammostore2_open: House
 {
  model = "\smd_sahrani_artif_obj\buildings\smd_ammostore2_open.p3d";
  ladders[] = {
   { "start","end" },
   { "start1","end1" },
   { "start2","end2" }};
  class AnimationSources
  {
   class Door1
   {
    source = "user";
    animPeriod = 5;
    initPhase = 0;
   };
   class Door2
   {
    source = "user";
    animPeriod = 5;
    initPhase = 0;
   };
   class Lid
   {
    source = "user";
    animPeriod = 1;
    initPhase = 0;
   };
   class Lid2
   {
    source = "user";
    animPeriod = 0.1;
    initPhase = 0;
   };
   class Lid3
   {
    source = "user";
    animPeriod = 1;
    initPhase = 0;
   };
   class Lid4
   {
    source = "user";
    animPeriod = 0.1;
    initPhase = 0;
   };
  };
  class UserActions
  {
   class OpenDoor
   {
    displayName = "Open Bay Doors";
    position = "Door1_Button";
    radius = 3;
    onlyForPlayer = 0;
    condition = "this animationPhase ""Door1"" < 0.5";
    statement = "this animate [""Door1"", 1]; this animate [""Door2"", 1];this say 'smd_garage_doors';";
   };
   class CloseDoor: OpenDoor
   {
    displayName = "Close Bay Doors";
    condition = "this animationPhase ""Door1"" >= 0.5";
    statement = "this animate [""Door1"", 0]; this animate [""Door2"", 0];this say 'smd_garage_doors';";
   };
   class OpenLid
   {
    displayName = "Open Ammo Box";
    position = "Lid_Button";
    radius = 1.2;
    onlyForPlayer = 0;
    condition = "this animationPhase ""Lid"" < 0.5";
    statement = "0 = this spawn {_this animate [""Lid"", 1]; sleep 1; _this animate [""Lid2"", 1]}; this say 'smd_ammolid';";
   };
   class CloseLid: OpenLid
   {
    displayName = "Close Ammo Box";
    condition = "this animationPhase ""Lid"" >= 0.5";
    statement = "this animate [""Lid2"", 0]; this animate [""Lid"", 0];this say 'smd_ammolid';";
   };
   class OpenLid2
   {
    displayName = "Open Ammo Box";
    position = "Lid3_Button";
    radius = 1.2;
    onlyForPlayer = 0;
    condition = "this animationPhase ""Lid3"" < 0.5";
    statement = "0 = this spawn {_this animate [""Lid3"", 1]; sleep 1; _this animate [""Lid4"", 1]};this say 'smd_ammolid';";
   };
   class CloseLid2: OpenLid2
   {
    displayName = "Close Ammo Box";
    condition = "this animationPhase ""Lid3"" >= 0.5";
    statement = "this animate [""Lid4"", 0]; this animate [""Lid3"", 0];this say 'smd_ammolid';";
   };
  };
 };
 class Land_smd_army_hut_int: House
 {
  model = "\smd_sahrani_artif_obj\buildings\smd_army_hut_int.p3d";
  destrType = "destructBuilding";
  class DestructionEffects: DestructionEffects
  {
   class Ruin1
   {
    simulation = "ruin";
    type = "\smd_sahrani_artif_obj\buildings\ruins\army_hut_int_ruins";
    position = "";
    intensity = 1;
    interval = 1;
    lifeTime = 1;
   };
  };
 };
 class Land_smd_army_hut_storrage: House
 {
  model = "\smd_sahrani_artif_obj\buildings\smd_army_hut_storrage.p3d";
  destrType = "destructBuilding";
  class DestructionEffects: DestructionEffects
  {
   class Ruin1
   {
    simulation = "ruin";
    type = "\smd_sahrani_artif_obj\buildings\ruins\army_hut_storrage_ruins";
    position = "";
    intensity = 1;
    interval = 1;
    lifeTime = 1;
   };
  };
 };
 class Land_smd_army_hut2: House
 {
  model = "\smd_sahrani_artif_obj\buildings\smd_army_hut2.p3d";
  destrType = "destructBuilding";
  class DestructionEffects: DestructionEffects
  {
   class Ruin1
   {
    simulation = "ruin";
    type = "\smd_sahrani_artif_obj\buildings\ruins\army_hut2_ruins";
    position = "";
    intensity = 1;
    interval = 1;
    lifeTime = 1;
   };
  };
 };
 class Land_smd_army_hut2_int: House
 {
  model = "\smd_sahrani_artif_obj\buildings\smd_army_hut2_int.p3d";
  destrType = "destructBuilding";
  class DestructionEffects: DestructionEffects
  {
   class Ruin1
   {
    simulation = "ruin";
    type = "\smd_sahrani_artif_obj\buildings\ruins\army_hut2_int_ruins";
    position = "";
    intensity = 1;
    interval = 1;
    lifeTime = 1;
   };
  };
 };
 class Land_smd_army_hut3_long: House
 {
  model = "\smd_sahrani_artif_obj\buildings\smd_army_hut3_long.p3d";
  destrType = "destructBuilding";
  class DestructionEffects: DestructionEffects
  {
   class Ruin1
   {
    simulation = "ruin";
    type = "\smd_sahrani_artif_obj\buildings\ruins\army_hut3_long_ruins";
    position = "";
    intensity = 1;
    interval = 1;
    lifeTime = 1;
   };
  };
 };
 class Land_smd_army_hut3_long_int: House
 {
  model = "\smd_sahrani_artif_obj\buildings\smd_army_hut3_long_int.p3d";
  destrType = "destructBuilding";
  class DestructionEffects: DestructionEffects
  {
   class Ruin1
   {
    simulation = "ruin";
    type = "\smd_sahrani_artif_obj\buildings\ruins\army_hut3_int_ruins";
    position = "";
    intensity = 1;
    interval = 1;
    lifeTime = 1;
   };
  };
 };
 class Land_smd_bozi_muka: House
 {
  model = "\smd_sahrani_artif_obj\buildings\smd_bozi_muka.p3d";
  mapSize = 0.5;
  destrType = "DestructTree";
 };
 class Land_smd_budova3: House
 {
  model = "\smd_sahrani_artif_obj\buildings\smd_budova3.p3d";
  destrType = "destructBuilding";
  class DestructionEffects: DestructionEffects
  {
   class Ruin1
   {
    simulation = "ruin";
    type = "\smd_sahrani_artif_obj\buildings\ruins\smd_budova3_ruins";
    position = "";
    intensity = 1;
    interval = 1;
    lifeTime = 1;
   };
  };
 };
 class Land_smd_cihlovej_dum_mini: House
 {
  model = "\smd_sahrani_artif_obj\buildings\smd_cihlovej_dum_mini.p3d";
  destrType = "destructBuilding";
  class DestructionEffects: DestructionEffects
  {
   class Ruin1
   {
    simulation = "ruin";
    type = "\smd_sahrani_artif_obj\buildings\ruins\smd_cihlovej_dum_mini_ruins";
    position = "";
    intensity = 1;
    interval = 1;
    lifeTime = 1;
   };
  };
 };
 class Land_smd_dum_istan2: House
 {
  model = "\smd_sahrani_artif_obj\buildings\smd_dum_istan2.p3d";
  destrType = "destructBuilding";
  class DestructionEffects: DestructionEffects
  {
   class Ruin1
   {
    simulation = "ruin";
    type = "\smd_sahrani_artif_obj\buildings\ruins\smd_dum_istan2_ruins";
    position = "";
    intensity = 1;
    interval = 1;
    lifeTime = 1;
   };
  };
 };
 class Land_smd_dum_istan2_01: House
 {
  model = "\smd_sahrani_artif_obj\buildings\smd_dum_istan2_01.p3d";
  destrType = "destructBuilding";
  class DestructionEffects: DestructionEffects
  {
   class Ruin1
   {
    simulation = "ruin";
    type = "\smd_sahrani_artif_obj\buildings\ruins\smd_dum_istan2_01_ruins";
    position = "";
    intensity = 1;
    interval = 1;
    lifeTime = 1;
   };
  };
 };
 class Land_smd_dum_istan2_02: House
 {
  model = "\smd_sahrani_artif_obj\buildings\smd_dum_istan2_02.p3d";
  destrType = "destructBuilding";
  class DestructionEffects: DestructionEffects
  {
   class Ruin1
   {
    simulation = "ruin";
    type = "\smd_sahrani_artif_obj\buildings\ruins\smd_dum_istan2_02_ruins";
    position = "";
    intensity = 1;
    interval = 1;
    lifeTime = 1;
   };
  };
 };
 class Land_smd_dum_istan2_03: House
 {
  model = "\smd_sahrani_artif_obj\buildings\smd_dum_istan2_03.p3d";
  destrType = "destructBuilding";
  class DestructionEffects: DestructionEffects
  {
   class Ruin1
   {
    simulation = "ruin";
    type = "\smd_sahrani_artif_obj\buildings\ruins\smd_dum_istan2_03_ruins";
    position = "";
    intensity = 1;
    interval = 1;
    lifeTime = 1;
   };
  };
 };
 class Land_smd_dum_istan2_03a: House
 {
  model = "\smd_sahrani_artif_obj\buildings\smd_dum_istan2_03a.p3d";
  destrType = "destructBuilding";
  class DestructionEffects: DestructionEffects
  {
   class Ruin1
   {
    simulation = "ruin";
    type = "\smd_sahrani_artif_obj\buildings\ruins\smd_dum_istan2_03a_ruins";
    position = "";
    intensity = 1;
    interval = 1;
    lifeTime = 1;
   };
  };
 };
 class Land_smd_dum_istan2_04a: House
 {
  model = "\smd_sahrani_artif_obj\buildings\smd_dum_istan2_04a.p3d";
  destrType = "destructBuilding";
  class DestructionEffects: DestructionEffects
  {
   class Ruin1
   {
    simulation = "ruin";
    type = "\smd_sahrani_artif_obj\buildings\ruins\smd_dum_istan2_04a_ruins";
    position = "";
    intensity = 1;
    interval = 1;
    lifeTime = 1;
   };
  };
 };
 class Land_smd_dum_istan2b: House
 {
  model = "\smd_sahrani_artif_obj\buildings\smd_dum_istan2b.p3d";
  destrType = "destructBuilding";
  class DestructionEffects: DestructionEffects
  {
   class Ruin1
   {
    simulation = "ruin";
    type = "\smd_sahrani_artif_obj\buildings\ruins\smd_dum_istan2b_ruins";
    position = "";
    intensity = 1;
    interval = 1;
    lifeTime = 1;
   };
  };
 };
 class Land_smd_dum_istan3: House
 {
  model = "\smd_sahrani_artif_obj\buildings\smd_dum_istan3.p3d";
  destrType = "destructBuilding";
  class DestructionEffects: DestructionEffects
  {
   class Ruin1
   {
    simulation = "ruin";
    type = "\smd_sahrani_artif_obj\buildings\ruins\smd_dum_istan3_ruins";
    position = "";
    intensity = 1;
    interval = 1;
    lifeTime = 1;
   };
  };
 };
 class Land_smd_dum_istan3_hromada: House
 {
  model = "\smd_sahrani_artif_obj\buildings\smd_dum_istan3_hromada.p3d";
  destrType = "destructBuilding";
  class DestructionEffects: DestructionEffects
  {
   class Ruin1
   {
    simulation = "ruin";
    type = "\smd_sahrani_artif_obj\buildings\ruins\smd_dum_istan3_hromada_ruins";
    position = "";
    intensity = 1;
    interval = 1;
    lifeTime = 1;
   };
  };
 };
 class Land_smd_dum_istan4: House
 {
  model = "\smd_sahrani_artif_obj\buildings\smd_dum_istan4.p3d";
  destrType = "destructBuilding";
  class DestructionEffects: DestructionEffects
  {
   class Ruin1
   {
    simulation = "ruin";
    type = "\smd_sahrani_artif_obj\buildings\ruins\smd_dum_istan4_ruins";
    position = "";
    intensity = 1;
    interval = 1;
    lifeTime = 1;
   };
  };
 };
 class Land_smd_dum_istan4_big: House
 {
  model = "\smd_sahrani_artif_obj\buildings\smd_dum_istan4_big.p3d";
  destrType = "destructBuilding";
  class DestructionEffects: DestructionEffects
  {
   class Ruin1
   {
    simulation = "ruin";
    type = "\smd_sahrani_artif_obj\buildings\ruins\smd_dum_istan4_big_ruins";
    position = "";
    intensity = 1;
    interval = 1;
    lifeTime = 1;
   };
  };
 };
 class Land_smd_dum_istan4_big_inverse: House
 {
  model = "\smd_sahrani_artif_obj\buildings\smd_dum_istan4_big_inverse.p3d";
  destrType = "destructBuilding";
  class DestructionEffects: DestructionEffects
  {
   class Ruin1
   {
    simulation = "ruin";
    type = "\smd_sahrani_artif_obj\buildings\ruins\smd_dum_istan4_big_inverse_ruins";
    position = "";
    intensity = 1;
    interval = 1;
    lifeTime = 1;
   };
  };
 };
 class Land_smd_dum_istan4_chodnik: House
 {
  model = "\smd_sahrani_artif_obj\buildings\smd_dum_istan4_chodnik.p3d";
  destrType = "destructBuilding";
  class DestructionEffects: DestructionEffects
  {
   class Ruin1
   {
    simulation = "ruin";
    type = "\smd_sahrani_artif_obj\buildings\ruins\smd_dum_istan4_chodnik_ruins";
    position = "";
    intensity = 1;
    interval = 1;
    lifeTime = 1;
   };
  };
 };
 class Land_smd_dum_istan4_detaily1: House
 {
  model = "\smd_sahrani_artif_obj\buildings\smd_dum_istan4_detaily1.p3d";
  destrType = "destructBuilding";
  class DestructionEffects: DestructionEffects
  {
   class Ruin1
   {
    simulation = "ruin";
    type = "\smd_sahrani_artif_obj\buildings\ruins\smd_dum_istan4_detaily1_ruins";
    position = "";
    intensity = 1;
    interval = 1;
    lifeTime = 1;
   };
  };
 };
 class Land_smd_dum_istan4_inverse: House
 {
  model = "\smd_sahrani_artif_obj\buildings\smd_dum_istan4_inverse.p3d";
  destrType = "destructBuilding";
  class DestructionEffects: DestructionEffects
  {
   class Ruin1
   {
    simulation = "ruin";
    type = "\smd_sahrani_artif_obj\buildings\ruins\smd_dum_istan4_inverse_ruins";
    position = "";
    intensity = 1;
    interval = 1;
    lifeTime = 1;
   };
  };
 };
 class Land_smd_dum_mesto3_istan: House
 {
  model = "\smd_sahrani_artif_obj\buildings\smd_dum_mesto3_istan.p3d";
  destrType = "destructBuilding";
  class DestructionEffects: DestructionEffects
  {
   class Ruin1
   {
    simulation = "ruin";
    type = "\smd_sahrani_artif_obj\buildings\ruins\smd_dum_mesto3_istan_ruins";
    position = "";
    intensity = 1;
    interval = 1;
    lifeTime = 1;
   };
  };
 };
 class Land_smd_dum_olezlina_open: House
 {
  model = "\smd_sahrani_artif_obj\buildings\smd_dum_olezlina_open.p3d";
  animated = "true";
  armor = 150;
  nameSound = "building";
  accuracy = 0.5;
  cost = 0;
  mapSize = 7.5;
  destrType = "destructBuilding";
  class DestructionEffects: DestructionEffects
  {
   class Ruin1
   {
    simulation = "ruin";
    type = "\smd_sahrani_artif_obj\buildings\ruins\smd_dum_olezlina_open_ruins";
    position = "";
    intensity = 1;
    interval = 1;
    lifeTime = 1;
   };
  };
  class AnimationSources
  {
   class Door1
   {
    source = "user";
    animPeriod = 1;
    initPhase = 0;
   };
   class Door2
   {
    source = "user";
    animPeriod = 1;
    initPhase = 0;
   };
   class Door3
   {
    source = "user";
    animPeriod = 1;
    initPhase = 0;
   };
   class Door4
   {
    source = "user";
    animPeriod = 1;
    initPhase = 0;
   };
   class Door5
   {
    source = "user";
    animPeriod = 1;
    initPhase = 0;
   };
   class Door6
   {
    source = "user";
    animPeriod = 1;
    initPhase = 0;
   };
   class Door7
   {
    source = "user";
    animPeriod = 1;
    initPhase = 0;
   };
   class Door8
   {
    source = "user";
    animPeriod = 1;
    initPhase = 0;
   };
  };
  class UserActions
  {
   class OpenDoor
   {
    displayName = "Open Door";
    position = "Door1_Button";
    radius = 3;
    onlyForPlayer = 0;
    condition = "this animationPhase ""Door1"" < 0.5";
    statement = "this animate [""Door1"", 1]";
   };
   class CloseDoor: OpenDoor
   {
    displayName = "Close Door";
    condition = "this animationPhase ""Door1"" >= 0.5";
    statement = "this animate [""Door1"", 0]";
   };
   class OpenDoor2
   {
    displayName = "Open Door";
    position = "Door2_Button";
    radius = 2;
    onlyForPlayer = 0;
    condition = "this animationPhase ""Door2"" < 0.5";
    statement = "this animate [""Door2"", 1]";
   };
   class CloseDoor2: OpenDoor2
   {
    displayName = "Close Door";
    condition = "this animationPhase ""Door2"" >= 0.5";
    statement = "this animate [""Door2"", 0]";
   };
   class OpenDoor3
   {
    displayName = "Open Door";
    position = "Door3_Button";
    radius = 2;
    onlyForPlayer = 0;
    condition = "this animationPhase ""Door3"" < 0.5";
    statement = "this animate [""Door3"", 1]";
   };
   class CloseDoor3: OpenDoor3
   {
    displayName = "Close Door";
    condition = "this animationPhase ""Door3"" >= 0.5";
    statement = "this animate [""Door3"", 0]";
   };
   class OpenDoor4
   {
    displayName = "Open Door";
    position = "Door4_Button";
    radius = 2;
    onlyForPlayer = 0;
    condition = "this animationPhase ""Door4"" < 0.5";
    statement = "this animate [""Door4"", 1]";
   };
   class CloseDoor4: OpenDoor4
   {
    displayName = "Close Door";
    condition = "this animationPhase ""Door4"" >= 0.5";
    statement = "this animate [""Door4"", 0]";
   };
   class OpenDoor5
   {
    displayName = "Open Door";
    position = "Door5_Button";
    radius = 2;
    onlyForPlayer = 0;
    condition = "this animationPhase ""Door5"" < 0.5";
    statement = "this animate [""Door5"", 1]; this animate [""Door6"", 1]";
   };
   class CloseDoor5: OpenDoor5
   {
    displayName = "Close Door";
    condition = "this animationPhase ""Door5"" >= 0.5";
    statement = "this animate [""Door5"", 0]; this animate [""Door6"", 0]";
   };
   class OpenDoor6
   {
    displayName = "Open Door";
    position = "Door7_Button";
    radius = 2;
    onlyForPlayer = 0;
    condition = "this animationPhase ""Door7"" < 0.5";
    statement = "this animate [""Door7"", 1]; this animate [""Door8"", 1]";
   };
   class CloseDoor6: OpenDoor6
   {
    displayName = "Close Door";
    condition = "this animationPhase ""Door7"" >= 0.5";
    statement = "this animate [""Door7"", 0]; this animate [""Door8"", 0]";
   };
  };
 };
 class Land_smd_dum02: House
 {
  model = "\smd_sahrani_artif_obj\buildings\smd_dum02.p3d";
  destrType = "destructBuilding";
  class DestructionEffects: DestructionEffects
  {
   class Ruin1
   {
    simulation = "ruin";
    type = "\smd_sahrani_artif_obj\buildings\ruins\smd_dum02_ruins";
    position = "";
    intensity = 1;
    interval = 1;
    lifeTime = 1;
   };
  };
 };
 class Land_smd_dumruina: House
 {
  model = "\smd_sahrani_artif_obj\buildings\smd_dumruina.p3d";
  destrType = "destructBuilding";
  class DestructionEffects: DestructionEffects
  {
   class Ruin1
   {
    simulation = "ruin";
    type = "\smd_sahrani_artif_obj\buildings\ruins\smd_dumruina_ruins";
    position = "";
    intensity = 1;
    interval = 1;
    lifeTime = 1;
   };
  };
 };
 class Land_smd_fuelstation_army: House
 {
  animated = "false";
  accuracy = 0.5;
  transportFuel = 50000;
  cost = 0;
  armor = 125;
  ladders[] = {
   { "start","end" }};
  model = "\smd_sahrani_artif_obj\buildings\smd_fuelstation_army.p3d";
  displayName = "Fuel Station";
  mapSize = 5.0;
  nameSound = "fuelstation";
  destrType = "DestructBuilding";
  class DestructionEffects: DestructionEffects
  {
   class FuelStationExp
   {
    simulation = "particles";
    type = "FuelStationExp";
    position = "";
    intensity = 0.15;
    interval = 1;
    lifeTime = 0.001;
   };
   class FuelStationSmk1
   {
    simulation = "particles";
    type = "FuelStationSmk1";
    position = "";
    intensity = 0.15;
    interval = 1;
    lifeTime = 0.001;
   };
   class Light1
   {
    simulation = "light";
    type = "ObjectDestructionLight";
    position = "DestructionFire";
    intensity = 0.001;
    interval = 1;
    lifeTime = 0.5;
   };
   class FuelFire1
   {
    simulation = "particles";
    type = "FuelFire1";
    position = "DestructionFire";
    intensity = 0.15;
    interval = 1;
    lifeTime = 0.5;
   };
   class FuelSmoke1
   {
    simulation = "particles";
    type = "FuelSmoke1";
    position = "DestructionFire";
    intensity = 0.15;
    interval = 1;
    lifeTime = 0.5;
   };
   class FuelSmoke2
   {
    simulation = "particles";
    type = "FuelSmoke2";
    position = "DestructionFire";
    intensity = 0.15;
    interval = 1;
    lifeTime = 0.5;
   };
   class FuelDestr
   {
    simulation = "destroy";
    type = "FuelStationDestr";
    position = "";
    intensity = 1;
    interval = 1;
    lifeTime = 1;
   };
  };
 };
 class Land_smd_garaz_bez_tanku: House
 {
  model = "\smd_sahrani_artif_obj\buildings\smd_garaz_bez_tanku.p3d";
  ladders[] = {
   { "start","end" },
   { "start1","end1" },
   { "start2","end2" }};
  destrType = "destructNo";
 };
 class Land_smd_garaz_mala_open: House
 {
  scope = 1;
  animated = "true";
  armor = 75;
  model = "\smd_sahrani_artif_obj\buildings\smd_garaz_mala_open.p3d";
  displayName = "Small Garage";
  nameSound = "building";
  accuracy = 0.5;
  simulation = "house";
  mapSize = 7.5;
  destrType = "destructBuilding";
  class DestructionEffects: DestructionEffects
  {
   class Ruin1
   {
    simulation = "ruin";
    type = "\smd_sahrani_artif_obj\buildings\ruins\garaz_mala_Ruins";
    position = "";
    intensity = 1;
    interval = 1;
    lifeTime = 1;
   };
  };
  class AnimationSources
  {
   class Door
   {
    source = "user";
    animPeriod = 3;
    initPhase = 0;
   };
  };
  class UserActions
  {
   class OpenDoor
   {
    displayName = "Open Garage Door";
    position = "Door_Button";
    radius = 3;
    onlyForPlayer = 0;
    condition = "this animationPhase ""Door"" < 0.5";
    statement = "this animate [""Door"", 1]";
   };
   class CloseDoor: OpenDoor
   {
    displayName = "Close Garage Door";
    condition = "this animationPhase ""Door"" >= 0.5";
    statement = "this animate [""Door"", 0]";
   };
  };
 };
 class Land_smd_garaz_s_tankem: House
 {
  model = "\smd_sahrani_artif_obj\buildings\smd_garaz_s_tankem.p3d";
 };
 class Land_smd_hlaska: House
 {
  model = "\smd_sahrani_artif_obj\buildings\smd_hlaska.p3d";
  armor = 25;
  ladders[] = {
   { "start","end" }};
  destrType = "destructBuilding";
  class DestructionEffects: DestructionEffects
  {
   class Ruin1
   {
    simulation = "ruin";
    type = "\smd_sahrani_artif_obj\buildings\ruins\smd_hlaska_Ruins";
    position = "";
    intensity = 1;
    interval = 1;
    lifeTime = 1;
   };
  };
 };
 class Land_smd_hospoda_mesto: House
 {
  model = "\smd_sahrani_artif_obj\buildings\smd_hospoda_mesto.p3d";
  destrType = "destructBuilding";
  class DestructionEffects: DestructionEffects
  {
   class Ruin1
   {
    simulation = "ruin";
    type = "\smd_sahrani_artif_obj\buildings\ruins\smd_hospoda_mesto_Ruins";
    position = "";
    intensity = 1;
    interval = 1;
    lifeTime = 1;
   };
  };
 };
 class Land_smd_hotel: House
 {
  armor = 200;
  model = "\smd_sahrani_artif_obj\buildings\smd_hotel.p3d";
  ladders[] = {
   { "start1","end1" },
   { "start2","end2" },
   { "start3","end3" },
   { "start4","end4" }};
  destrType = "destructBuilding";
  nameSound = "building";
  accuracy = 0.5;
  cost = 0;
  mapSize = 7.5;
  class DestructionEffects: DestructionEffects
  {
   class HotelExp
   {
    simulation = "particles";
    type = "FuelStationExp";
    position = "";
    intensity = 0.15;
    interval = 1;
    lifeTime = 0.001;
   };
   class HotelSmk1
   {
    simulation = "particles";
    type = "FuelStationSmk1";
    position = "";
    intensity = 0.15;
    interval = 1;
    lifeTime = 0.001;
   };
   class HotelLight1
   {
    simulation = "light";
    type = "ObjectDestructionLight";
    position = "DestructionFire";
    intensity = 0.001;
    interval = 1;
    lifeTime = 0.5;
   };
   class HotelFuelFire1
   {
    simulation = "particles";
    type = "FuelFire1";
    position = "DestructionFire";
    intensity = 0.15;
    interval = 1;
    lifeTime = 0.5;
   };
   class HotelFuelSmoke1
   {
    simulation = "particles";
    type = "FuelSmoke1";
    position = "DestructionFire";
    intensity = 0.15;
    interval = 1;
    lifeTime = 0.5;
   };
   class HotelFuelSmoke2
   {
    simulation = "particles";
    type = "FuelSmoke2";
    position = "DestructionFire";
    intensity = 0.15;
    interval = 1;
    lifeTime = 0.5;
   };
   class Ruin1
   {
    simulation = "ruin";
    type = "\smd_sahrani_artif_obj\buildings\ruins\smd_hotel_Ruins";
    position = "";
    intensity = 1;
    interval = 1;
    lifeTime = 1;
   };
  };
 };
 class Land_smd_hotel_riviera1: House
 {
  armor = 200;
  model = "\smd_sahrani_artif_obj\buildings\smd_hotel_riviera1.p3d";
  ladders[] = {
   { "start","end" }};
  destrType = "destructBuilding";
  nameSound = "building";
  accuracy = 0.5;
  cost = 0;
  mapSize = 7.5;
  class DestructionEffects: DestructionEffects
  {
   class Ruin1
   {
    simulation = "ruin";
    type = "\smd_sahrani_artif_obj\buildings\ruins\smd_hotel_riviera1_Ruins";
    position = "";
    intensity = 1;
    interval = 1;
    lifeTime = 1;
   };
  };
 };
 class Land_smd_hotel_riviera2: House
 {
  armor = 200;
  model = "\smd_sahrani_artif_obj\buildings\smd_hotel_riviera2.p3d";
  ladders[] = {
   { "start","end" }};
  destrType = "destructBuilding";
  nameSound = "building";
  accuracy = 0.5;
  cost = 0;
  mapSize = 7.5;
  class DestructionEffects: DestructionEffects
  {
   class Ruin1
   {
    simulation = "ruin";
    type = "\smd_sahrani_artif_obj\buildings\ruins\smd_hotel_riviera2_Ruins";
    position = "";
    intensity = 1;
    interval = 1;
    lifeTime = 1;
   };
  };
 };
 class Land_smd_house_y_open: House
 {
  animated = "true";
  armor = 150;
  accuracy = 0.5;
  destrType = "destructBuilding";
  nameSound = "building";
  mapSize = 7.5;
  model = "\smd_sahrani_artif_obj\buildings\smd_house_y_open.p3d";
  class AnimationSources
  {
   class Door1
   {
    animPeriod = 1.5;
   };
   class Door2: Door1
   {
    initPhase = 0;
   };
   class Door3: Door1{};
   class Door4: Door1{};
  };
  class DestructionEffects: DestructionEffects
  {
   class Ruin1
   {
    simulation = "ruin";
    type = "\smd_sahrani_artif_obj\buildings\ruins\house_y_ruins.p3d";
    position = "";
    intensity = 1;
    interval = 1;
    lifeTime = 1;
   };
  };
  class UserActions
  {
   class OpenDoors1
   {
    displayName = "Open Door";
    position = "Door1_Axis";
    radius = 2;
    onlyForPlayer = 0;
    condition = "this animationPhase ""Door1"" < 0.5";
    statement = "this animate [""Door1"", 1]";
   };
   class CloseDoors1
   {
    displayName = "Close Door";
    position = "Door1_Axis";
    radius = 2;
    onlyForPlayer = 0;
    condition = "this animationPhase ""Door1"" >= 0.5";
    statement = "this animate [""Door1"", 0]";
   };
   class OpenDoors2
   {
    displayName = "Open Door";
    position = "Door2_Axis";
    radius = 2;
    onlyForPlayer = 0;
    condition = "this animationPhase ""Door2"" <= 0.5";
    statement = "this animate [""Door2"", 1]";
   };
   class CloseDoors2
   {
    displayName = "Close Door";
    position = "Door2_Axis";
    radius = 2;
    onlyForPlayer = 0;
    condition = "this animationPhase ""Door2"" > 0.5";
    statement = "this animate [""Door2"", 0]";
   };
   class OpenDoors3
   {
    displayName = "Open Door";
    position = "Door3_Axis";
    radius = 2;
    onlyForPlayer = 0;
    condition = "this animationPhase ""Door3"" < 0.5";
    statement = "this animate [""Door3"", 1]";
   };
   class CloseDoors3
   {
    displayName = "Close Door";
    position = "Door3_Axis";
    radius = 2;
    onlyForPlayer = 0;
    condition = "this animationPhase ""Door3"" >= 0.5";
    statement = "this animate [""Door3"", 0]";
   };
   class OpenDoors4
   {
    displayName = "Open Door";
    position = "Door4_Axis";
    radius = 2;
    onlyForPlayer = 0;
    condition = "this animationPhase ""Door4"" < 0.5";
    statement = "this animate [""Door4"", 1]";
   };
   class CloseDoors4
   {
    displayName = "Close Door";
    position = "Door4_Axis";
    radius = 2;
    onlyForPlayer = 0;
    condition = "this animationPhase ""Door4"" >= 0.5";
    statement = "this animate [""Door4"", 0]";
   };
  };
 };
 class Land_smd_hut01: House
 {
  armor = 100;
  model = "\smd_sahrani_artif_obj\buildings\smd_hut01.p3d";
  destrType = "destructBuilding";
  nameSound = "building";
  accuracy = 0.5;
  cost = 0;
  mapSize = 5.0;
  class DestructionEffects: DestructionEffects
  {
   class Ruin1
   {
    simulation = "ruin";
    type = "\smd_sahrani_artif_obj\buildings\ruins\smd_hut01_Ruins";
    position = "";
    intensity = 1;
    interval = 1;
    lifeTime = 1;
   };
  };
 };
 class Land_smd_hut02: Land_smd_hut01
 {
  model = "\smd_sahrani_artif_obj\buildings\smd_hut02.p3d";
  class DestructionEffects: DestructionEffects
  {
   class Ruin1
   {
    simulation = "ruin";
    type = "\smd_sahrani_artif_obj\buildings\ruins\smd_hut02_Ruins";
    position = "";
    intensity = 1;
    interval = 1;
    lifeTime = 1;
   };
  };
 };
 class Land_smd_hut03: Land_smd_hut01
 {
  model = "\smd_sahrani_artif_obj\buildings\smd_hut03.p3d";
  class DestructionEffects: DestructionEffects
  {
   class Ruin1
   {
    simulation = "ruin";
    type = "\smd_sahrani_artif_obj\buildings\ruins\smd_hut03_Ruins";
    position = "";
    intensity = 1;
    interval = 1;
    lifeTime = 1;
   };
  };
 };
 class Land_smd_hut04: Land_smd_hut01
 {
  model = "\smd_sahrani_artif_obj\buildings\smd_hut04.p3d";
  class DestructionEffects: DestructionEffects
  {
   class Ruin1
   {
    simulation = "ruin";
    type = "\smd_sahrani_artif_obj\buildings\ruins\smd_hut04_Ruins";
    position = "";
    intensity = 1;
    interval = 1;
    lifeTime = 1;
   };
  };
 };
 class Land_smd_kasarna: House
 {
  armor = 700;
  model = "\smd_sahrani_artif_obj\buildings\smd_kasarna.p3d";
  destrType = "destructBuilding";
  nameSound = "building";
  accuracy = 0.5;
  cost = 0;
  mapSize = 7.5;
  class DestructionEffects: DestructionEffects
  {
   class Ruin1
   {
    simulation = "ruin";
    type = "\smd_sahrani_artif_obj\buildings\ruins\smd_kasarna_Ruins";
    position = "";
    intensity = 1;
    interval = 1;
    lifeTime = 1;
   };
  };
 };
 class Land_smd_kasarna_brana: Land_smd_kasarna
 {
  model = "\smd_sahrani_artif_obj\buildings\smd_kasarna_brana.p3d";
  class DestructionEffects: DestructionEffects
  {
   class Ruin1
   {
    simulation = "ruin";
    type = "\smd_sahrani_artif_obj\buildings\ruins\smd_kasarna_brana_Ruins";
    position = "";
    intensity = 1;
    interval = 1;
    lifeTime = 1;
   };
  };
 };
 class Land_smd_kasarna_prujezd: Land_smd_kasarna
 {
  model = "\smd_sahrani_artif_obj\buildings\smd_kasarna_prujezd.p3d";
  class DestructionEffects: DestructionEffects
  {
   class Ruin1
   {
    simulation = "ruin";
    type = "\smd_sahrani_artif_obj\buildings\ruins\smd_kasarna_prujezd_Ruins";
    position = "";
    intensity = 1;
    interval = 1;
    lifeTime = 1;
   };
  };
 };
 class Land_smd_kasarna_rohova: Land_smd_kasarna
 {
  model = "\smd_sahrani_artif_obj\buildings\smd_kasarna_rohova.p3d";
  class DestructionEffects: DestructionEffects
  {
   class Ruin1
   {
    simulation = "ruin";
    type = "\smd_sahrani_artif_obj\buildings\ruins\smd_kasarna_rohova_Ruins";
    position = "";
    intensity = 1;
    interval = 1;
    lifeTime = 1;
   };
  };
 };
 class Land_smd_kostel_mexico: House
 {
  armor = 500;
  model = "\smd_sahrani_artif_obj\buildings\smd_kostel_mexico.p3d";
  ladders[] = {
   { "start","end" },
   { "start1","end1" }};
  destrType = "destructBuilding";
  nameSound = "building";
  accuracy = 0.5;
  cost = 0;
  mapSize = 7.5;
  class DestructionEffects: DestructionEffects
  {
   class Ruin1
   {
    simulation = "ruin";
    type = "\smd_sahrani_artif_obj\buildings\ruins\smd_kostel_mexico_Ruins";
    position = "";
    intensity = 1;
    interval = 1;
    lifeTime = 1;
   };
  };
 };
 class Land_smd_kostel_trosky: House
 {
  armor = 500;
  model = "\smd_sahrani_artif_obj\buildings\smd_kostel_trosky.p3d";
  destrType = "destructBuilding";
  nameSound = "building";
  accuracy = 0.5;
  cost = 0;
  mapSize = 7.5;
  class DestructionEffects: DestructionEffects
  {
   class Ruin1
   {
    simulation = "ruin";
    type = "\smd_sahrani_artif_obj\buildings\ruins\smd_kostel_trosky_Ruins";
    position = "";
    intensity = 1;
    interval = 1;
    lifeTime = 1;
   };
  };
 };
 class Land_smd_kostel2: House
 {
  armor = 500;
  model = "\smd_sahrani_artif_obj\buildings\smd_kostel2.p3d";
  destrType = "destructBuilding";
  nameSound = "building";
  accuracy = 0.5;
  cost = 0;
  mapSize = 7.5;
  class DestructionEffects: DestructionEffects
  {
   class Ruin1
   {
    simulation = "ruin";
    type = "\smd_sahrani_artif_obj\buildings\ruins\smd_kostel2_Ruins";
    position = "";
    intensity = 1;
    interval = 1;
    lifeTime = 1;
   };
  };
 };
 class Land_smd_kostelik: House
 {
  armor = 500;
  model = "\smd_sahrani_artif_obj\buildings\smd_kostelik.p3d";
  destrType = "destructBuilding";
  nameSound = "building";
  accuracy = 0.5;
  cost = 0;
  mapSize = 7.5;
  class DestructionEffects: DestructionEffects
  {
   class Ruin1
   {
    simulation = "ruin";
    type = "\smd_sahrani_artif_obj\buildings\ruins\smd_kostelik_Ruins";
    position = "";
    intensity = 1;
    interval = 1;
    lifeTime = 1;
   };
  };
 };
 class Land_smd_letistni_hala: House
 {
  armor = 2000;
  model = "\smd_sahrani_artif_obj\buildings\smd_letistni_hala.p3d";
  ladders[] = {
   { "start1","end1" },
   { "start2","end2" }};
  destrType = "destructBuilding";
  nameSound = "building";
  accuracy = 0.5;
  cost = 0;
  mapSize = 7.5;
  class DestructionEffects: DestructionEffects
  {
   class Ruin1
   {
    simulation = "ruin";
    type = "\smd_sahrani_artif_obj\buildings\ruins\smd_letistni_hala_Ruins";
    position = "";
    intensity = 1;
    interval = 1;
    lifeTime = 1;
   };
  };
 };
 class Land_smd_majak_v_celku: House
 {
  armor = 2000;
  model = "\smd_sahrani_artif_obj\buildings\smd_majak_v_celku.p3d";
  ladders[] = {
   { "start","end" }};
  destrType = "destructBuilding";
  nameSound = "building";
  accuracy = 0.5;
  cost = 0;
  mapSize = 7.5;
  class Reflectors
  {
   class MainLight
   {
    color[] = {0.9,0.8,0.8,1.0};
    ambient[] = {0.1,0.1,0.1,1.0};
    position = "Source_MainLight";
    direction = "Direction_MainLight";
    hitpoint = "MainLight";
    selection = "LightFlare";
    size = 5;
    brightness = 3;
    period[] = {2.4,4.6};
   };
  };
  class DestructionEffects: DestructionEffects
  {
   class Ruin1
   {
    simulation = "ruin";
    type = "\smd_sahrani_artif_obj\buildings\ruins\smd_majak_v_celku_Ruins";
    position = "";
    intensity = 1;
    interval = 1;
    lifeTime = 1;
   };
  };
 };
 class Land_smd_molo_beton: House
 {
  destrType = "DestructNo";
  model = "smd_sahrani_artif_obj\buildings\smd_molo_beton.p3d";
 };
 class Land_smd_molo_krychle: House
 {
  destrType = "DestructNo";
  model = "smd_sahrani_artif_obj\buildings\smd_molo_krychle.p3d";
 };
 class Land_smd_molo_krychle2: House
 {
  destrType = "DestructNo";
  model = "smd_sahrani_artif_obj\buildings\smd_molo_krychle2.p3d";
 };
 class Land_smd_nabrezi: House
 {
  destrType = "DestructNo";
  model = "smd_sahrani_artif_obj\buildings\smd_nabrezi.p3d";
 };
 class Land_smd_nabrezi_najezd: House
 {
  destrType = "DestructNo";
  model = "smd_sahrani_artif_obj\buildings\smd_nabrezi_najezd.p3d";
 };
 class Land_smd_nabrezi_najezd_end: House
 {
  destrType = "DestructNo";
  model = "smd_sahrani_artif_obj\buildings\smd_nabrezi_najezd_end.p3d";
 };
 class Land_smd_orlhot: House
 {
  armor = 600;
  model = "\smd_sahrani_artif_obj\buildings\smd_orlhot.p3d";
  destrType = "destructBuilding";
  nameSound = "building";
  accuracy = 0.5;
  cost = 0;
  mapSize = 7.5;
  class DestructionEffects: DestructionEffects
  {
   class Ruin1
   {
    simulation = "ruin";
    type = "\smd_sahrani_artif_obj\buildings\ruins\smd_orlhot_Ruins";
    position = "";
    intensity = 1;
    interval = 1;
    lifeTime = 1;
   };
  };
 };
 class Land_smd_podesta_1_cornl: House
 {
  destrType = "DestructNo";
  model = "smd_sahrani_artif_obj\buildings\smd_podesta_1_cornl.p3d";
  class DestructionEffects{};
 };
 class Land_smd_podesta_1_cornp: Land_smd_podesta_1_cornl
 {
  model = "smd_sahrani_artif_obj\buildings\smd_podesta_1_cornp.p3d";
 };
 class Land_smd_podesta_1_cube: Land_smd_podesta_1_cornl
 {
  model = "smd_sahrani_artif_obj\buildings\smd_podesta_1_cube.p3d";
 };
 class Land_smd_podesta_1_cube_long: Land_smd_podesta_1_cornl
 {
  model = "smd_sahrani_artif_obj\buildings\smd_podesta_1_cube_long.p3d";
 };
 class Land_smd_podesta_1_mid: Land_smd_podesta_1_cornl
 {
  model = "smd_sahrani_artif_obj\buildings\smd_podesta_1_mid.p3d";
 };
 class Land_smd_podesta_1_mid_cornl: Land_smd_podesta_1_cornl
 {
  model = "smd_sahrani_artif_obj\buildings\smd_podesta_1_mid_cornl.p3d";
 };
 class Land_smd_podesta_1_mid_cornp: Land_smd_podesta_1_cornl
 {
  model = "smd_sahrani_artif_obj\buildings\smd_podesta_1_mid_cornp.p3d";
 };
 class Land_smd_podesta_1_stairs: Land_smd_podesta_1_cornl
 {
  model = "smd_sahrani_artif_obj\buildings\smd_podesta_1_stairs.p3d";
 };
 class Land_smd_podesta_1_stairs2: Land_smd_podesta_1_cornl
 {
  model = "smd_sahrani_artif_obj\buildings\smd_podesta_1_stairs2.p3d";
 };
 class Land_smd_podesta_1_stairs3: Land_smd_podesta_1_cornl
 {
  model = "smd_sahrani_artif_obj\buildings\smd_podesta_1_stairs3.p3d";
 };
 class Land_smd_podesta_1_stairs4: Land_smd_podesta_1_cornl
 {
  model = "smd_sahrani_artif_obj\buildings\smd_podesta_1_stairs4.p3d";
 };
 class Land_smd_podesta_5: Land_smd_podesta_1_cornl
 {
  model = "smd_sahrani_artif_obj\buildings\smd_podesta_5.p3d";
 };
 class Land_smd_podesta_10: Land_smd_podesta_1_cornl
 {
  model = "smd_sahrani_artif_obj\buildings\smd_podesta_10.p3d";
 };
 class Land_smd_podesta_s5: Land_smd_podesta_1_cornl
 {
  model = "smd_sahrani_artif_obj\buildings\smd_podesta_s5.p3d";
 };
 class Land_smd_podesta_s10: Land_smd_podesta_1_cornl
 {
  model = "smd_sahrani_artif_obj\buildings\smd_podesta_s10.p3d";
 };
 class Land_smd_sara_stodola2: House
 {
  armor = 500;
  model = "\smd_sahrani_artif_obj\buildings\smd_sara_stodola2.p3d";
  destrType = "destructBuilding";
  nameSound = "building";
  accuracy = 0.5;
  cost = 0;
  mapSize = 7.5;
  class DestructionEffects: DestructionEffects
  {
   class Ruin1
   {
    simulation = "ruin";
    type = "\smd_sahrani_artif_obj\buildings\ruins\smd_sara_stodola2_Ruins";
    position = "";
    intensity = 1;
    interval = 1;
    lifeTime = 1;
   };
  };
 };
 class Land_smd_sara_zluty_statek_in: House
 {
  armor = 800;
  model = "\smd_sahrani_artif_obj\buildings\smd_sara_zluty_statek_in.p3d";
  destrType = "destructBuilding";
  nameSound = "building";
  accuracy = 0.5;
  cost = 0;
  mapSize = 7.5;
  class DestructionEffects: DestructionEffects
  {
   class Ruin1
   {
    simulation = "ruin";
    type = "\smd_sahrani_artif_obj\buildings\ruins\smd_sara_zluty_statek_in_Ruins";
    position = "";
    intensity = 1;
    interval = 1;
    lifeTime = 1;
   };
  };
 };
 class Land_smd_shop1: House
 {
  armor = 5;
  model = "\smd_sahrani_artif_obj\buildings\smd_shop1.p3d";
  destrType = "destructNo";
  class DestructionEffects{};
 };
 class Land_smd_shop1_double: Land_smd_shop1
 {
  model = "\smd_sahrani_artif_obj\buildings\smd_shop1_double.p3d";
 };
 class Land_smd_shop2: Land_smd_shop1
 {
  model = "\smd_sahrani_artif_obj\buildings\smd_shop2.p3d";
 };
 class Land_smd_shop2_double: Land_smd_shop1
 {
  model = "\smd_sahrani_artif_obj\buildings\smd_shop2_double.p3d";
 };
 class Land_smd_shop2_short: Land_smd_shop1
 {
  model = "\smd_sahrani_artif_obj\buildings\smd_shop2_short.p3d";
 };
 class Land_smd_shop3: Land_smd_shop1
 {
  model = "\smd_sahrani_artif_obj\buildings\smd_shop3.p3d";
 };
 class Land_smd_shop3_short: Land_smd_shop1
 {
  model = "\smd_sahrani_artif_obj\buildings\smd_shop3_short.p3d";
 };
 class Land_smd_shop4: Land_smd_shop1
 {
  model = "\smd_sahrani_artif_obj\buildings\smd_shop4.p3d";
 };
 class Land_smd_shop5: Land_smd_shop1
 {
  model = "\smd_sahrani_artif_obj\buildings\smd_shop5.p3d";
 };
 class Land_smd_shop5_double: Land_smd_shop1
 {
  model = "\smd_sahrani_artif_obj\buildings\smd_shop5_double.p3d";
 };
 class Land_smd_shop5_short: Land_smd_shop1
 {
  model = "\smd_sahrani_artif_obj\buildings\smd_shop5_short.p3d";
 };
 class Land_smd_strazni_vez: House
 {
  armor = 800;
  model = "\smd_sahrani_artif_obj\buildings\smd_strazni_vez.p3d";
  destrType = "destructBuilding";
  nameSound = "building";
  accuracy = 0.5;
  cost = 0;
  mapSize = 7.5;
  class DestructionEffects: DestructionEffects
  {
   class Ruin1
   {
    simulation = "ruin";
    type = "\smd_sahrani_artif_obj\buildings\ruins\smd_strazni_vez_Ruins";
    position = "";
    intensity = 1;
    interval = 1;
    lifeTime = 1;
   };
  };
 };
 class Land_smd_watertower1: House
 {
  armor = 250;
  model = "\smd_sahrani_artif_obj\buildings\smd_watertower1.p3d";
  destrType = "destructBuilding";
  nameSound = "building";
  accuracy = 0.5;
  cost = 0;
  mapSize = 7.5;
  class DestructionEffects: DestructionEffects
  {
   class Ruin1
   {
    simulation = "ruin";
    type = "\smd_sahrani_artif_obj\buildings\ruins\smd_watertower1_Ruins";
    position = "";
    intensity = 1;
    interval = 1;
    lifeTime = 1;
   };
  };
 };
 class Land_smd_zastavka_jih: House
 {
  armor = 10;
  model = "\smd_sahrani_artif_obj\buildings\smd_zastavka_jih.p3d";
  destrType = "destructBuilding";
  nameSound = "building";
  accuracy = 0.5;
  cost = 0;
  mapSize = 0.5;
 };
 class Land_smd_zastavka_sever: Land_smd_zastavka_jih
 {
  model = "\smd_sahrani_artif_obj\buildings\smd_zastavka_sever.p3d";
 };
 class Land_smd_Dum_istan2_01_open: House
 {
  animated = "true";
  armor = 150;
  model = "\smd_sahrani_artif_obj\buildings\smd_Dum_istan2_01_open.p3d";
  class DestructionEffects: DestructionEffects
  {
   class Ruin1
   {
    simulation = "ruin";
    type = "\smd_sahrani_artif_obj\buildings\ruins\smd_Dum_istan2_01_ruins.p3d";
    position = "";
    intensity = 1;
    interval = 1;
    lifeTime = 1;
   };
  };
  class AnimationSources
  {
   class Door1
   {
    source = "user";
    animPeriod = 1.5;
    initPhase = 0;
   };
   class Door2: Door1{};
   class Door3: Door1{};
   class Door4: Door1{};
   class Door5: Door1{};
   class Door6: Door1{};
   class Door7: Door1{};
   class Door8: Door1{};
   class Door9: Door1{};
   class Door10: Door1{};
   class Door11: Door1{};
   class Door12: Door1{};
   class Door13: Door1{};
   class Door14: Door1{};
   class Door15: Door1{};
   class Door16: Door1{};
   class Door17: Door1{};
   class Door18: Door1{};
   class Door19: Door1{};
   class Door20: Door1{};
   class Door21: Door1{};
   class Door22: Door1{};
   class Door23: Door1{};
   class Door24: Door1{};
   class Door25: Door1{};
   class Door26: Door1{};
   class Door27: Door1{};
   class Door28: Door1{};
  };
  class UserActions
  {
   class OpenDoors1
   {
    displayName = "Open Door";
    position = "Door1_Button";
    radius = 3;
    onlyForPlayer = 0;
    condition = "this animationPhase ""Door1"" < 0.5";
    statement = "this animate [""Door1"", 1]";
   };
   class CloseDoors1: OpenDoors1
   {
    displayName = "Close Door";
    condition = "this animationPhase ""Door1"" >= 0.5";
    statement = "this animate [""Door1"", 0]";
   };
   class OpenDoors2
   {
    displayName = "Open Door";
    position = "Door2_Button";
    radius = 3;
    onlyForPlayer = 0;
    condition = "this animationPhase ""Door2"" < 0.5";
    statement = "this animate [""Door2"", 1]";
   };
   class CloseDoors2: OpenDoors2
   {
    displayName = "Close Door";
    condition = "this animationPhase ""Door2"" >= 0.5";
    statement = "this animate [""Door2"", 0]";
   };
   class OpenDoors3
   {
    displayName = "Open Door";
    position = "Door3_Button";
    radius = 3;
    onlyForPlayer = 0;
    condition = "this animationPhase ""Door3"" < 0.5";
    statement = "this animate [""Door3"", 1]";
   };
   class CloseDoors3: OpenDoors3
   {
    displayName = "Close Door";
    condition = "this animationPhase ""Door3"" >= 0.5";
    statement = "this animate [""Door3"", 0]";
   };
   class OpenDoors4
   {
    displayName = "Open Door";
    position = "Door4_Button";
    radius = 3;
    onlyForPlayer = 0;
    condition = "this animationPhase ""Door4"" < 0.5";
    statement = "this animate [""Door4"", 1]";
   };
   class CloseDoors4: OpenDoors4
   {
    displayName = "Close Door";
    condition = "this animationPhase ""Door4"" >= 0.5";
    statement = "this animate [""Door4"", 0]";
   };
   class OpenDoors5
   {
    displayName = "Open Door";
    position = "Door5_Button";
    radius = 3;
    onlyForPlayer = 0;
    condition = "this animationPhase ""Door5"" < 0.5";
    statement = "this animate [""Door5"", 1]";
   };
   class CloseDoors5: OpenDoors5
   {
    displayName = "Close Door";
    condition = "this animationPhase ""Door5"" >= 0.5";
    statement = "this animate [""Door5"", 0]";
   };
   class OpenDoors6
   {
    displayName = "Open Door";
    position = "Door6_Button";
    radius = 3;
    onlyForPlayer = 0;
    condition = "this animationPhase ""Door6"" < 0.5";
    statement = "this animate [""Door6"", 1]";
   };
   class CloseDoors6: OpenDoors6
   {
    displayName = "Close Door";
    condition = "this animationPhase ""Door6"" >= 0.5";
    statement = "this animate [""Door6"", 0]";
   };
   class OpenDoors7
   {
    displayName = "Open Door";
    position = "Door7_Button";
    radius = 3;
    onlyForPlayer = 0;
    condition = "this animationPhase ""Door7"" < 0.5";
    statement = "this animate [""Door7"", 1]";
   };
   class CloseDoors7: OpenDoors7
   {
    displayName = "Close Door";
    condition = "this animationPhase ""Door7"" >= 0.5";
    statement = "this animate [""Door7"", 0]";
   };
   class OpenDoors8
   {
    displayName = "Open Door";
    position = "Door8_Button";
    radius = 3;
    onlyForPlayer = 0;
    condition = "this animationPhase ""Door8"" < 0.5";
    statement = "this animate [""Door8"", 1]";
   };
   class CloseDoors8: OpenDoors8
   {
    displayName = "Close Door";
    condition = "this animationPhase ""Door8"" >= 0.5";
    statement = "this animate [""Door8"", 0]";
   };
   class OpenDoors9
   {
    displayName = "Open Door";
    position = "Door9_Button";
    radius = 3;
    onlyForPlayer = 0;
    condition = "this animationPhase ""Door9"" < 0.5";
    statement = "this animate [""Door9"", 1]";
   };
   class CloseDoors9: OpenDoors9
   {
    displayName = "Close Door";
    condition = "this animationPhase ""Door9"" >= 0.5";
    statement = "this animate [""Door9"", 0]";
   };
   class OpenDoors10
   {
    displayName = "Open Door";
    position = "Door10_Button";
    radius = 3;
    onlyForPlayer = 0;
    condition = "this animationPhase ""Door10"" < 0.5";
    statement = "this animate [""Door10"", 1]";
   };
   class CloseDoors10: OpenDoors10
   {
    displayName = "Close Door";
    condition = "this animationPhase ""Door10"" >= 0.5";
    statement = "this animate [""Door10"", 0]";
   };
   class OpenDoors11
   {
    displayName = "Open Door";
    position = "Door11_Button";
    radius = 3;
    onlyForPlayer = 0;
    condition = "this animationPhase ""Door11"" < 0.5";
    statement = "this animate [""Door11"", 1]";
   };
   class CloseDoors11: OpenDoors11
   {
    displayName = "Close Door";
    condition = "this animationPhase ""Door11"" >= 0.5";
    statement = "this animate [""Door11"", 0]";
   };
   class OpenDoors12
   {
    displayName = "Open Door";
    position = "Door12_Button";
    radius = 3;
    onlyForPlayer = 0;
    condition = "this animationPhase ""Door12"" < 0.5";
    statement = "this animate [""Door12"", 1]";
   };
   class CloseDoors12: OpenDoors12
   {
    displayName = "Close Door";
    condition = "this animationPhase ""Door12"" >= 0.5";
    statement = "this animate [""Door12"", 0]";
   };
   class OpenDoors13
   {
    displayName = "Open Door";
    position = "Door13_Button";
    radius = 3;
    onlyForPlayer = 0;
    condition = "this animationPhase ""Door13"" < 0.5";
    statement = "this animate [""Door13"", 1]";
   };
   class CloseDoors13: OpenDoors13
   {
    displayName = "Close Door";
    condition = "this animationPhase ""Door13"" >= 0.5";
    statement = "this animate [""Door13"", 0]";
   };
   class OpenDoors14
   {
    displayName = "Open Door";
    position = "Door14_Button";
    radius = 3;
    onlyForPlayer = 0;
    condition = "this animationPhase ""Door14"" < 0.5";
    statement = "this animate [""Door14"", 1]";
   };
   class CloseDoors14: OpenDoors14
   {
    displayName = "Close Door";
    condition = "this animationPhase ""Door14"" >= 0.5";
    statement = "this animate [""Door14"", 0]";
   };
   class OpenDoors15
   {
    displayName = "Open Door";
    position = "Door15_Button";
    radius = 3;
    onlyForPlayer = 0;
    condition = "this animationPhase ""Door15"" < 0.5";
    statement = "this animate [""Door15"", 1]";
   };
   class CloseDoors15: OpenDoors15
   {
    displayName = "Close Door";
    condition = "this animationPhase ""Door15"" >= 0.5";
    statement = "this animate [""Door15"", 0]";
   };
   class OpenDoors16
   {
    displayName = "Open Door";
    position = "Door16_Button";
    radius = 3;
    onlyForPlayer = 0;
    condition = "this animationPhase ""Door16"" < 0.5";
    statement = "this animate [""Door16"", 1]";
   };
   class CloseDoors16: OpenDoors16
   {
    displayName = "Close Door";
    condition = "this animationPhase ""Door16"" >= 0.5";
    statement = "this animate [""Door16"", 0]";
   };
   class OpenDoors17
   {
    displayName = "Open Door";
    position = "Door17_Button";
    radius = 3;
    onlyForPlayer = 0;
    condition = "this animationPhase ""Door17"" < 0.5";
    statement = "this animate [""Door17"", 1]";
   };
   class CloseDoors17: OpenDoors17
   {
    displayName = "Close Door";
    condition = "this animationPhase ""Door17"" >= 0.5";
    statement = "this animate [""Door17"", 0]";
   };
   class OpenDoors18
   {
    displayName = "Open Door";
    position = "Door18_Button";
    radius = 3;
    onlyForPlayer = 0;
    condition = "this animationPhase ""Door18"" < 0.5";
    statement = "this animate [""Door18"", 1]";
   };
   class CloseDoors18: OpenDoors18
   {
    displayName = "Close Door";
    condition = "this animationPhase ""Door18"" >= 0.5";
    statement = "this animate [""Door18"", 0]";
   };
   class OpenDoors19
   {
    displayName = "Open Door";
    position = "Door19_Button";
    radius = 3;
    onlyForPlayer = 0;
    condition = "this animationPhase ""Door19"" < 0.5";
    statement = "this animate [""Door19"", 1]";
   };
   class CloseDoors19: OpenDoors19
   {
    displayName = "Close Door";
    condition = "this animationPhase ""Door19"" >= 0.5";
    statement = "this animate [""Door19"", 0]";
   };
   class OpenDoors20
   {
    displayName = "Open Door";
    position = "Door20_Button";
    radius = 3;
    onlyForPlayer = 0;
    condition = "this animationPhase ""Door20"" < 0.5";
    statement = "this animate [""Door20"", 1]";
   };
   class CloseDoors20: OpenDoors20
   {
    displayName = "Close Door";
    condition = "this animationPhase ""Door20"" >= 0.5";
    statement = "this animate [""Door20"", 0]";
   };
   class OpenDoors21
   {
    displayName = "Open Door";
    position = "Door21_Button";
    radius = 3;
    onlyForPlayer = 0;
    condition = "this animationPhase ""Door21"" < 0.5";
    statement = "this animate [""Door21"", 1]";
   };
   class CloseDoors21: OpenDoors21
   {
    displayName = "Close Door";
    condition = "this animationPhase ""Door21"" >= 0.5";
    statement = "this animate [""Door21"", 0]";
   };
   class OpenDoors22
   {
    displayName = "Open Door";
    position = "Door22_Button";
    radius = 3;
    onlyForPlayer = 0;
    condition = "this animationPhase ""Door22"" < 0.5";
    statement = "this animate [""Door22"", 1]";
   };
   class CloseDoors22: OpenDoors22
   {
    displayName = "Close Door";
    condition = "this animationPhase ""Door22"" >= 0.5";
    statement = "this animate [""Door22"", 0]";
   };
   class OpenDoors23
   {
    displayName = "Open Door";
    position = "Door23_Button";
    radius = 3;
    onlyForPlayer = 0;
    condition = "this animationPhase ""Door23"" < 0.5";
    statement = "this animate [""Door23"", 1]";
   };
   class CloseDoors23: OpenDoors23
   {
    displayName = "Close Door";
    condition = "this animationPhase ""Door23"" >= 0.5";
    statement = "this animate [""Door23"", 0]";
   };
   class OpenDoors24
   {
    displayName = "Open Door";
    position = "Door24_Button";
    radius = 3;
    onlyForPlayer = 0;
    condition = "this animationPhase ""Door24"" < 0.5";
    statement = "this animate [""Door24"", 1]";
   };
   class CloseDoors24: OpenDoors24
   {
    displayName = "Close Door";
    condition = "this animationPhase ""Door24"" >= 0.5";
    statement = "this animate [""Door24"", 0]";
   };
   class OpenDoors25
   {
    displayName = "Open Door";
    position = "Door25_Button";
    radius = 3;
    onlyForPlayer = 0;
    condition = "this animationPhase ""Door25"" < 0.5";
    statement = "this animate [""Door25"", 1]";
   };
   class CloseDoors25: OpenDoors25
   {
    displayName = "Close Door";
    condition = "this animationPhase ""Door25"" >= 0.5";
    statement = "this animate [""Door25"", 0]";
   };
   class OpenDoors26
   {
    displayName = "Open Door";
    position = "Door26_Button";
    radius = 3;
    onlyForPlayer = 0;
    condition = "this animationPhase ""Door26"" < 0.5";
    statement = "this animate [""Door26"", 1]";
   };
   class CloseDoors26: OpenDoors26
   {
    displayName = "Close Door";
    condition = "this animationPhase ""Door26"" >= 0.5";
    statement = "this animate [""Door26"", 0]";
   };
   class OpenDoors27
   {
    displayName = "Open Door";
    position = "Door27_Button";
    radius = 3;
    onlyForPlayer = 0;
    condition = "this animationPhase ""Door27"" < 0.5";
    statement = "this animate [""Door27"", 1]";
   };
   class CloseDoors27: OpenDoors27
   {
    displayName = "Close Door";
    condition = "this animationPhase ""Door27"" >= 0.5";
    statement = "this animate [""Door27"", 0]";
   };
   class OpenDoors28
   {
    displayName = "Open Door";
    position = "Door28_Button";
    radius = 3;
    onlyForPlayer = 0;
    condition = "this animationPhase ""Door28"" < 0.5";
    statement = "this animate [""Door28"", 1]";
   };
   class CloseDoors28: OpenDoors28
   {
    displayName = "Close Door";
    condition = "this animationPhase ""Door28"" >= 0.5";
    statement = "this animate [""Door28"", 0]";
   };
  };
 };
 class Land_smd_posed: House
 {
  armor = 150;
  ladders[] = {
   { "start","end" }};
  model = "\smd_sahrani_artif_obj\buildings\smd_posed.p3d";
  destrType = "destructBuilding";
  nameSound = "building";
  accuracy = 0.5;
  cost = 0;
  mapSize = 1.0;
  class DestructionEffects: DestructionEffects
  {
   class Ruin1
   {
    simulation = "ruin";
    type = "\smd_sahrani_artif_obj\buildings\ruins\smd_posed_Ruins";
    position = "";
    intensity = 1;
    interval = 1;
    lifeTime = 1;
   };
  };
 };
 class Land_smd_dum_olez_istan2_open: House
 {
  model = "\smd_sahrani_artif_obj\buildings\smd_dum_olez_istan2_open.p3d";
  animated = "true";
  armor = 150;
  nameSound = "building";
  accuracy = 0.5;
  cost = 0;
  mapSize = 7.5;
  destrType = "destructBuilding";
  class DestructionEffects: DestructionEffects
  {
   class Ruin1
   {
    simulation = "ruin";
    type = "\ca\buildings\ruins\dum_olez_istan2_ruins";
    position = "";
    intensity = 1;
    interval = 1;
    lifeTime = 1;
   };
  };
  class AnimationSources
  {
   class Door1
   {
    source = "user";
    animPeriod = 1.5;
    initPhase = 0;
   };
   class shutter1
   {
    source = "user";
    animPeriod = 1;
    initPhase = 0;
   };
   class shutter2
   {
    source = "user";
    animPeriod = 1;
    initPhase = 0;
   };
   class shutter3
   {
    source = "user";
    animPeriod = 1;
    initPhase = 0;
   };
   class shutter4
   {
    source = "user";
    animPeriod = 1;
    initPhase = 0;
   };
   class shutter5
   {
    source = "user";
    animPeriod = 1;
    initPhase = 0;
   };
   class shutter6
   {
    source = "user";
    animPeriod = 1;
    initPhase = 0;
   };
   class shutter7
   {
    source = "user";
    animPeriod = 1;
    initPhase = 0;
   };
   class shutter8
   {
    source = "user";
    animPeriod = 1;
    initPhase = 0;
   };
  };
  class UserActions
  {
   class OpenDoor
   {
    displayName = "Open Door";
    position = "Door1_Button";
    radius = 3;
    onlyForPlayer = 0;
    condition = "this animationPhase ""Door1"" < 0.5";
    statement = "this animate [""Door1"", 1]";
   };
   class CloseDoor: OpenDoor
   {
    displayName = "Close Door";
    condition = "this animationPhase ""Door1"" >= 0.5";
    statement = "this animate [""Door1"", 0]";
   };
   class OpenShutter1
   {
    displayName = "Open Window";
    position = "shutter1_Button";
    radius = 2;
    onlyForPlayer = 0;
    condition = "this animationPhase ""shutter1"" < 0.5";
    statement = "this animate [""shutter1"", 1]; this animate [""shutter2"", 1]";
   };
   class CloseShutter1: OpenShutter1
   {
    displayName = "Close Window";
    condition = "this animationPhase ""shutter1"" >= 0.5";
    statement = "this animate [""shutter1"", 0]; this animate [""shutter2"", 0]";
   };
   class OpenShutter2
   {
    displayName = "Open Window";
    position = "shutter3_Button";
    radius = 2;
    onlyForPlayer = 0;
    condition = "this animationPhase ""shutter3"" < 0.5";
    statement = "this animate [""shutter3"", 1]; this animate [""shutter4"", 1]";
   };
   class CloseShutter2: OpenShutter2
   {
    displayName = "Close Window";
    condition = "this animationPhase ""shutter3"" >= 0.5";
    statement = "this animate [""shutter3"", 0]; this animate [""shutter4"", 0]";
   };
   class OpenShutter3
   {
    displayName = "Open Window";
    position = "shutter5_Button";
    radius = 2;
    onlyForPlayer = 0;
    condition = "this animationPhase ""shutter5"" < 0.5";
    statement = "this animate [""shutter5"", 1]; this animate [""shutter6"", 1]";
   };
   class CloseShutter3: OpenShutter3
   {
    displayName = "Close Window";
    condition = "this animationPhase ""shutter5"" >= 0.5";
    statement = "this animate [""shutter5"", 0]; this animate [""shutter6"", 0]";
   };
   class OpenShutter4
   {
    displayName = "Open Window";
    position = "shutter7_Button";
    radius = 2;
    onlyForPlayer = 0;
    condition = "this animationPhase ""shutter7"" < 0.5";
    statement = "this animate [""shutter7"", 1]; this animate [""shutter8"", 1]";
   };
   class CloseShutter4: OpenShutter4
   {
    displayName = "Close Window";
    condition = "this animationPhase ""shutter7"" >= 0.5";
    statement = "this animate [""shutter7"", 0]; this animate [""shutter8"", 0]";
   };
  };
 };
 class Land_smd_dum_olez_istan2_open2: Land_smd_dum_olez_istan2_open
 {
  model = "\smd_sahrani_artif_obj\buildings\smd_dum_olez_istan2_open2.p3d";
 };
 class Land_smd_dum_olez_istan1_open: House
 {
  model = "\smd_sahrani_artif_obj\buildings\smd_dum_olez_istan1_open.p3d";
  animated = "true";
  armor = 150;
  nameSound = "building";
  accuracy = 0.5;
  cost = 0;
  mapSize = 7.5;
  destrType = "destructBuilding";
  class DestructionEffects: DestructionEffects
  {
   class Ruin1
   {
    simulation = "ruin";
    type = "\ca\buildings\ruins\dum_olez_istan1_ruins";
    position = "";
    intensity = 1;
    interval = 1;
    lifeTime = 1;
   };
  };
  class AnimationSources
  {
   class Door1
   {
    source = "user";
    animPeriod = 1.5;
    initPhase = 0;
   };
   class Door2
   {
    source = "user";
    animPeriod = 1.5;
    initPhase = 0;
   };
   class Door3
   {
    source = "user";
    animPeriod = 1.5;
    initPhase = 0;
   };
   class shutter1
   {
    source = "user";
    animPeriod = 1;
    initPhase = 0;
   };
   class shutter2
   {
    source = "user";
    animPeriod = 1;
    initPhase = 0;
   };
   class shutter3
   {
    source = "user";
    animPeriod = 1;
    initPhase = 0;
   };
   class shutter4
   {
    source = "user";
    animPeriod = 1;
    initPhase = 0;
   };
   class shutter5
   {
    source = "user";
    animPeriod = 1;
    initPhase = 0;
   };
   class shutter6
   {
    source = "user";
    animPeriod = 1;
    initPhase = 0;
   };
   class shutter7
   {
    source = "user";
    animPeriod = 1;
    initPhase = 0;
   };
   class shutter8
   {
    source = "user";
    animPeriod = 1;
    initPhase = 0;
   };
   class shutter9
   {
    source = "user";
    animPeriod = 1;
    initPhase = 0;
   };
   class shutter10
   {
    source = "user";
    animPeriod = 1;
    initPhase = 0;
   };
   class shutter11
   {
    source = "user";
    animPeriod = 1;
    initPhase = 0;
   };
   class shutter12
   {
    source = "user";
    animPeriod = 1;
    initPhase = 0;
   };
  };
  class UserActions
  {
   class OpenDoor
   {
    displayName = "Open Door";
    position = "Door1_Button";
    radius = 3;
    onlyForPlayer = 0;
    condition = "this animationPhase ""Door1"" < 0.5";
    statement = "this animate [""Door1"", 1]";
   };
   class CloseDoor: OpenDoor
   {
    displayName = "Close Door";
    condition = "this animationPhase ""Door1"" >= 0.5";
    statement = "this animate [""Door1"", 0]";
   };
   class OpenDoor2
   {
    displayName = "Open Door";
    position = "Door2_Button";
    radius = 3;
    onlyForPlayer = 0;
    condition = "this animationPhase ""Door2"" < 0.5";
    statement = "this animate [""Door2"", 1]";
   };
   class CloseDoor2: OpenDoor2
   {
    displayName = "Close Door";
    condition = "this animationPhase ""Door2"" >= 0.5";
    statement = "this animate [""Door2"", 0]";
   };
   class OpenDoor3
   {
    displayName = "Open Door";
    position = "Door3_Button";
    radius = 3;
    onlyForPlayer = 0;
    condition = "this animationPhase ""Door3"" < 0.5";
    statement = "this animate [""Door3"", 1]";
   };
   class CloseDoor3: OpenDoor3
   {
    displayName = "Close Door";
    condition = "this animationPhase ""Door3"" >= 0.5";
    statement = "this animate [""Door3"", 0]";
   };
   class OpenShutter1
   {
    displayName = "Open Window";
    position = "shutter1_Button";
    radius = 2;
    onlyForPlayer = 0;
    condition = "this animationPhase ""shutter1"" < 0.5";
    statement = "this animate [""shutter1"", 1]; this animate [""shutter2"", 1]";
   };
   class CloseShutter1: OpenShutter1
   {
    displayName = "Close Window";
    condition = "this animationPhase ""shutter1"" >= 0.5";
    statement = "this animate [""shutter1"", 0]; this animate [""shutter2"", 0]";
   };
   class OpenShutter2
   {
    displayName = "Open Window";
    position = "shutter3_Button";
    radius = 2;
    onlyForPlayer = 0;
    condition = "this animationPhase ""shutter3"" < 0.5";
    statement = "this animate [""shutter3"", 1]; this animate [""shutter4"", 1]";
   };
   class CloseShutter2: OpenShutter2
   {
    displayName = "Close Window";
    condition = "this animationPhase ""shutter3"" >= 0.5";
    statement = "this animate [""shutter3"", 0]; this animate [""shutter4"", 0]";
   };
   class OpenShutter3
   {
    displayName = "Open Window";
    position = "shutter5_Button";
    radius = 2;
    onlyForPlayer = 0;
    condition = "this animationPhase ""shutter5"" < 0.5";
    statement = "this animate [""shutter5"", 1]; this animate [""shutter6"", 1]";
   };
   class CloseShutter3: OpenShutter3
   {
    displayName = "Close Window";
    condition = "this animationPhase ""shutter5"" >= 0.5";
    statement = "this animate [""shutter5"", 0]; this animate [""shutter6"", 0]";
   };
   class OpenShutter4
   {
    displayName = "Open Window";
    position = "shutter7_Button";
    radius = 2;
    onlyForPlayer = 0;
    condition = "this animationPhase ""shutter7"" < 0.5";
    statement = "this animate [""shutter7"", 1]; this animate [""shutter8"", 1]";
   };
   class CloseShutter4: OpenShutter4
   {
    displayName = "Close Window";
    condition = "this animationPhase ""shutter7"" >= 0.5";
    statement = "this animate [""shutter7"", 0]; this animate [""shutter8"", 0]";
   };
   class OpenShutter5
   {
    displayName = "Open Window";
    position = "shutter9_Button";
    radius = 2;
    onlyForPlayer = 0;
    condition = "this animationPhase ""shutter9"" < 0.5";
    statement = "this animate [""shutter9"", 1]; this animate [""shutter10"", 1]";
   };
   class CloseShutter5: OpenShutter5
   {
    displayName = "Close Window";
    condition = "this animationPhase ""shutter9"" >= 0.5";
    statement = "this animate [""shutter9"", 0]; this animate [""shutter10"", 0]";
   };
   class OpenShutter6
   {
    displayName = "Open Window";
    position = "shutter11_Button";
    radius = 2;
    onlyForPlayer = 0;
    condition = "this animationPhase ""shutter11"" < 0.5";
    statement = "this animate [""shutter11"", 1]; this animate [""shutter12"", 1]";
   };
   class CloseShutter6: OpenShutter6
   {
    displayName = "Close Window";
    condition = "this animationPhase ""shutter11"" >= 0.5";
    statement = "this animate [""shutter11"", 0]; this animate [""shutter12"", 0]";
   };
  };
 };
 class Land_smd_dum_olez_istan1_open2: Land_smd_dum_olez_istan1_open
 {
  model = "\smd_sahrani_artif_obj\buildings\smd_dum_olez_istan1_open2.p3d";
 };
 class Land_smd_budova4_in: House
 {
  model = "\smd_sahrani_artif_obj\buildings\smd_budova4_in.p3d";
  animated = "true";
  armor = 150;
  nameSound = "building";
  accuracy = 0.5;
  cost = 0;
  mapSize = 7.5;
  destrType = "destructBuilding";
  class DestructionEffects: DestructionEffects
  {
   class Ruin1
   {
    simulation = "ruin";
    type = "\ca\buildings\ruins\budova4_in_ruins";
    position = "";
    intensity = 1;
    interval = 1;
    lifeTime = 1;
   };
  };
  class AnimationSources
  {
   class Door1
   {
    source = "user";
    animPeriod = 1.5;
    initPhase = 0;
   };
   class Door2
   {
    source = "user";
    animPeriod = 1.5;
    initPhase = 0;
   };
   class Door3
   {
    source = "user";
    animPeriod = 1;
    initPhase = 0;
   };
   class DoorE1
   {
    source = "user";
    animPeriod = 2;
    initPhase = 0;
   };
   class DoorE2
   {
    source = "user";
    animPeriod = 2;
    initPhase = 0;
   };
  };
  class UserActions
  {
   class OpenDoor
   {
    displayName = "Open Door";
    position = "Door1_Button";
    radius = 3;
    onlyForPlayer = 0;
    condition = "this animationPhase ""Door1"" < 0.5";
    statement = "this animate [""Door1"", 1]";
   };
   class CloseDoor: OpenDoor
   {
    displayName = "Close Door";
    condition = "this animationPhase ""Door1"" >= 0.5";
    statement = "this animate [""Door1"", 0]";
   };
   class OpenDoor2
   {
    displayName = "Open Door";
    position = "Door2_Button";
    radius = 3;
    onlyForPlayer = 0;
    condition = "this animationPhase ""Door2"" < 0.5";
    statement = "this animate [""Door2"", 1]";
   };
   class CloseDoor2: OpenDoor2
   {
    displayName = "Close Door";
    condition = "this animationPhase ""Door2"" >= 0.5";
    statement = "this animate [""Door2"", 0]";
   };
   class OpenDoor3
   {
    displayName = "Open Door";
    position = "Door3_Button";
    radius = 3;
    onlyForPlayer = 0;
    condition = "this animationPhase ""Door3"" < 0.5";
    statement = "this animate [""Door3"", 1]";
   };
   class CloseDoor3: OpenDoor3
   {
    displayName = "Close Door";
    condition = "this animationPhase ""Door3"" >= 0.5";
    statement = "this animate [""Door3"", 0]";
   };
   class OpenDoor4
   {
    displayName = "Open Doors";
    position = "DoorE1_Button";
    radius = 3;
    onlyForPlayer = 0;
    condition = "this animationPhase ""DoorE1"" < 0.5";
    statement = "this animate [""DoorE1"", 1]; this animate [""DoorE2"", 1]";
   };
   class CloseDoor4: OpenDoor4
   {
    displayName = "Close Doors";
    condition = "this animationPhase ""DoorE1"" >= 0.5";
    statement = "this animate [""DoorE1"", 0]; this animate [""DoorE2"", 0]";
   };
  };
 };
 class Land_smd_Panelak: House
 {
  ladders[] = {
   { "start","end" }};
  model = "smd_sahrani_artif_obj\buildings\smd_Panelak";
  class DestructionEffects: DestructionEffects
  {
   class Ruin1
   {
    simulation = "ruin";
    type = "\ca\buildings\ruins\panelak_ruins.p3d";
    position = "";
    intensity = 1;
    interval = 1;
    lifeTime = 1;
   };
  };
  armor = 1000;
 };
 class Land_smd_dum_mesto_in_open: House
 {
  model = "\smd_sahrani_artif_obj\buildings\smd_dum_mesto_in_open.p3d";
  animated = "true";
  armor = 300;
  nameSound = "building";
  accuracy = 0.5;
  cost = 0;
  mapSize = 7.5;
  destrType = "destructBuilding";
  class DestructionEffects: DestructionEffects
  {
   class Ruin1
   {
    simulation = "ruin";
    type = "\ca\buildings\ruins\dum_mesto_in_ruins";
    position = "";
    intensity = 1;
    interval = 1;
    lifeTime = 1;
   };
  };
  class AnimationSources
  {
   class Door1
   {
    source = "user";
    animPeriod = 1.2;
    initPhase = 0;
   };
   class Door2: Door1{};
   class Door3: Door1{};
   class Door4: Door1{};
   class Door5: Door1{};
   class Door6: Door1{};
   class Door7: Door1{};
   class Door8: Door1{};
   class Door9: Door1{};
   class Door10: Door1{};
   class Door11: Door1{};
  };
  class UserActions
  {
   class OpenDoor
   {
    displayName = "Open Door";
    position = "Door1_Button";
    radius = 2;
    onlyForPlayer = 0;
    condition = "this animationPhase ""Door1"" > 0.5";
    statement = "this animate [""Door1"", 0]";
   };
   class CloseDoor: OpenDoor
   {
    displayName = "Close Door";
    condition = "this animationPhase ""Door1"" <= 0.5";
    statement = "this animate [""Door1"", 1]";
   };
   class OpenDoor2
   {
    displayName = "Open Doors";
    position = "Door2_Button";
    radius = 3;
    onlyForPlayer = 0;
    condition = "this animationPhase ""Door2"" > 0.5";
    statement = "this animate [""Door2"", 0]; this animate [""Door3"", 0]";
   };
   class CloseDoor2: OpenDoor2
   {
    displayName = "Close Doors";
    condition = "this animationPhase ""Door2"" <= 0.5";
    statement = "this animate [""Door2"", 1]; this animate [""Door3"", 1]";
   };
   class OpenDoor3
   {
    displayName = "Open Doors";
    position = "Door3_Button";
    radius = 3;
    onlyForPlayer = 0;
    condition = "this animationPhase ""Door4"" > 0.5";
    statement = "this animate [""Door4"", 0]; this animate [""Door5"", 0]";
   };
   class CloseDoor3: OpenDoor3
   {
    displayName = "Close Doors";
    condition = "this animationPhase ""Door4"" <= 0.5";
    statement = "this animate [""Door4"", 1]; this animate [""Door5"", 1]";
   };
   class OpenDoor4
   {
    displayName = "Open Door";
    position = "Door6_Button";
    radius = 3;
    onlyForPlayer = 0;
    condition = "this animationPhase ""Door6"" < 0.5";
    statement = "this animate [""Door6"", 1]";
   };
   class CloseDoor4: OpenDoor4
   {
    displayName = "Close Door";
    condition = "this animationPhase ""Door6"" >= 0.5";
    statement = "this animate [""Door6"", 0]";
   };
   class OpenDoor5
   {
    displayName = "Open Door";
    position = "Door7_Button";
    radius = 3;
    onlyForPlayer = 0;
    condition = "this animationPhase ""Door7"" < 0.5";
    statement = "this animate [""Door7"", 1]";
   };
   class CloseDoor5: OpenDoor5
   {
    displayName = "Close Door";
    condition = "this animationPhase ""Door7"" >= 0.5";
    statement = "this animate [""Door7"", 0]";
   };
   class OpenDoor6
   {
    displayName = "Open Doors";
    position = "Door8_Button";
    radius = 3;
    onlyForPlayer = 0;
    condition = "this animationPhase ""Door8"" > 0.5";
    statement = "this animate [""Door8"", 0]; this animate [""Door9"", 0]";
   };
   class CloseDoor6: OpenDoor6
   {
    displayName = "Close Doors";
    condition = "this animationPhase ""Door8"" <= 0.5";
    statement = "this animate [""Door8"", 1]; this animate [""Door9"", 1]";
   };
   class OpenDoor7
   {
    displayName = "Open Doors";
    position = "Door10_Button";
    radius = 3;
    onlyForPlayer = 0;
    condition = "this animationPhase ""Door10"" < 0.5";
    statement = "this animate [""Door10"", 1]; this animate [""Door11"", 1]";
   };
   class CloseDoor7: OpenDoor7
   {
    displayName = "Close Doors";
    condition = "this animationPhase ""Door10"" >= 0.5";
    statement = "this animate [""Door10"", 0]; this animate [""Door11"", 0]";
   };
  };
 };
 class Land_smd_ss_hangard_withdoor: House
 {
  scope = 2;
  animated = "true";
  displayName = "Hanger";
  model = "\smd_sahrani_artif_obj\buildings\smd_ss_hangard_withdoor.p3d";
  destrType = "DestructBuilding";
  armor = 800;
  accuracy = 0.5;
  cost = 0;
  mapSize = 7.5;
  class DestructionEffects: DestructionEffects
  {
   class Ruin1
   {
    simulation = "ruin";
    type = "\smd_sahrani_artif_obj\buildings\ruins\smd_ss_hangard_Ruins";
    position = "";
    intensity = 1;
    interval = 1;
    lifeTime = 1;
   };
  };
  class AnimationSources
  {
   class Door1
   {
    source = "user";
    animPeriod = 14;
    initPhase = 0;
   };
   class Door2
   {
    source = "user";
    animPeriod = 11;
    initPhase = 0;
   };
   class Door3
   {
    source = "user";
    animPeriod = 10;
    initPhase = 0;
   };
   class Door4
   {
    source = "user";
    animPeriod = 9;
    initPhase = 0;
   };
   class Door5
   {
    source = "user";
    animPeriod = 7.5;
    initPhase = 0;
   };
   class Door6
   {
    source = "user";
    animPeriod = 6;
    initPhase = 0;
   };
   class Door7
   {
    source = "user";
    animPeriod = 0.5;
    initPhase = 0;
   };
   class Door8
   {
    source = "user";
    animPeriod = 1.2;
    initPhase = 0;
   };
   class Door9
   {
    source = "user";
    animPeriod = 1.2;
    initPhase = 0;
   };
   class Door10
   {
    source = "user";
    animPeriod = 1.2;
    initPhase = 0;
   };
   class Door11
   {
    source = "user";
    animPeriod = 1.2;
    initPhase = 0;
   };
  };
  class UserActions
  {
   class OpenDoor
   {
    displayName = "Open Hangar Door";
    position = "Door7_Button";
    radius = 1;
    onlyForPlayer = 0;
    condition = "this animationPhase ""Door6"" < 0.5";
    statement = "0 = this spawn {_this animate [""Door7"", 1]; sleep 1.5; _this animate [""Door7"", 0]; _this animate [""Door6"", 1]; _this animate [""Door5"", 1]; _this animate [""Door4"", 1]; _this animate [""Door3"", 1]; _this animate [""Door2"", 1]; _this animate [""Door1"", 1]}; this say 'smd_hangar_door_open';";
   };
   class CloseDoor: OpenDoor
   {
    displayName = "Close Hanger Door";
    condition = "this animationPhase ""Door6"" >= 0.5";
    statement = "0 = this spawn {_this animate [""Door7"", 1]; sleep 1.5; _this animate [""Door7"", 0]; _this animate [""Door1"", 0]; sleep 3; _this animate [""Door2"", 0]; sleep 1; _this animate [""Door3"", 0]; sleep 1; _this animate [""Door4"", 0]; sleep 1.5; _this animate [""Door5"", 0]; sleep 1.5; _this animate [""Door6"", 0]}; this say 'smd_hangar_door_close';";
   };
   class OpenDoor2
   {
    displayName = "Open Door";
    position = "Door8_Button";
    radius = 2;
    onlyForPlayer = 0;
    condition = "this animationPhase ""Door8"" < 0.5";
    statement = "this animate [""Door8"", 1]; this animate [""Door9"", 1]";
   };
   class CloseDoor2: OpenDoor2
   {
    displayName = "Close Door";
    condition = "this animationPhase ""Door8"" >= 0.5";
    statement = "this animate [""Door8"", 0]; this animate [""Door9"", 0]";
   };
   class OpenDoor3
   {
    displayName = "Open Door";
    position = "Door10_Button";
    radius = 2;
    onlyForPlayer = 0;
    condition = "this animationPhase ""Door10"" < 0.5";
    statement = "this animate [""Door10"", 1]; this animate [""Door11"", 1]";
   };
   class CloseDoor3: OpenDoor3
   {
    displayName = "Close Door";
    condition = "this animationPhase ""Door10"" >= 0.5";
    statement = "this animate [""Door10"", 0]; this animate [""Door11"", 0]";
   };
  };
 };
};
//};

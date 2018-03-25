#include "\vbs2\basic_defines.hpp"

#define __CurrentDir__ \vbs2\customer\vehicles\uop_test_drone

 

class CfgPatches

{
	class bia_test_helicopter

	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.10;
		requiredAddons[] = {vbs2_vehicles_Air_Helicopters,vbs2_skeletonMan,vbs2_weapons_machineguns_ge_m134};
		modules[] = {};
	};

};


class CfgVehicleClasses

{
	class uop_test_drone

	{
		displayname = "UOP Drone";
	};
};

 

class VBS2_Turret_heligunner;

class CfgVehicles

{

class vbs2_Helicopter;

class uop_test_drone: vbs2_Helicopter

	{
		scope = public;		
		displayName = "UOP Drone";		
		model = __CurrentDir__\uop_test_drone;	
		vehicleClass = uop_test_drone;		
		side = SIDE_BLUFOR;		
		crew = VBS2_skeleton_soldier_ak47;		
		driverAction = "vbs2_AH1Z_Pilot";		
		class Turrets
		{

	class Main_Turret: VBS2_Turret_heligunner

			{

			memoryPointGunnerOptics = "main_opticView";
			memoryPointGunnerOutOptics = "main_opticViewOut";
			gunBeg = "main_muzzle";
			gunEnd = "main_chamber";
			selectionFireAnim = "main_muzzleflash";
			memoryPointsGetInGunner = "gunner_pos";
			memoryPointsGetInGunnerDir = "gunner_pos_dir";
			body = "main_trav_anim";
			gun = "main_elev_anim";
			animationSourceBody = "main_trav_source";
			animationSourceGun = "main_elev_source";
			weapons[]= {VBS2_adf_mag58_veh_turret_highROF};
			magazines[]=

				{

				vbs2_mag_220rnd_762x51_Trace_fn_mag_veh, vbs2_mag_220rnd_762x51_Trace_fn_mag_veh, vbs2_mag_220rnd_762x51_Trace_fn_mag_veh, vbs2_mag_220rnd_762x51_Trace_fn_mag_veh, vbs2_mag_220rnd_762x51_Trace_fn_mag_veh

				};

			};

		};

	};

};


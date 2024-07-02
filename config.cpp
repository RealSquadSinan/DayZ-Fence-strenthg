class CfgPatches
{
	class SM_Damage_Building_x1_5
	{
		units[]=
		{
			"Fence",
			"Watchtower"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Gear_Camping",
			"DZ_Scripts"
		};
	};
};
class CfgMods
{
	class SM_Damage_Building_x1_5
	{
		dir="SM_Damage_Building_x1_5";
		hideName=1;
		hidePicture=1;
		name="SM_Damage_Building_x1_5";
		credits="Sobranskiy";
		author="Sobranskiy";
		authorID="0";
		version="1.0";
		extra=0;
		type="mod";
	};
};
class CfgVehicles
{
	class BaseBuildingBase;
	class Fence: BaseBuildingBase
	{
		scope=2;
		class DamageSystem
		{
			class DamageZones
			{
				class Wall_Base_Down
				{
					class Health
					{
						hitpoints=12000;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=0.60000002;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class Melee
						{
							class Health
							{
								damage=0.40000001;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=13;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
					};
				};
				class Wall_Wood_Down
				{
					class Health
					{
						hitpoints=16000;
					};
					class Projectile
					{
						class Health
						{
							damage=0.60000002;
						};
						class Blood
						{
							damage=0;
						};
						class Shock
						{
							damage=0;
						};
					};
					class Melee
					{
						class Health
						{
							damage=0.40000001;
						};
						class Blood
						{
							damage=0;
						};
						class Shock
						{
							damage=0;
						};
					};
					class FragGrenade
					{
						class Health
						{
							damage=35;
						};
						class Blood
						{
							damage=0;
						};
						class Shock
						{
							damage=0;
						};
					};
				};
				class Wall_Metal_Down
				{
					class Health
					{
						hitpoints=21000;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=0.60000002;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class Melee
						{
							class Health
							{
								damage=0.40000001;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=23;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
					};
				};
				class Wall_Platform
				{
					class Health
					{
						hitpoints=18000;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=0.60000002;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class Melee
						{
							class Health
							{
								damage=0.40000001;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=35;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
					};
				};
				class Wall_Barbedwire_1
				{
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=0.0099999998;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class Melee
						{
							class Health
							{
								damage=0.60000002;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=26;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
					};
				};
				class Material_WoodenLogs
				{
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=0.60000002;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class Melee
						{
							class Health
							{
								damage=0.40000001;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=35;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
					};
				};
				class Material_MetalWire
				{
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=0.60000002;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class Melee
						{
							class Health
							{
								damage=0.40000001;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=23;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
					};
				};
			};
		};
	};
	class Watchtower: BaseBuildingBase
	{
		scope=2;
		class DamageSystem
		{
			class DamageZones
			{
				class Material_L1_WoodenLogs
				{
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=0.60000002;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class Melee
						{
							class Health
							{
								damage=0.40000001;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=35;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
					};
				};
				class Level_1_Wall_1_Base_Down
				{
					class Health
					{
						hitpoints=12000;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=0.60000002;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class Melee
						{
							class Health
							{
								damage=0.40000001;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=13;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
					};
				};
				class Level_1_Wall_1_Wood_Down
				{
					class Health
					{
						hitpoints=16000;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=0.60000002;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class Melee
						{
							class Health
							{
								damage=0.40000001;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=35;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
					};
				};
				class Level_1_Wall_1_Metal_Down
				{
					class Health
					{
						hitpoints=21000;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=0.60000002;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class Melee
						{
							class Health
							{
								damage=0.40000001;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=23;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
					};
				};
				class Level_1_Stairs
				{
					class Health
					{
						hitpoints=7500;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=0.60000002;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class Melee
						{
							class Health
							{
								damage=0.40000001;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=35;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
					};
				};
				class Level_1_Wall_1_Barbedwire_1
				{
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=0.0060000001;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class Melee
						{
							class Health
							{
								damage=0.60000002;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=26;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
					};
				};
				class Level_2_Stairs
				{
					class Health
					{
						hitpoints=7500;
					};
				};
				class Level_3_Roof
				{
					class Health
					{
						hitpoints=19000;
					};
					class ArmorType
					{
						class Projectile
						{
							class Health
							{
								damage=0.60000002;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class Melee
						{
							class Health
							{
								damage=0.40000001;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
						class FragGrenade
						{
							class Health
							{
								damage=23;
							};
							class Blood
							{
								damage=0;
							};
							class Shock
							{
								damage=0;
							};
						};
					};
				};
			};
		};
	};
};

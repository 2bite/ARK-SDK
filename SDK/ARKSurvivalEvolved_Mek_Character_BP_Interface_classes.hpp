#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Mek_Character_BP_Interface_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Mek_Character_BP_Interface.Mek_Character_BP_Interface_C
// 0x0000 (0x0028 - 0x0028)
class UMek_Character_BP_Interface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mek_Character_BP_Interface.Mek_Character_BP_Interface_C");
		return ptr;
	}


	void GetMekHeat(float* CurrentHeat, float* MaxHeat);
	void GetMekFuel(float* CurrentFuel, float* MaxFuel);
	void ModifyMekHeat(float Delta, bool Subtract, float* NewHeatLevel);
	void ModifyMekFuel(float Delta, bool Subtract, float* NewFuelLevel, bool* Success);
	void SetBackpackMalfunction(bool DisableBackpack);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

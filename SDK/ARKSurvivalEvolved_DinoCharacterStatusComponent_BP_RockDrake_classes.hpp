#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoCharacterStatusComponent_BP_RockDrake_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoCharacterStatusComponent_BP_RockDrake.DinoCharacterStatusComponent_BP_RockDrake_C
// 0x0000 (0x1090 - 0x1090)
class UDinoCharacterStatusComponent_BP_RockDrake_C : public UDinoCharacterStatusComponent_BP_FlyerRide_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoCharacterStatusComponent_BP_RockDrake.DinoCharacterStatusComponent_BP_RockDrake_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoCharacterStatusComponent_BP_RockDrake(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

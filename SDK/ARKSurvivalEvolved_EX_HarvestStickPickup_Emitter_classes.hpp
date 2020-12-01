#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EX_HarvestStickPickup_Emitter_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EX_HarvestStickPickup_Emitter.EX_HarvestStickPickup_Emitter_C
// 0x0000 (0x0500 - 0x0500)
class AEX_HarvestStickPickup_Emitter_C : public APrimalEmitterSpawnable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EX_HarvestStickPickup_Emitter.EX_HarvestStickPickup_Emitter_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_EX_HarvestStickPickup_Emitter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

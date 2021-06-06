#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ZombieWyvernAnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ZombieWyvernAnimBlueprint.ZombieWyvernAnimBlueprint_C
// 0x0000 (0x15C1 - 0x15C1)
class UZombieWyvernAnimBlueprint_C : public UDinoBlueprintBase_RootTransformIK_FullFlight_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ZombieWyvernAnimBlueprint.ZombieWyvernAnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_ZombieWyvernAnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

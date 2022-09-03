#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Tentacle_HazardBP_Spawned_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Tentacle_HazardBP_Spawned.Tentacle_HazardBP_Spawned_C
// 0x0000 (0x15E0 - 0x15E0)
class ATentacle_HazardBP_Spawned_C : public ATentacle_HazardBP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Tentacle_HazardBP_Spawned.Tentacle_HazardBP_Spawned_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Tentacle_HazardBP_Spawned(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

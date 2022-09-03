#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ClimbingSettings_Player_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ClimbingSettings_Player_BP.ClimbingSettings_Player_BP_C
// 0x0000 (0x0C28 - 0x0C28)
class UClimbingSettings_Player_BP_C : public UPrimalClimbingSettings
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ClimbingSettings_Player_BP.ClimbingSettings_Player_BP_C");
		return ptr;
	}


	void ExecuteUbergraph_ClimbingSettings_Player_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackStateGrab_AllowNoRider_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoAttackStateGrab_AllowNoRider.DinoAttackStateGrab_AllowNoRider_C
// 0x0000 (0x0098 - 0x0098)
class UDinoAttackStateGrab_AllowNoRider_C : public UPrimalAIStateDinoFlyerGrab
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoAttackStateGrab_AllowNoRider.DinoAttackStateGrab_AllowNoRider_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoAttackStateGrab_AllowNoRider(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackStateGrabAndRelease_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoAttackStateGrabAndRelease.DinoAttackStateGrabAndRelease_C
// 0x0000 (0x0098 - 0x0098)
class UDinoAttackStateGrabAndRelease_C : public UPrimalAIStateDinoGrabAndReleaseState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoAttackStateGrabAndRelease.DinoAttackStateGrabAndRelease_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoAttackStateGrabAndRelease(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

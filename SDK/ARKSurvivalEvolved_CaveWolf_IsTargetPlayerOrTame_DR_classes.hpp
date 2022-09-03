#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CaveWolf_IsTargetPlayerOrTame_DR_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CaveWolf_IsTargetPlayerOrTame_DR.CaveWolf_IsTargetPlayerOrTame_DR_C
// 0x0000 (0x0090 - 0x0090)
class UCaveWolf_IsTargetPlayerOrTame_DR_C : public UBTDecorator_BlueprintBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CaveWolf_IsTargetPlayerOrTame_DR.CaveWolf_IsTargetPlayerOrTame_DR_C");
		return ptr;
	}


	void ReceiveConditionCheck(class AActor** OwnerActor);
	void ExecuteUbergraph_CaveWolf_IsTargetPlayerOrTame_DR(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

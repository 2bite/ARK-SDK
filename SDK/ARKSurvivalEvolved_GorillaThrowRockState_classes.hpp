#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_GorillaThrowRockState_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GorillaThrowRockState.GorillaThrowRockState_C
// 0x0000 (0x00A0 - 0x00A0)
class UGorillaThrowRockState_C : public UPrimalAIStateDinoRangedState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GorillaThrowRockState.GorillaThrowRockState_C");
		return ptr;
	}


	void ExecuteUbergraph_GorillaThrowRockState(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

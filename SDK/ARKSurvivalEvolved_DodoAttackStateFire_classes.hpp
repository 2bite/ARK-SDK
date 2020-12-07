#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DodoAttackStateFire_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DodoAttackStateFire.DodoAttackStateFire_C
// 0x0000 (0x0090 - 0x0090)
class UDodoAttackStateFire_C : public UPrimalAIStateDinoMeleeState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DodoAttackStateFire.DodoAttackStateFire_C");
		return ptr;
	}


	void ExecuteUbergraph_DodoAttackStateFire(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

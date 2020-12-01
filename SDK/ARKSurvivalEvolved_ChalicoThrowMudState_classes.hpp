#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ChalicoThrowMudState_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ChalicoThrowMudState.ChalicoThrowMudState_C
// 0x0000 (0x00A0 - 0x00A0)
class UChalicoThrowMudState_C : public UDinoAttackStateRanged_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ChalicoThrowMudState.ChalicoThrowMudState_C");
		return ptr;
	}


	void ExecuteUbergraph_ChalicoThrowMudState(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

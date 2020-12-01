#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ChalicoAnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ChalicoAnimBlueprint.ChalicoAnimBlueprint_C
// 0x0000 (0x1658 - 0x1658)
class UChalicoAnimBlueprint_C : public UDinoBlueprintBase_RootBoneNameInterpSpeed_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ChalicoAnimBlueprint.ChalicoAnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_ChalicoAnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Pegomastax_AnimBlueprint_Copy_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Pegomastax_AnimBlueprint_Copy.Pegomastax_AnimBlueprint_Copy_C
// 0x0000 (0x16B0 - 0x16B0)
class UPegomastax_AnimBlueprint_Copy_C : public UDinoBlueprintBase_RootBoneName_Mounted_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Pegomastax_AnimBlueprint_Copy.Pegomastax_AnimBlueprint_Copy_C");
		return ptr;
	}


	void ExecuteUbergraph_Pegomastax_AnimBlueprint_Copy(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

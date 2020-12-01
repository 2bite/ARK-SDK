#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Spindles_MinigunMode_AnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Spindles_MinigunMode_AnimBlueprint.Spindles_MinigunMode_AnimBlueprint_C
// 0x0000 (0x181F - 0x181F)
class USpindles_MinigunMode_AnimBlueprint_C : public UDinoBlueprintBase_RootBoneName_Strafe_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Spindles_MinigunMode_AnimBlueprint.Spindles_MinigunMode_AnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_Spindles_MinigunMode_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

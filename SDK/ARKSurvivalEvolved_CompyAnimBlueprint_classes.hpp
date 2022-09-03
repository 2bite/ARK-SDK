#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CompyAnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass CompyAnimBlueprint.CompyAnimBlueprint_C
// 0x0000 (0x16B0 - 0x16B0)
class UCompyAnimBlueprint_C : public UDinoBlueprintBase_RootBoneName_Mounted_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass CompyAnimBlueprint.CompyAnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_CompyAnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

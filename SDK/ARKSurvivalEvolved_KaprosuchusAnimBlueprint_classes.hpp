#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_KaprosuchusAnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass KaprosuchusAnimBlueprint.KaprosuchusAnimBlueprint_C
// 0x0000 (0x16BC - 0x16BC)
class UKaprosuchusAnimBlueprint_C : public UDinoBlueprintBase_RootBoneName_Swimmer_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass KaprosuchusAnimBlueprint.KaprosuchusAnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_KaprosuchusAnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

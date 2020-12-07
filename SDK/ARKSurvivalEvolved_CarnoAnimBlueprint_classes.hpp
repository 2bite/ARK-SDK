#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CarnoAnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass CarnoAnimBlueprint.CarnoAnimBlueprint_C
// 0x0000 (0x1630 - 0x1630)
class UCarnoAnimBlueprint_C : public UDinoBlueprintBase_RootBoneName_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass CarnoAnimBlueprint.CarnoAnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_CarnoAnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

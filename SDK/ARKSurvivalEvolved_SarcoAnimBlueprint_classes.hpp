#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SarcoAnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass SarcoAnimBlueprint.SarcoAnimBlueprint_C
// 0x0000 (0x1A20 - 0x1A20)
class USarcoAnimBlueprint_C : public UDinoBlueprintBase_RootBoneName_SwimmerWithLandAndSwimCharge_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass SarcoAnimBlueprint.SarcoAnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_SarcoAnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

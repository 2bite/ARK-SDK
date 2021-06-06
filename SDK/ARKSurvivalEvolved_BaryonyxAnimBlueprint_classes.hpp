#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BaryonyxAnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BaryonyxAnimBlueprint.BaryonyxAnimBlueprint_C
// 0x0000 (0x16BC - 0x16BC)
class UBaryonyxAnimBlueprint_C : public UDinoBlueprintBase_RootBoneName_Swimmer_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BaryonyxAnimBlueprint.BaryonyxAnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_BaryonyxAnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

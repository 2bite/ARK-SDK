#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalGlobalsBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalGlobalsBlueprint.PrimalGlobalsBlueprint_C
// 0x0000 (0x0158 - 0x0158)
class UPrimalGlobalsBlueprint_C : public UPrimalGlobals
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalGlobalsBlueprint.PrimalGlobalsBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalGlobalsBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

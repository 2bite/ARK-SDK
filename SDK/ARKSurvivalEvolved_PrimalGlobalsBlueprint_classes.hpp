#pragma once

// ARKSurvivalEvolved (332.8) SDK

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
// 0x0000 (0x01B8 - 0x01B8)
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

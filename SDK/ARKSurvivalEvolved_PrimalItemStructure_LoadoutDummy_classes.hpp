#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_LoadoutDummy_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_LoadoutDummy.PrimalItemStructure_LoadoutDummy_C
// 0x0000 (0x0AE0 - 0x0AE0)
class UPrimalItemStructure_LoadoutDummy_C : public UPrimalItemStructureGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_LoadoutDummy.PrimalItemStructure_LoadoutDummy_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_LoadoutDummy(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

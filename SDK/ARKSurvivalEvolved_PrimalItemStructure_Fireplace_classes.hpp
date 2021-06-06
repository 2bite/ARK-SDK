#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_Fireplace_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_Fireplace.PrimalItemStructure_Fireplace_C
// 0x0000 (0x0AE0 - 0x0AE0)
class UPrimalItemStructure_Fireplace_C : public UPrimalItemStructureGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_Fireplace.PrimalItemStructure_Fireplace_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_Fireplace(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

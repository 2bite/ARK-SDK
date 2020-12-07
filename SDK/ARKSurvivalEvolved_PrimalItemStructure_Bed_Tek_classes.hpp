#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_Bed_Tek_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_Bed_Tek.PrimalItemStructure_Bed_Tek_C
// 0x0000 (0x09E8 - 0x09E8)
class UPrimalItemStructure_Bed_Tek_C : public UPrimalItemStructure_Bed_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_Bed_Tek.PrimalItemStructure_Bed_Tek_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_Bed_Tek(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

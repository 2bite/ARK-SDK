#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_MetalGate_Large_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_MetalGate_Large.PrimalItemStructure_MetalGate_Large_C
// 0x0000 (0x09E8 - 0x09E8)
class UPrimalItemStructure_MetalGate_Large_C : public UPrimalItemStructure_BaseGate_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_MetalGate_Large.PrimalItemStructure_MetalGate_Large_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_MetalGate_Large(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

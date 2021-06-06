#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_WoodGate_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_WoodGate.PrimalItemStructure_WoodGate_C
// 0x0000 (0x0AE0 - 0x0AE0)
class UPrimalItemStructure_WoodGate_C : public UPrimalItemStructure_BaseGate_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_WoodGate.PrimalItemStructure_WoodGate_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_WoodGate(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_Ramp_Tek_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_Ramp_Tek.PrimalItemStructure_Ramp_Tek_C
// 0x0000 (0x0AE8 - 0x0AE8)
class UPrimalItemStructure_Ramp_Tek_C : public UPrimalItemStructure_BaseRamp_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_Ramp_Tek.PrimalItemStructure_Ramp_Tek_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_Ramp_Tek(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

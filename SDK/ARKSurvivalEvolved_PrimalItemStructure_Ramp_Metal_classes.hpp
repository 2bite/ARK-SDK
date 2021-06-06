#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_Ramp_Metal_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_Ramp_Metal.PrimalItemStructure_Ramp_Metal_C
// 0x0000 (0x0AE0 - 0x0AE0)
class UPrimalItemStructure_Ramp_Metal_C : public UPrimalItemStructure_BaseRamp_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_Ramp_Metal.PrimalItemStructure_Ramp_Metal_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_Ramp_Metal(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

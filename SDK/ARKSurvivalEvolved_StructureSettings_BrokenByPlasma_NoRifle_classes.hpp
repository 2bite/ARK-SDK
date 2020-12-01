#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StructureSettings_BrokenByPlasma_NoRifle_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass StructureSettings_BrokenByPlasma_NoRifle.StructureSettings_BrokenByPlasma_NoRifle_C
// 0x0000 (0x0050 - 0x0050)
class UStructureSettings_BrokenByPlasma_NoRifle_C : public UStructureSettings_BrokenByPlasma_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StructureSettings_BrokenByPlasma_NoRifle.StructureSettings_BrokenByPlasma_NoRifle_C");
		return ptr;
	}


	void ExecuteUbergraph_StructureSettings_BrokenByPlasma_NoRifle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

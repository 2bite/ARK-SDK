#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StructureSettings_BrokenByMetal_DLC1_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass StructureSettings_BrokenByMetal_DLC1.StructureSettings_BrokenByMetal_DLC1_C
// 0x0000 (0x0050 - 0x0050)
class UStructureSettings_BrokenByMetal_DLC1_C : public UGenericStructureSettings_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StructureSettings_BrokenByMetal_DLC1.StructureSettings_BrokenByMetal_DLC1_C");
		return ptr;
	}


	void ExecuteUbergraph_StructureSettings_BrokenByMetal_DLC1(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

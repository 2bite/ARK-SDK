#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StructureSettings_BrokenByGuns_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass StructureSettings_BrokenByGuns.StructureSettings_BrokenByGuns_C
// 0x0000 (0x0050 - 0x0050)
class UStructureSettings_BrokenByGuns_C : public UGenericStructureSettings_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StructureSettings_BrokenByGuns.StructureSettings_BrokenByGuns_C");
		return ptr;
	}


	void ExecuteUbergraph_StructureSettings_BrokenByGuns(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StructureSettings_BrokenByExplosives_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass StructureSettings_BrokenByExplosives.StructureSettings_BrokenByExplosives_C
// 0x0000 (0x0050 - 0x0050)
class UStructureSettings_BrokenByExplosives_C : public UGenericStructureSettings_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StructureSettings_BrokenByExplosives.StructureSettings_BrokenByExplosives_C");
		return ptr;
	}


	void ExecuteUbergraph_StructureSettings_BrokenByExplosives(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

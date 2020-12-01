#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StructureSettings_Plants_Aberration_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass StructureSettings_Plants_Aberration.StructureSettings_Plants_Aberration_C
// 0x0000 (0x0050 - 0x0050)
class UStructureSettings_Plants_Aberration_C : public UPlantTrapStructureSettings_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StructureSettings_Plants_Aberration.StructureSettings_Plants_Aberration_C");
		return ptr;
	}


	void ExecuteUbergraph_StructureSettings_Plants_Aberration(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

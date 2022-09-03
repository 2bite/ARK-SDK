#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StructureSettings_Tentacle_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass StructureSettings_Tentacle.StructureSettings_Tentacle_C
// 0x0000 (0x0050 - 0x0050)
class UStructureSettings_Tentacle_C : public UGenericStructureSettings_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StructureSettings_Tentacle.StructureSettings_Tentacle_C");
		return ptr;
	}


	void ExecuteUbergraph_StructureSettings_Tentacle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

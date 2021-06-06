#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StructureSettings_NoDamageModifications_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass StructureSettings_NoDamageModifications.StructureSettings_NoDamageModifications_C
// 0x0000 (0x0050 - 0x0050)
class UStructureSettings_NoDamageModifications_C : public UPrimalStructureSettings
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StructureSettings_NoDamageModifications.StructureSettings_NoDamageModifications_C");
		return ptr;
	}


	void ExecuteUbergraph_StructureSettings_NoDamageModifications(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

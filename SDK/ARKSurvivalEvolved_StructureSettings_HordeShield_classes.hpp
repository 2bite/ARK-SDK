#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StructureSettings_HordeShield_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass StructureSettings_HordeShield.StructureSettings_HordeShield_C
// 0x0000 (0x0050 - 0x0050)
class UStructureSettings_HordeShield_C : public UGenericStructureSettings_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StructureSettings_HordeShield.StructureSettings_HordeShield_C");
		return ptr;
	}


	void ExecuteUbergraph_StructureSettings_HordeShield(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

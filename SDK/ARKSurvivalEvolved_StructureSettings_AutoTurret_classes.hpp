#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StructureSettings_AutoTurret_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass StructureSettings_AutoTurret.StructureSettings_AutoTurret_C
// 0x0000 (0x0050 - 0x0050)
class UStructureSettings_AutoTurret_C : public UStructureSettings_BrokenByExplosives_WeakMetalDmg_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StructureSettings_AutoTurret.StructureSettings_AutoTurret_C");
		return ptr;
	}


	void ExecuteUbergraph_StructureSettings_AutoTurret(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

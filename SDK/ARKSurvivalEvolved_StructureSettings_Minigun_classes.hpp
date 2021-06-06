#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StructureSettings_Minigun_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass StructureSettings_Minigun.StructureSettings_Minigun_C
// 0x0000 (0x0050 - 0x0050)
class UStructureSettings_Minigun_C : public UStructureSettings_AutoTurret_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StructureSettings_Minigun.StructureSettings_Minigun_C");
		return ptr;
	}


	void ExecuteUbergraph_StructureSettings_Minigun(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

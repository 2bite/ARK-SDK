#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TrapStructureSettings_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TrapStructureSettings.TrapStructureSettings_C
// 0x0000 (0x0050 - 0x0050)
class UTrapStructureSettings_C : public UPrimalStructureSettings
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TrapStructureSettings.TrapStructureSettings_C");
		return ptr;
	}


	void ExecuteUbergraph_TrapStructureSettings(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

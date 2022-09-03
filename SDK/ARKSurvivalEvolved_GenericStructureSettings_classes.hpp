#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_GenericStructureSettings_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GenericStructureSettings.GenericStructureSettings_C
// 0x0000 (0x0050 - 0x0050)
class UGenericStructureSettings_C : public UPrimalStructureSettings
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GenericStructureSettings.GenericStructureSettings_C");
		return ptr;
	}


	void ExecuteUbergraph_GenericStructureSettings(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

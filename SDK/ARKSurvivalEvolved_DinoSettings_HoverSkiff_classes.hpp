#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSettings_HoverSkiff_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoSettings_HoverSkiff.DinoSettings_HoverSkiff_C
// 0x0000 (0x0090 - 0x0090)
class UDinoSettings_HoverSkiff_C : public UPrimalDinoSettings
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoSettings_HoverSkiff.DinoSettings_HoverSkiff_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoSettings_HoverSkiff(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

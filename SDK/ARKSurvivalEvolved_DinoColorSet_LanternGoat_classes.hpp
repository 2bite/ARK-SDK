#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_LanternGoat_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoColorSet_LanternGoat.DinoColorSet_LanternGoat_C
// 0x0000 (0x0268 - 0x0268)
class UDinoColorSet_LanternGoat_C : public UPrimalColorSet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoColorSet_LanternGoat.DinoColorSet_LanternGoat_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoColorSet_LanternGoat(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

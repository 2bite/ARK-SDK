#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_LanternPug_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoColorSet_LanternPug.DinoColorSet_LanternPug_C
// 0x0000 (0x0268 - 0x0268)
class UDinoColorSet_LanternPug_C : public UPrimalColorSet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoColorSet_LanternPug.DinoColorSet_LanternPug_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoColorSet_LanternPug(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

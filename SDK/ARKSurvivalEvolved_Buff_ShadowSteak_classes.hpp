#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ShadowSteak_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_ShadowSteak.Buff_ShadowSteak_C
// 0x0000 (0x08A0 - 0x08A0)
class ABuff_ShadowSteak_C : public ABuff_Base_Stew_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_ShadowSteak.Buff_ShadowSteak_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_ShadowSteak(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
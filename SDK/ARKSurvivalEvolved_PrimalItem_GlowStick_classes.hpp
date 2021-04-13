#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_GlowStick_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItem_GlowStick.PrimalItem_GlowStick_C
// 0x0000 (0x0A00 - 0x0A00)
class UPrimalItem_GlowStick_C : public UPrimalItem_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_GlowStick.PrimalItem_GlowStick_C");
		return ptr;
	}


	void BPPostInitializeItem(class UWorld** OptionalInitWorld);
	void BPItemBroken();
	void ExecuteUbergraph_PrimalItem_GlowStick(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

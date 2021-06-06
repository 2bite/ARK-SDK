#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoDropInventoryComponent_BossSpider_Hard_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoDropInventoryComponent_BossSpider_Hard.DinoDropInventoryComponent_BossSpider_Hard_C
// 0x0000 (0x0590 - 0x0590)
class UDinoDropInventoryComponent_BossSpider_Hard_C : public UDinoDropInventoryComponent_Carnivore_Small_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoDropInventoryComponent_BossSpider_Hard.DinoDropInventoryComponent_BossSpider_Hard_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoDropInventoryComponent_BossSpider_Hard(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

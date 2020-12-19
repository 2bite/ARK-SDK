#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoDropInventoryComponent_BossGorilla_Hard_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoDropInventoryComponent_BossGorilla_Hard.DinoDropInventoryComponent_BossGorilla_Hard_C
// 0x0000 (0x0570 - 0x0570)
class UDinoDropInventoryComponent_BossGorilla_Hard_C : public UDinoDropInventoryComponent_Carnivore_Small_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoDropInventoryComponent_BossGorilla_Hard.DinoDropInventoryComponent_BossGorilla_Hard_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoDropInventoryComponent_BossGorilla_Hard(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

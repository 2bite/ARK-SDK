#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekWyvern_BreathStun_Cooldown_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_TekWyvern_BreathStun_Cooldown.Buff_TekWyvern_BreathStun_Cooldown_C
// 0x0000 (0x0960 - 0x0960)
class ABuff_TekWyvern_BreathStun_Cooldown_C : public ABuff_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_TekWyvern_BreathStun_Cooldown.Buff_TekWyvern_BreathStun_Cooldown_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_TekWyvern_BreathStun_Cooldown(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

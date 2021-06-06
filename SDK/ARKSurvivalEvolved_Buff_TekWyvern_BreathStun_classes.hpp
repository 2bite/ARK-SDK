#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekWyvern_BreathStun_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_TekWyvern_BreathStun.Buff_TekWyvern_BreathStun_C
// 0x0000 (0x0978 - 0x0978)
class ABuff_TekWyvern_BreathStun_C : public ABuff_Stunned_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_TekWyvern_BreathStun.Buff_TekWyvern_BreathStun_C");
		return ptr;
	}


	class UClass* BPOverrideBuffToGiveOnDeactivation();
	bool BPCustomAllowAddBuff(class APrimalCharacter** forCharacter, class AActor** DamageCauser);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_TekWyvern_BreathStun(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

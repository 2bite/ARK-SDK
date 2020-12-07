#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_PoopRoar_Cooldown_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_PoopRoar_Cooldown.Buff_PoopRoar_Cooldown_C
// 0x0018 (0x0968 - 0x0950)
class ABuff_PoopRoar_Cooldown_C : public ABuff_Base_C
{
public:
	class UClass*                                      PlayerPawnBuff;                                           // 0x0950(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      DinoPawnBuff;                                             // 0x0958(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PlayerPawnCooldown;                                       // 0x0960(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DinoPawnCooldown;                                         // 0x0964(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_PoopRoar_Cooldown.Buff_PoopRoar_Cooldown_C");
		return ptr;
	}


	bool BPCheckPreventInput(TEnumAsByte<EPrimalCharacterInputType>* inputType);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_PoopRoar_Cooldown(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

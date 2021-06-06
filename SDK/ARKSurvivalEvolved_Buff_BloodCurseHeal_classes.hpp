#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_BloodCurseHeal_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_BloodCurseHeal.Buff_BloodCurseHeal_C
// 0x0014 (0x0974 - 0x0960)
class ABuff_BloodCurseHeal_C : public APrimalBuff
{
public:
	TArray<class APrimalCharacter*>                    CurrentVictims;                                           // 0x0960(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              DamageToHealthRecMultiplier;                              // 0x0970(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_BloodCurseHeal.Buff_BloodCurseHeal_C");
		return ptr;
	}


	void CheckDeactivation();
	void RecoverHealth(float DamageCaused);
	void UpdateVictims(class APrimalCharacter* Character, bool Add);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_BloodCurseHeal(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Flashbang_Cooldown_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_Flashbang_Cooldown.Buff_Flashbang_Cooldown_C
// 0x0018 (0x0990 - 0x0978)
class ABuff_Flashbang_Cooldown_C : public ABuff_Base_C
{
public:
	class UClass*                                      PlayerPawnBuff;                                           // 0x0978(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      DinoPawnBuff;                                             // 0x0980(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PlayerPawnCooldown;                                       // 0x0988(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DinoPawnCooldown;                                         // 0x098C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Flashbang_Cooldown.Buff_Flashbang_Cooldown_C");
		return ptr;
	}


	void BPPreSetupForInstigator(class AActor** ForInstigator);
	bool BPCheckPreventInput(TEnumAsByte<EPrimalCharacterInputType>* inputType);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_Flashbang_Cooldown(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

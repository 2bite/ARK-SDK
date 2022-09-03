#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_InsideMekShield_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_InsideMekShield.Buff_InsideMekShield_C
// 0x000D (0x0985 - 0x0978)
class ABuff_InsideMekShield_C : public ABuff_Base_C
{
public:
	class UClass*                                      DebuffClassWhenEnemyExitsShield;                          // 0x0978(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FriendlyReceiveDamageMultiplier;                          // 0x0980(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsFromFriendlyMek;                                       // 0x0984(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_InsideMekShield.Buff_InsideMekShield_C");
		return ptr;
	}


	class UClass* BPOverrideBuffToGiveOnDeactivation();
	void BuffTickClient(float* DeltaTime);
	void BPDeactivated(class AActor** ForInstigator);
	void BPActivated(class AActor** ForInstigator);
	void BuffTickServer(float* DeltaTime);
	struct FStatusValueModifierDescription STATIC_GetBuffDescription();
	void GetOwnerMek(bool* IsValid, bool* IsFriendly, class AMek_Character_BP_C** Mek);
	bool IsOwnerMek();
	bool HideBuffFromHUD();
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_InsideMekShield(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

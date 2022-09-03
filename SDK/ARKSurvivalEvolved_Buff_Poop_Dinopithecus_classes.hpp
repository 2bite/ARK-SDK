#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Poop_Dinopithecus_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_Poop_Dinopithecus.Buff_Poop_Dinopithecus_C
// 0x0038 (0x09B0 - 0x0978)
class ABuff_Poop_Dinopithecus_C : public ABuff_Base_C
{
public:
	TArray<struct FName>                               PreventedTekArmorBuffs;                                   // 0x0978(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	double                                             LastNotifiedTime;                                         // 0x0988(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NotifyInterval;                                           // 0x0990(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0994(0x0004) MISSED OFFSET
	class FString                                      WeaponDisabledNotificationText;                           // 0x0998(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              NotifyDisplayTime;                                        // 0x09A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NotifyDisplayScale;                                       // 0x09AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Poop_Dinopithecus.Buff_Poop_Dinopithecus_C");
		return ptr;
	}


	void BPOnPreventedFiringDisabledWeapon(class AShooterWeapon** weapon, struct FName* PreventingTag);
	TArray<struct FName> BPPreventTekArmorBuffs();
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_Poop_Dinopithecus(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

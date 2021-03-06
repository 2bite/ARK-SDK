#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapHomingMissile_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapHomingMissile.WeapHomingMissile_C
// 0x0058 (0x0E90 - 0x0E38)
class AWeapHomingMissile_C : public AWeapRocketLauncher_C
{
public:
	class UAudioComponent*                             ReloadSound;                                              // 0x0E38(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             HomingLockSound;                                          // 0x0E40(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bStartLockOn;                                             // 0x0E48(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0E49(0x0007) MISSED OFFSET
	class USoundCue*                                   LockingOnSound;                                           // 0x0E50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   LockedOnSound;                                            // 0x0E58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasJustLockedOn;                                         // 0x0E60(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0E61(0x0003) MISSED OFFSET
	struct FName                                       DynamicLED_ParamName;                                     // 0x0E64(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                EmissiveOnColor;                                          // 0x0E6C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                EmissiveOffColor;                                         // 0x0E7C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x0E8C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x0E8D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue2;                  // 0x0E8E(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x0E8F(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapHomingMissile.WeapHomingMissile_C");
		return ptr;
	}


	void UpdateLEDs();
	void Listener_LockOn_Stop();
	void Listener_LockOn_Update(bool* Reset);
	void UserConstructionScript();
	void AnimNotify_Reload();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_WeapHomingMissile(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

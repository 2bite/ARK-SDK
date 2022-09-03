#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_PushedByJumppad_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_PushedByJumppad.Buff_PushedByJumppad_C
// 0x0004 (0x097C - 0x0978)
class ABuff_PushedByJumppad_C : public ABuff_Base_C
{
public:
	float                                              FallDamageMultiplier;                                     // 0x0978(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_PushedByJumppad.Buff_PushedByJumppad_C");
		return ptr;
	}


	void BPNotifyOtherBuffActivated(class APrimalBuff** OtherBuff);
	void BPOnInstigatorMovementModeChangedNotify(TEnumAsByte<EMovementMode>* PrevMovementMode, unsigned char* PreviousCustomMode, TEnumAsByte<EMovementMode>* NewMovementMode, unsigned char* NewCustomMode);
	void BPSetupForInstigator(class AActor** ForInstigator);
	void Set_ColorOfTrail(const struct FVector& InColorVector);
	void NotifyDamage(float* DamageAmount, class UClass** DamageClass, class AController** EventInstigator, class AActor** TheDamageCauser);
	float BuffAdjustDamage(float* Damage, class AController** EventInstigator, class AActor** DamageCauser, class UClass** TheDamgeType, struct FHitResult* HitInfo);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_PushedByJumppad(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

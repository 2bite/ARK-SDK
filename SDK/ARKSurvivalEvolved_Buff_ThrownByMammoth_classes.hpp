#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ThrownByMammoth_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_ThrownByMammoth.Buff_ThrownByMammoth_C
// 0x0000 (0x0978 - 0x0978)
class ABuff_ThrownByMammoth_C : public ABuff_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_ThrownByMammoth.Buff_ThrownByMammoth_C");
		return ptr;
	}


	void BPOnInstigatorMovementModeChangedNotify(TEnumAsByte<EMovementMode>* PrevMovementMode, unsigned char* PreviousCustomMode, TEnumAsByte<EMovementMode>* NewMovementMode, unsigned char* NewCustomMode);
	float BuffAdjustDamage(float* Damage, class AController** EventInstigator, class AActor** DamageCauser, class UClass** TheDamgeType, struct FHitResult* HitInfo);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_ThrownByMammoth(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

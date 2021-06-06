#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_SummoningSickness_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_SummoningSickness.Buff_SummoningSickness_C
// 0x0000 (0x0960 - 0x0960)
class ABuff_SummoningSickness_C : public ABuff_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_SummoningSickness.Buff_SummoningSickness_C");
		return ptr;
	}


	void DrawBuffFloatingHUD(int* BuffIndex, class AShooterHUD** HUD, float* CenterX, float* CenterY, float* DrawScale);
	bool BPPreventAddingOtherBuff(class UClass** anotherBuffClass);
	void BPPreSetupForInstigator(class AActor** ForInstigator);
	float BuffAdjustDamage(float* Damage, class AController** EventInstigator, class AActor** DamageCauser, class UClass** TheDamgeType, struct FHitResult* HitInfo);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_SummoningSickness(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

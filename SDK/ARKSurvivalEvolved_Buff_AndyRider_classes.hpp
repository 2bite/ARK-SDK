#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_AndyRider_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_AndyRider.Buff_AndyRider_C
// 0x0014 (0x098C - 0x0978)
class ABuff_AndyRider_C : public ABuff_Base_C
{
public:
	class AShooterCharacter*                           CharHidden;                                               // 0x0978(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CharRelativeScale;                                        // 0x0980(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_AndyRider.Buff_AndyRider_C");
		return ptr;
	}


	void HiddenCharDiedUnexpectedly(class APrimalCharacter* Character);
	void BuffTickServer(float* DeltaTime);
	void BPDeactivated(class AActor** ForInstigator);
	void BPSetupForInstigator(class AActor** ForInstigator);
	void BPNotifyPreventDismounting(class APrimalDinoCharacter** FromDino);
	float BPAdjustStatusValueModification(class UPrimalCharacterStatusComponent** ForComponent, TEnumAsByte<EPrimalCharacterStatusValue>* ValueType, float* InAmount, class UClass** DamageTypeClass, bool* bManualModification);
	float BuffAdjustDamage(float* Damage, class AController** EventInstigator, class AActor** DamageCauser, class UClass** TheDamgeType, struct FHitResult* HitInfo);
	bool BPPreventAddingOtherBuff(class UClass** anotherBuffClass);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_AndyRider(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

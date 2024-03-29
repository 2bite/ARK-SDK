#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ExosuitRider_Offline_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_ExosuitRider_Offline.Buff_ExosuitRider_Offline_C
// 0x0023 (0x099B - 0x0978)
class ABuff_ExosuitRider_Offline_C : public APrimalBuff
{
public:
	class APrimalDinoCharacter*                        OwningSuit;                                               // 0x0978(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, SaveGame, IsPlainOldData)
	bool                                               bWantsRider;                                              // 0x0980(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0981(0x0007) MISSED OFFSET
	class APlayerController*                           CallFunc_GetOwnerController_ReturnValue;                  // 0x0988(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterPlayerController*                    K2Node_DynamicCast_AsShooterPlayerController;             // 0x0990(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0998(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x0999(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsPawnAcknowledged_ReturnValue;                  // 0x099A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_ExosuitRider_Offline.Buff_ExosuitRider_Offline_C");
		return ptr;
	}


	float BPAdjustStatusValueModification(class UPrimalCharacterStatusComponent** ForComponent, TEnumAsByte<EPrimalCharacterStatusValue>* ValueType, float* InAmount, class UClass** DamageTypeClass, bool* bManualModification);
	void BPSetupForInstigator(class AActor** ForInstigator);
	bool PreventActorTargeting(class AActor** ByActor);
	float BuffAdjustDamage(float* Damage, class AController** EventInstigator, class AActor** DamageCauser, class UClass** TheDamgeType, struct FHitResult* HitInfo);
	void InitBuff();
	void BPDeactivated(class AActor** ForInstigator);
	void OnOwningSuitDied(class APrimalCharacter* DiedChar);
	void BPInstigatorPossessed(class AController** ByController);
	void UserConstructionScript();
	void WaitForClient();
	void ExecuteUbergraph_Buff_ExosuitRider_Offline(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

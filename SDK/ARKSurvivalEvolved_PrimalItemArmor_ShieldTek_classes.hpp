#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_ShieldTek_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemArmor_ShieldTek.PrimalItemArmor_ShieldTek_C
// 0x001F (0x0C20 - 0x0C01)
class UPrimalItemArmor_ShieldTek_C : public UPrimalItemArmor_Base_Tek_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0C01(0x0003) MISSED OFFSET
	float                                              DurabilityCostPerReflection;                              // 0x0C04(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      MjolnirProjectileClass;                                   // 0x0C08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class FString                                      MjolnirProjectileSoftRef;                                 // 0x0C10(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArmor_ShieldTek.PrimalItemArmor_ShieldTek_C");
		return ptr;
	}


	void BPClientHandleItemNetExecCommand(struct FName* CommandName, class AShooterPlayerController** ForPC, struct FBPNetExecParams* ExecParams);
	void STATIC_PlayHitShieldEffect(bool bLocalOnly);
	bool BPConsumeProjectileImpact(class AShooterProjectile** theProjectile, struct FHitResult* HitResult);
	void BPAddedAttachments();
	void RefreshAmmoMaterial();
	void ClientUpdatedWeaponClipAmmo();
	float STATIC_HandleShieldDamageBlocking(class AShooterCharacter** ForShooterCharacter, float* DamageIn, class AController** EventInstigator, class AActor** DamageCauser, struct FDamageEvent* DamageEvent);
	void ExecuteUbergraph_PrimalItemArmor_ShieldTek(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

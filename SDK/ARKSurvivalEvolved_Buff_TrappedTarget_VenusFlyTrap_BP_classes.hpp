#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TrappedTarget_VenusFlyTrap_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_TrappedTarget_VenusFlyTrap_BP.Buff_TrappedTarget_VenusFlyTrap_BP_C
// 0x02D5 (0x0C4D - 0x0978)
class ABuff_TrappedTarget_VenusFlyTrap_BP_C : public APrimalBuff
{
public:
	struct FVector                                     InitialVelocity;                                          // 0x0978(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InstigatorInitialVelocityFactor;                          // 0x0984(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxMassForLaunch;                                         // 0x0988(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PrevActorLocation;                                        // 0x098C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastStruggleTime;                                         // 0x0998(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StruggleCooldown;                                         // 0x09A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentStruggleAmount;                                    // 0x09A4(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AmountToIncreaseStruggle;                                 // 0x09A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StruggleAmountToBreakFree;                                // 0x09AC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ReduceFallDamageOnCarryReleaseBuff;                       // 0x09B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AntiStruggleInterpSpeed;                                  // 0x09B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x09BC(0x0004) MISSED OFFSET
	struct FHUDElement                                 StruggleHUDElement;                                       // 0x09C0(0x0150) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              CurrentHUDStruggleAmount;                                 // 0x0B10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0B14(0x0004) MISSED OFFSET
	double                                             LastDOTTick;                                              // 0x0B18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EquipmentDurabilityDamagePerSecond;                       // 0x0B20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0B24(0x0004) MISSED OFFSET
	class FString                                      StruggleHUDTextString;                                    // 0x0B28(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               IsHostileBuff;                                            // 0x0B38(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0B39(0x0007) MISSED OFFSET
	struct FStatusValueModifierDescription             HostileBuffDescription;                                   // 0x0B40(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UParticleSystem*                             GrindFX;                                                  // 0x0B90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxWeaponItemQualityToStruggle;                           // 0x0B98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxDuration;                                              // 0x0B9C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       AttachSocket;                                             // 0x0BA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FHUDRichTextOverlayData                     StruggleHUDRichTextOverlay;                               // 0x0BA8(0x0060) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              StruggleHUDDisplayPercent;                                // 0x0C08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Temp_bool_True_if_break_was_hit_Variable;                 // 0x0C0C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x0C0D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x0C0E(0x0002) MISSED OFFSET
	TArray<class AShooterPlayerController*>            CallFunc_GetAllLocalPlayerControllers_ReturnValue;        // 0x0C10(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                CallFunc_Array_Length_ReturnValue;                        // 0x0C20(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Loop_Counter_Variable;                           // 0x0C24(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue;                         // 0x0C28(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0C29(0x0007) MISSED OFFSET
	class AShooterPlayerController*                    CallFunc_Array_Get_Item;                                  // 0x0C30(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x0C38(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0C39(0x0007) MISSED OFFSET
	class AShooterCharacter*                           CallFunc_GetPlayerCharacter_ReturnValue;                  // 0x0C40(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue;                          // 0x0C48(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ObjectObject_ReturnValue;             // 0x0C4C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_TrappedTarget_VenusFlyTrap_BP.Buff_TrappedTarget_VenusFlyTrap_BP_C");
		return ptr;
	}


	bool BPPreventOnStartJump();
	void Struggle();
	void Validate();
	void SetIsHostileBuff(bool NewSetting);
	struct FStatusValueModifierDescription STATIC_GetBuffDescription();
	void UpdateStruggle(float DeltaTime);
	void BPActivated(class AActor** ForInstigator);
	void BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements);
	void BuffTickServer(float* DeltaTime);
	void BPHandleOnStartAltFire(bool* bFromGamepad);
	void TryStruggle();
	bool PreventJump();
	void BPHandleOnStartFire(bool* bFromGamepad);
	float GetBuffPostprocessIntensity();
	void BPDeactivated(class AActor** ForInstigator);
	void BPSetupForInstigator(class AActor** ForInstigator);
	void UserConstructionScript();
	void ServerRequestStruggle();
	void ClientOnStruggle();
	void ExecuteUbergraph_Buff_TrappedTarget_VenusFlyTrap_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Gen2_AreaBuff_Space_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C
// 0x00BA (0x0E18 - 0x0D5E)
class AGen2_AreaBuff_Space_C : public AGen2_AreaBuff_Base_C
{
public:
	unsigned char                                      UnknownData00[0x2];                                       // 0x0D5E(0x0002) MISSED OFFSET
	class UParticleSystemComponent*                    SPACEMOTES;                                               // 0x0D60(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCharacterMovementComponent*                 InstigatorMoveComponent;                                  // 0x0D68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastTouchTime;                                            // 0x0D70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastFlyTime;                                              // 0x0D78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AShooterCharacter*                           Player;                                                   // 0x0D80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class APrimalDinoCharacter*                        Dino;                                                     // 0x0D88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsFlyer;                                                  // 0x0D90(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0D91(0x0007) MISSED OFFSET
	double                                             NextLaunchTime;                                           // 0x0D98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxSwimSpeed;                                             // 0x0DA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxFlySpeed;                                              // 0x0DA4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UPrimalCharacterStatusComponent*             statusComponent;                                          // 0x0DA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsTryingToLand;                                           // 0x0DB0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRegisteredSpaceMotes;                                    // 0x0DB1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0DB2(0x0006) MISSED OFFSET
	double                                             CallFunc_Add_DoubleFloat_ReturnValue;                     // 0x0DB8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterCharacter*                           K2Node_CustomEvent_Player2;                               // 0x0DC0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalDinoCharacter*                        K2Node_CustomEvent_Dino5;                                 // 0x0DC8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterCharacter*                           K2Node_CustomEvent_player;                                // 0x0DD0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalDinoCharacter*                        K2Node_CustomEvent_Dino4;                                 // 0x0DD8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsInstigatorClimbing_IsClimbing;                 // 0x0DE0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0DE1(0x0007) MISSED OFFSET
	class APrimalDinoCharacter*                        K2Node_CustomEvent_Dino3;                                 // 0x0DE8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalDinoCharacter*                        K2Node_CustomEvent_Dino2;                                 // 0x0DF0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalDinoCharacter*                        K2Node_CustomEvent_Dino;                                  // 0x0DF8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             CallFunc_GetNetworkTimeInSeconds_ReturnValue;             // 0x0E00(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TArray<class AActor*>                              CallFunc_LineTraceSingle_NEW_ActorsToIgnore_RefProperty;  // 0x0E08(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Gen2_AreaBuff_Space.Gen2_AreaBuff_Space_C");
		return ptr;
	}


	void DinoInstigatorReceivedRider(class AShooterCharacter** Rider);
	void DinoInstigatorClearedRider();
	void UpdateDayCycleManager();
	bool AllowFalling();
	void HasBuffToIgnoreZeroG(bool* Ignore);
	bool BPPreventNotifySound(class USoundBase** SoundIn);
	void ClearRotation();
	void IsInstigatorClimbing(bool* IsClimbing);
	void RestorePlayerMovement();
	void InitializePlayerZeroGMovement();
	void RestoreDinoMovement();
	void InitialzeDinoZeroGMovement();
	struct FVector BPOverrideCharacterNewFallVelocity(float* DeltaTime, struct FVector* InitialVelocity, struct FVector* Gravity);
	void StopFlying();
	void BuffTickServer(float* DeltaTime);
	void STATIC_CheckGround();
	void BPDeactivated(class AActor** ForInstigator);
	float BPGetGravityZScale(float* currentScale);
	void StartFlying();
	void BPOnInstigatorMovementModeChangedNotify(TEnumAsByte<EMovementMode>* PrevMovementMode, unsigned char* PreviousCustomMode, TEnumAsByte<EMovementMode>* NewMovementMode, unsigned char* NewCustomMode);
	bool BPPreventInstigatorMovementMode(TEnumAsByte<EMovementMode>* NewMovementMode, unsigned char* NewCustomMode);
	void BPSetupForInstigator(class AActor** ForInstigator);
	void UserConstructionScript();
	void DinoMounted(class AShooterCharacter* Player, class APrimalDinoCharacter* Dino);
	void DinoUnmounted(class AShooterCharacter* Player, class APrimalDinoCharacter* Dino);
	void FlyingDinoLanded(class APrimalDinoCharacter* Dino);
	void FlyingDinoStartLanding(class APrimalDinoCharacter* Dino);
	void FlyingDinoLandingInterrupted(class APrimalDinoCharacter* Dino);
	void ExecuteUbergraph_Gen2_AreaBuff_Space(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

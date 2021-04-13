#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Dino_Character_BP_RootMotion_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Dino_Character_BP_RootMotion.Dino_Character_BP_RootMotion_C
// 0x0070 (0x2208 - 0x2198)
class ADino_Character_BP_RootMotion_C : public ADino_Character_BP_C
{
public:
	TEnumAsByte<ERootMotionMovementMode>               MovementMode;                                             // 0x2198(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HadRequestedVelocity;                                     // 0x2199(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x219A(0x0006) MISSED OFFSET
	double                                             LastLocomotionChange;                                     // 0x21A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TransitionBlock;                                          // 0x21A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    currentRotation;                                          // 0x21AC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    desiredRotation;                                          // 0x21B8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LocomotionDone;                                           // 0x21C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x21C5(0x0003) MISSED OFFSET
	struct FRotator                                    NetDesiredRotation;                                       // 0x21C8(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TurnToFaceLoc;                                            // 0x21D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x21D5(0x0003) MISSED OFFSET
	class AActor*                                      TurnToFaceActorTarget;                                    // 0x21D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               TurnToFaceActor;                                          // 0x21E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x21E1(0x0003) MISSED OFFSET
	struct FVector                                     TurnToFaceLocTarget;                                      // 0x21E4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FallTimer;                                                // 0x21F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Falling;                                                  // 0x21F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x21F5(0x0003) MISSED OFFSET
	float                                              IKStrength;                                               // 0x21F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              K2Node_Event_DeltaSeconds;                                // 0x21FC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                K2Node_CustomEvent_Delta;                                 // 0x2200(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue;                          // 0x2204(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Dino_Character_BP_RootMotion.Dino_Character_BP_RootMotion_C");
		return ptr;
	}


	void WantsLocomotionTransition(bool* WantsTransition);
	void GetMovementMontage(TEnumAsByte<ERootMotionMovementMode> Mode, class UAnimMontage** Montage);
	void IsLocomotionBlocked(bool* bLocked);
	void TickLocomotion();
	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
	void DeltaBlockTransition(int Delta);
	void AnimNotify_LocomotionDone();
	void ExecuteUbergraph_Dino_Character_BP_RootMotion(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

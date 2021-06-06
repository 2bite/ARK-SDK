#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_WaterCurrentFlowForce_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_WaterCurrentFlowForce.Buff_WaterCurrentFlowForce_C
// 0x0048 (0x09A8 - 0x0960)
class ABuff_WaterCurrentFlowForce_C : public ABuff_Base_C
{
public:
	float                                              OrigRepIntervalMult;                                      // 0x0960(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UpdatedRepInterval;                                       // 0x0964(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0965(0x0003) MISSED OFFSET
	struct FVector                                     WaterCurrentForce;                                        // 0x0968(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0974(0x0004) MISSED OFFSET
	class USplineComponent*                            SplineToFollow;                                           // 0x0978(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WaterCurrentForceMultiplier;                              // 0x0980(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DebugOffset;                                              // 0x0984(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OutOfWaterForce;                                          // 0x0990(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0994(0x0004) MISSED OFFSET
	class APrimalCharacter*                            OwningPrimalChar;                                         // 0x0998(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDebugVelocity;                                           // 0x09A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseReplicatedFlowForce;                                  // 0x09A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseInterpolatedFlowVector;                               // 0x09A2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsWaitingForActivation;                                  // 0x09A3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WaterCurrentForceMultiplierRaining;                       // 0x09A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_WaterCurrentFlowForce.Buff_WaterCurrentFlowForce_C");
		return ptr;
	}


	void OnClearPassenger(class APrimalCharacter* Passenger, class APrimalDinoCharacter* ForDino, int SeatIndex);
	void OnClearRider(class AShooterCharacter* forCharacter, class APrimalDinoCharacter* ForDino);
	void On_Set_Passenger(class APrimalCharacter* Passenger, class APrimalDinoCharacter* ForDino, int SeatIndex);
	void OnSetRider(class AShooterCharacter* forCharacter, class APrimalDinoCharacter* ForDino);
	void SetWaterCurrentBuffActivation(bool bActive);
	bool BPCustomAllowAddBuff(class APrimalCharacter** forCharacter, class AActor** DamageCauser);
	void BPSetupForInstigator(class AActor** ForInstigator);
	void BPOnInstigatorMovementModeChangedNotify(TEnumAsByte<EMovementMode>* PrevMovementMode, unsigned char* PreviousCustomMode, TEnumAsByte<EMovementMode>* NewMovementMode, unsigned char* NewCustomMode);
	struct FVector BP_OverrideCharacterSwimmingVelocity(float* DeltaTime, struct FVector* InitialVelocity, struct FVector* Gravity, float* FluidFriction, float* NetBuoyancy);
	bool AllowPostProcessEffect();
	void BuffTickServer(float* DeltaTime);
	void BPDeactivated(class AActor** ForInstigator);
	void BPActivated(class AActor** ForInstigator);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_WaterCurrentFlowForce(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

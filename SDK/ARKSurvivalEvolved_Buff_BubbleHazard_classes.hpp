#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_BubbleHazard_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_BubbleHazard.Buff_BubbleHazard_C
// 0x0055 (0x09CD - 0x0978)
class ABuff_BubbleHazard_C : public ABuff_Base_C
{
public:
	class UParticleSystemComponent*                    BubbleBurst;                                              // 0x0978(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        BubbleMesh;                                               // 0x0980(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Mutliplyer;                                               // 0x0988(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CurrentLocation;                                          // 0x098C(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               InitializedLocation;                                      // 0x0998(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0999(0x0003) MISSED OFFSET
	float                                              currentScale;                                             // 0x099C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastStruggleTime;                                         // 0x09A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                StruggleTimes;                                            // 0x09A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                RequiredStruggleTimeToGetOut;                             // 0x09AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               StartedToPop;                                             // 0x09B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x09B1(0x0003) MISSED OFFSET
	float                                              DurationAfterStopUpwardMovement;                          // 0x09B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinimumDurationUnlessReachSurface;                        // 0x09B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_Location;                              // 0x09BC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_Scale;                                 // 0x09C8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_FloatFloat_ReturnValue;               // 0x09CC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_BubbleHazard.Buff_BubbleHazard_C");
		return ptr;
	}


	void BPDeactivated(class AActor** ForInstigator);
	struct FVector BP_OverrideCharacterFlyingVelocity(float* DeltaTime, struct FVector* InitialVelocity, struct FVector* Gravity);
	void PopBubble();
	bool BPServerHandleNetExecCommand(class APlayerController** FromPC, struct FName* CommandName, struct FBPNetExecParams* ExecParams);
	void BPHandleOnStartFire(bool* bFromGamepad);
	void BuffTickClient(float* DeltaTime);
	void AttachBubble(const struct FVector& BubbleLocation);
	struct FVector BP_OverrideCharacterSwimmingVelocity(float* DeltaTime, struct FVector* InitialVelocity, struct FVector* Gravity, float* FluidFriction, float* NetBuoyancy);
	void BuffTickServer(float* DeltaTime);
	void BPSetupForInstigator(class AActor** ForInstigator);
	void UserConstructionScript();
	void InitLocation(const struct FVector& Location, float Scale);
	void ExecuteUbergraph_Buff_BubbleHazard(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

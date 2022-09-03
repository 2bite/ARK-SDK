#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_DKaijuDelayedLightningOnKaiju_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_DKaijuDelayedLightningOnKaiju.Buff_DKaijuDelayedLightningOnKaiju_C
// 0x008C (0x0A0C - 0x0980)
class ABuff_DKaijuDelayedLightningOnKaiju_C : public ABuff_Base_AoE_C
{
public:
	class UBoxComponent*                               Collision;                                                // 0x0980(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FlameOilSlicksRadius;                                     // 0x0988(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DelayBeforeIgnite;                                        // 0x098C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     OriginLocation;                                           // 0x0990(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxDistanceFromOriginLocation;                            // 0x099C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              timeBeforeFadeout;                                        // 0x09A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x09A4(0x0004) MISSED OFFSET
	class APrimalStructure*                            collidingStructure;                                       // 0x09A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               hasStructure;                                             // 0x09B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasFadedOut;                                             // 0x09B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x09B2(0x0002) MISSED OFFSET
	float                                              LightningAOEDamageFrequency;                              // 0x09B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               OnKaiju;                                                  // 0x09B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x09B9(0x0007) MISSED OFFSET
	class ADesertKaiju_Character_BP_C*                 Kaiju;                                                    // 0x09C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	double                                             StartTime;                                                // 0x09C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Deactivated;                                              // 0x09D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x09D1(0x0003) MISSED OFFSET
	struct FVector                                     RelativeLoc;                                              // 0x09D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       ClosestSocket;                                            // 0x09E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     SpawnClosestSocketLoc;                                    // 0x09E8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue;                 // 0x09F4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalStructure*                            K2Node_CustomEvent_NewParam;                              // 0x0A00(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Event_DeltaSeconds;                                // 0x0A08(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_DKaijuDelayedLightningOnKaiju.Buff_DKaijuDelayedLightningOnKaiju_C");
		return ptr;
	}


	void BPActivated(class AActor** ForInstigator);
	void BPDeactivated(class AActor** ForInstigator);
	void BuffTickServer(float* DeltaTime);
	void BPSetupForInstigator(class AActor** ForInstigator);
	void MaybeRotate();
	void UserConstructionScript();
	void SetStructure(class APrimalStructure* NewParam);
	void Client_DeactivateParticle();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_Buff_DKaijuDelayedLightningOnKaiju(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

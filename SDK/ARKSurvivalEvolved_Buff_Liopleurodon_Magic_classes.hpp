#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Liopleurodon_Magic_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_Liopleurodon_Magic.Buff_Liopleurodon_Magic_C
// 0x005C (0x09D8 - 0x097C)
class ABuff_Liopleurodon_Magic_C : public ABuff_CrateBoosting_Base_C
{
public:
	float                                              CrateCheckRadius;                                         // 0x097C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             CrateBuffedParticle;                                      // 0x0980(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETraceTypeQuery>                       TraceType;                                                // 0x0988(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0989(0x0007) MISSED OFFSET
	class APrimalStructureItemContainer_SupplyCrate*   K2Node_CustomEvent_TargetCrate;                           // 0x0990(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue;                 // 0x0998(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x09A4(0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAtLocation_ReturnValue;              // 0x09A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_IsClosed_Variable;                              // 0x09B0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_ShouldHide;                            // 0x09B1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x09B2(0x0006) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue;                         // 0x09B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsTimeSince_ReturnValue;                         // 0x09C0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Has_Been_Initd_Variable;                        // 0x09C1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x09C2(0x0006) MISSED OFFSET
	TArray<class AActor*>                              CallFunc_SphereTraceMulti_NEW_ActorsToIgnore_RefProperty; // 0x09C8(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Liopleurodon_Magic.Buff_Liopleurodon_Magic_C");
		return ptr;
	}


	void BPResetBuffStart();
	void STATIC_BuffTickClient(float* DeltaTime);
	void STATIC_BPDrawBuffStatusHUD(class AShooterHUD** HUD, float* XPos, float* YPos, float* ScaleMult);
	void UserConstructionScript();
	void SpawnCrateBuffedParticle(class APrimalStructureItemContainer_SupplyCrate* TargetCrate);
	void HideTimer(bool ShouldHide);
	void RevealBuffTimerAfterDelay();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Buff_Liopleurodon_Magic(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

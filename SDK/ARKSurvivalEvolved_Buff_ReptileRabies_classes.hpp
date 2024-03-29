#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ReptileRabies_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_ReptileRabies.Buff_ReptileRabies_C
// 0x00C9 (0x0A41 - 0x0978)
class ABuff_ReptileRabies_C : public ABuff_Base_Disease_Low_GasMaskable_C
{
public:
	class USphereComponent*                            TriggerSphere;                                            // 0x0978(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CoughRadius;                                              // 0x0980(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DiseaseSpreadChance_Touch;                                // 0x0984(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DiseaseSpreadChance_Cough;                                // 0x0988(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x098C(0x0004) MISSED OFFSET
	class UClass*                                      Ref_OriginDinoClass;                                      // 0x0990(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      K2Node_ComponentBoundEvent_OtherActor;                    // 0x0998(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UPrimitiveComponent*                         K2Node_ComponentBoundEvent_OtherComp;                     // 0x09A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                K2Node_ComponentBoundEvent_OtherBodyIndex;                // 0x09A8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ComponentBoundEvent_bFromSweep;                    // 0x09AC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x09AD(0x0003) MISSED OFFSET
	struct FHitResult                                  K2Node_ComponentBoundEvent_SweepResult;                   // 0x09B0(0x0088) (OutParm, Transient, DuplicateTransient, ReferenceParm)
	class AShooterCharacter*                           K2Node_DynamicCast_AsShooterCharacter;                    // 0x0A38(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0A40(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_ReptileRabies.Buff_ReptileRabies_C");
		return ptr;
	}


	void BuffTickServer(float* DeltaTime);
	bool BPCustomAllowAddBuff(class APrimalCharacter** forCharacter, class AActor** DamageCauser);
	void TryApplyDisease(class APrimalCharacter* TheTarget, float InfectChance);
	void AllowContagionTarget(class AActor* Target, bool* bAllow);
	void BPSetupForInstigator(class AActor** ForInstigator);
	void Cough();
	void NotifyBumpedPawn(class APrimalCharacter** BumpedPawn);
	void NotifyBumpedByPawn(class APrimalCharacter** BumpedBy);
	void UserConstructionScript();
	void BndEvt__TriggerSphere_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, struct FHitResult* SweepResult);
	void ExecuteUbergraph_Buff_ReptileRabies(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

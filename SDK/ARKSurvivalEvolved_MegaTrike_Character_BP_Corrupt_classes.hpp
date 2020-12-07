#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MegaTrike_Character_BP_Corrupt_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MegaTrike_Character_BP_Corrupt.MegaTrike_Character_BP_Corrupt_C
// 0x0210 (0x2B28 - 0x2918)
class AMegaTrike_Character_BP_Corrupt_C : public ATrike_Character_BP_Corrupt_C
{
public:
	class UDinoCharacterStatusComponent_BP_Trike_Mega_C* DinoCharacterStatus_BP_Trike_Mega_C1;                     // 0x2918(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	double                                             TimeOfLastRamHitCheck;                                    // 0x2920(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinDeltaTimeForRamChecks;                                 // 0x2928(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x292C(0x0004) MISSED OFFSET
	class AActor*                                      K2Node_CustomEvent_OtherActor;                            // 0x2930(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UPrimitiveComponent*                         K2Node_CustomEvent_OtherComp;                             // 0x2938(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                K2Node_CustomEvent_OtherBodyIndex;                        // 0x2940(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_bFromSweep;                            // 0x2944(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x2945(0x0003) MISSED OFFSET
	struct FHitResult                                  K2Node_CustomEvent_SweepResult;                           // 0x2948(0x0088) (OutParm, Transient, DuplicateTransient, ReferenceParm)
	class APrimalStructure*                            K2Node_DynamicCast_AsPrimalStructure;                     // 0x29D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x29D8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x29D9(0x0007) MISSED OFFSET
	class APrimalCharacter*                            K2Node_DynamicCast_AsPrimalCharacter;                     // 0x29E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x29E8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsAlliedWithOtherTeam_ReturnValue;               // 0x29E9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x29EA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x29EB(0x0001) MISSED OFFSET
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue;                 // 0x29EC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x29F8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x29F9(0x0003) MISSED OFFSET
	struct FRotator                                    CallFunc_K2_GetActorRotation_ReturnValue;                 // 0x29FC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TArray<TEnumAsByte<EObjectTypeQuery>>              K2Node_MakeArray_Array;                                   // 0x2A08(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                                     CallFunc_Conv_RotatorToVector_ReturnValue;                // 0x2A18(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Multiply_VectorFloat_ReturnValue;                // 0x2A24(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue;                // 0x2A30(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue;                    // 0x2A38(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x2A44(0x0004) MISSED OFFSET
	TArray<class AActor*>                              CallFunc_LineTraceSingleForObjects_ActorsToIgnore_RefProperty;// 0x2A48(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)
	struct FHitResult                                  CallFunc_LineTraceSingleForObjects_OutHit;                // 0x2A58(0x0088) (Transient, DuplicateTransient)
	bool                                               CallFunc_LineTraceSingleForObjects_ReturnValue;           // 0x2AE0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x2AE1(0x0007) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue;                         // 0x2AE8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsTimeSince_ReturnValue;                         // 0x2AF0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ObjectObject_ReturnValue;               // 0x2AF1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue2;                         // 0x2AF2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ObjectObject_ReturnValue2;              // 0x2AF3(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate;                     // 0x2AF4(0x0014) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_BooleanAND_ReturnValue3;                         // 0x2B04(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x2B05(0x0003) MISSED OFFSET
	float                                              K2Node_CustomEvent_Duration;                              // 0x2B08(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x2B0C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x2B0D(0x0003) MISSED OFFSET
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue2;               // 0x2B10(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_HitSomething2;                         // 0x2B18(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_HitSomething;                          // 0x2B19(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue2;                           // 0x2B1A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x5];                                       // 0x2B1B(0x0005) MISSED OFFSET
	class APrimalCharacter*                            CallFunc_Array_Contains_ItemToFind_RefProperty;           // 0x2B20(0x0008) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MegaTrike_Character_BP_Corrupt.MegaTrike_Character_BP_Corrupt_C");
		return ptr;
	}


	void ShowSmallDino(class APrimalCharacter* Actor, const struct FHitResult& Hit_Info);
	void Stop_Ram_Attack_Buildup();
	void HandleRamStructureCollision();
	void CanDamageActor(class AActor* Target, bool* TargetCanBeDamaged);
	void UserConstructionScript();
	void OnComponentBeginOverlap_Event(class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex, bool* bFromSweep, struct FHitResult* SweepResult);
	void OnRamStarted_Copy(float Duration);
	void ClientOnRamEnded_Copy(bool HitSomething);
	void Private__RamEnded_Copy(bool HitSomething);
	void ExecuteUbergraph_MegaTrike_Character_BP_Corrupt(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

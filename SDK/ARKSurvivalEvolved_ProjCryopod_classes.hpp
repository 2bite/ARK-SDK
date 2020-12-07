#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjCryopod_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ProjCryopod.ProjCryopod_C
// 0x021C (0x087C - 0x0660)
class AProjCryopod_C : public AShooterProjectile
{
public:
	class UParticleSystemComponent*                    cryoPod_FX;                                               // 0x0660(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             Audio1;                                                   // 0x0668(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue;                         // 0x0670(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FHitResult                                  K2Node_Event_Result;                                      // 0x0678(0x0088) (OutParm, Transient, DuplicateTransient, ReferenceParm)
	class AActor*                                      CallFunc_GetOwner_ReturnValue;                            // 0x0700(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AWeapEmptyCryopod_C*                         K2Node_DynamicCast_AsWeapEmptyCryopod_C;                  // 0x0708(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0710(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0711(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue;                 // 0x0714(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AStructurePreventionZoneVolume*              CallFunc_BPIsWithinAnyStructurePreventionVolume_ReturnValue;// 0x0720(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UPrimalItem_WeaponEmptyCryopod_C*            K2Node_DynamicCast_AsPrimalItem_WeaponEmptyCryopod_C;     // 0x0728(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x0730(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x0731(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0732(0x0006) MISSED OFFSET
	struct FCustomItemData                             CallFunc_GetCustomItemData_OutData;                       // 0x0738(0x0078) (Transient, DuplicateTransient)
	bool                                               CallFunc_GetCustomItemData_ReturnValue;                   // 0x07B0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x07B1(0x0007) MISSED OFFSET
	class UClass*                                      CallFunc_Array_Get_Item;                                  // 0x07B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_IsChildOfClasses_ReturnValue;                    // 0x07C0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x07C4(0x0004) MISSED OFFSET
	class UClass*                                      K2Node_ClassDynamicCast_AsCharacter;                      // 0x07C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ClassDynamicCast_CastSuccess;                      // 0x07D0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue;                         // 0x07D1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x6];                                       // 0x07D2(0x0006) MISSED OFFSET
	class UObject*                                     CallFunc_GetClassDefaultObject_ReturnValue;               // 0x07D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalDinoCharacter*                        K2Node_DynamicCast_AsPrimalDinoCharacter;                 // 0x07E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast3_CastSuccess;                          // 0x07E8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x07E9(0x0007) MISSED OFFSET
	class AActor*                                      CallFunc_GetOwner_ReturnValue2;                           // 0x07F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterCharacter*                           K2Node_DynamicCast_AsShooterCharacter;                    // 0x07F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast4_CastSuccess;                          // 0x0800(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0801(0x0003) MISSED OFFSET
	float                                              CallFunc_Divide_FloatFloat_ReturnValue;                   // 0x0804(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APlayerController*                           CallFunc_GetOwnerController_ReturnValue;                  // 0x0808(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_K2_GetActorRotation_ReturnValue;                 // 0x0810(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x081C(0x0004) MISSED OFFSET
	class AShooterPlayerController*                    K2Node_DynamicCast_AsShooterPlayerController;             // 0x0820(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast5_CastSuccess;                          // 0x0828(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x0829(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_TryDeploy_Deployed;                              // 0x082A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x1];                                       // 0x082B(0x0001) MISSED OFFSET
	struct FVector                                     CallFunc_TryDeploy_NewLocation;                           // 0x082C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class FString                                      CallFunc_TryDeploy_FailureReason;                         // 0x0838(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class FString                                      CallFunc_Concat_StrStr_ReturnValue;                       // 0x0848(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FRotator                                    CallFunc_K2_GetActorRotation_ReturnValue2;                // 0x0858(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue2;                // 0x0864(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_K2_GetActorRotation_ReturnValue3;                // 0x0870(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ProjCryopod.ProjCryopod_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnExplode(struct FHitResult* Result);
	void ExecuteUbergraph_ProjCryopod(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

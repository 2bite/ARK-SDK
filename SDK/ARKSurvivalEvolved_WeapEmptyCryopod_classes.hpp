#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapEmptyCryopod_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapEmptyCryopod.WeapEmptyCryopod_C
// 0x0688 (0x14F0 - 0x0E68)
class AWeapEmptyCryopod_C : public APrimalWeaponGrenade
{
public:
	class UAudioComponent*                             CatchingSFX;                                              // 0x0E68(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    FX_Captured_1P;                                           // 0x0E70(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    FX_CryoPod_1P;                                            // 0x0E78(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    FX_Captured_3P;                                           // 0x0E80(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    FX_CryoPod_3P;                                            // 0x0E88(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Cryopod3P;                                                // 0x0E90(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Cryopod1P;                                                // 0x0E98(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Capturing;                                                // 0x0EA0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0EA1(0x0007) MISSED OFFSET
	class APrimalDinoCharacter*                        CapturingDino;                                            // 0x0EA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	double                                             StartedCapturing;                                         // 0x0EB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    CaptureFX;                                                // 0x0EB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NewVar;                                                   // 0x0EC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Temp_int_Loop_Counter_Variable;                           // 0x0EC4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue;                          // 0x0EC8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0ECC(0x0004) MISSED OFFSET
	class AActor*                                      CallFunc_GetOwner_ReturnValue;                            // 0x0ED0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TArray<class AActor*>                              K2Node_MakeArray_Array;                                   // 0x0ED8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue;                 // 0x0EE8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0EF4(0x0004) MISSED OFFSET
	class AActor*                                      CallFunc_GetOwner_ReturnValue2;                           // 0x0EF8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue;                    // 0x0F00(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0F0C(0x0004) MISSED OFFSET
	TArray<class AActor*>                              K2Node_MakeArray_Array2;                                  // 0x0F10(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class AShooterCharacter*                           K2Node_DynamicCast_AsShooterCharacter;                    // 0x0F20(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0F28(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0F29(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue2;                // 0x0F2C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_GetControlRotation_ReturnValue;                  // 0x0F38(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue2;                   // 0x0F44(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetForwardVector_ReturnValue;                    // 0x0F50(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Multiply_VectorFloat_ReturnValue;                // 0x0F5C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterCharacter*                           K2Node_DynamicCast_AsShooterCharacter2;                   // 0x0F68(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x0F70(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0F71(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue3;                   // 0x0F74(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_GetControlRotation_ReturnValue2;                 // 0x0F80(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x0F8C(0x0004) MISSED OFFSET
	struct FHitResult                                  CallFunc_SphereTraceSingle_NEW_OutHit;                    // 0x0F90(0x0088) (Transient, DuplicateTransient)
	bool                                               CallFunc_SphereTraceSingle_NEW_ReturnValue;               // 0x1018(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x1019(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_GetForwardVector_ReturnValue2;                   // 0x101C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakHitResult_Location;                         // 0x1028(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakHitResult_Normal;                           // 0x1034(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakHitResult_ImpactPoint;                      // 0x1040(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakHitResult_ImpactNormal;                     // 0x104C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UPhysicalMaterial*                           CallFunc_BreakHitResult_PhysMat;                          // 0x1058(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      CallFunc_BreakHitResult_HitActor;                         // 0x1060(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UPrimitiveComponent*                         CallFunc_BreakHitResult_HitComponent;                     // 0x1068(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       CallFunc_BreakHitResult_HitBoneName;                      // 0x1070(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_BreakHitResult_HitItem;                          // 0x1078(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BreakHitResult_BlockingHit;                      // 0x107C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x107D(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_Multiply_VectorFloat_ReturnValue2;               // 0x1080(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x108C(0x0004) MISSED OFFSET
	class APrimalDinoCharacter*                        K2Node_DynamicCast_AsPrimalDinoCharacter;                 // 0x1090(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast3_CastSuccess;                          // 0x1098(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x1099(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue4;                   // 0x109C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_CanCapture_Capture;                              // 0x10A8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData11[0x7];                                       // 0x10A9(0x0007) MISSED OFFSET
	struct FHitResult                                  CallFunc_SphereTraceSingle_NEW_OutHit2;                   // 0x10B0(0x0088) (Transient, DuplicateTransient)
	bool                                               CallFunc_SphereTraceSingle_NEW_ReturnValue2;              // 0x1138(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x1139(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_BreakHitResult_Location2;                        // 0x113C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakHitResult_Normal2;                          // 0x1148(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakHitResult_ImpactPoint2;                     // 0x1154(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakHitResult_ImpactNormal2;                    // 0x1160(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData13[0x4];                                       // 0x116C(0x0004) MISSED OFFSET
	class UPhysicalMaterial*                           CallFunc_BreakHitResult_PhysMat2;                         // 0x1170(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      CallFunc_BreakHitResult_HitActor2;                        // 0x1178(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UPrimitiveComponent*                         CallFunc_BreakHitResult_HitComponent2;                    // 0x1180(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       CallFunc_BreakHitResult_HitBoneName2;                     // 0x1188(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_BreakHitResult_HitItem2;                         // 0x1190(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BreakHitResult_BlockingHit2;                     // 0x1194(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x1195(0x0003) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue;                         // 0x1198(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             CallFunc_TimeSeconds_ReturnValue;                         // 0x11A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ObjectObject_ReturnValue;             // 0x11A8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x11A9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData15[0x6];                                       // 0x11AA(0x0006) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue2;                        // 0x11B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_TimeSince_ReturnValue;                           // 0x11B8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData16[0x4];                                       // 0x11BC(0x0004) MISSED OFFSET
	struct FARKDinoData                                CallFunc_GetDinoData_OutDinoData;                         // 0x11C0(0x0040) (Transient, DuplicateTransient)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue;                  // 0x1200(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData17[0x7];                                       // 0x1201(0x0007) MISSED OFFSET
	TArray<class FString>                              K2Node_MakeArray_Array3;                                  // 0x1208(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FCustomItemByteArray                        K2Node_MakeStruct_CustomItemByteArray;                    // 0x1218(0x0010) (Transient, DuplicateTransient)
	TArray<class UClass*>                              K2Node_MakeArray_Array4;                                  // 0x1228(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<class UObject*>                             K2Node_MakeArray_Array5;                                  // 0x1238(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<class APrimalStructureExplosive*>           CallFunc_GetAllAttachedExplosives_ReturnValue;            // 0x1248(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                CallFunc_Array_Length_ReturnValue;                        // 0x1258(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData18[0x4];                                       // 0x125C(0x0004) MISSED OFFSET
	class APrimalStructureExplosive*                   CallFunc_Array_Get_Item;                                  // 0x1260(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue;                         // 0x1268(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x1269(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData19[0x6];                                       // 0x126A(0x0006) MISSED OFFSET
	TArray<struct FName>                               K2Node_MakeArray_Array6;                                  // 0x1270(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x1280(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_CanCapture_Capture2;                             // 0x1281(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData20[0x6];                                       // 0x1282(0x0006) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue3;                        // 0x1288(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             CallFunc_TimeSeconds_ReturnValue2;                        // 0x1290(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             CallFunc_Conv_FloatToDouble_ReturnValue;                  // 0x1298(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             CallFunc_Add_DoubleDouble_ReturnValue;                    // 0x12A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_IncludeInstigator;                     // 0x12A8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData21[0x7];                                       // 0x12A9(0x0007) MISSED OFFSET
	class UAnimMontage*                                K2Node_CustomEvent_TPV;                                   // 0x12B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UAnimMontage*                                K2Node_CustomEvent_FPV;                                   // 0x12B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterCharacter*                           CallFunc_GetPawnOwner_ReturnValue;                        // 0x12C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_PlayAnimMontage_ReturnValue;                     // 0x12C8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData22[0x4];                                       // 0x12CC(0x0004) MISSED OFFSET
	class AShooterCharacter*                           CallFunc_GetPawnOwner_ReturnValue2;                       // 0x12D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsLocallyControlled_ReturnValue;                 // 0x12D8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData23[0x7];                                       // 0x12D9(0x0007) MISSED OFFSET
	class UAnimInstance*                               CallFunc_GetAnimInstance_ReturnValue;                     // 0x12E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Montage_Play_ReturnValue;                        // 0x12E8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData24[0x4];                                       // 0x12EC(0x0004) MISSED OFFSET
	class APrimalDinoCharacter*                        K2Node_CustomEvent_CapturingDino;                         // 0x12F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      CallFunc_GetOwner_ReturnValue3;                           // 0x12F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterCharacter*                           K2Node_DynamicCast_AsShooterCharacter3;                   // 0x1300(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast4_CastSuccess;                          // 0x1308(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData25[0x3];                                       // 0x1309(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_Multiply_VectorFloat_ReturnValue3;               // 0x130C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAttached_ReturnValue;                // 0x1318(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue;                   // 0x1320(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_MakeVector_ReturnValue;                          // 0x1324(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_Location3;                             // 0x1330(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    K2Node_CustomEvent_Rotation3;                             // 0x133C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_Radius;                                // 0x1348(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_MakeVector_ReturnValue2;                         // 0x134C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAtLocation_ReturnValue;              // 0x1358(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UAudioComponent*                             CallFunc_PlaySoundAttached_ReturnValue;                   // 0x1360(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_K2_GetActorRotation_ReturnValue;                 // 0x1368(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue3;                // 0x1374(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue2;                  // 0x1380(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_Location2;                             // 0x1384(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    K2Node_CustomEvent_Rotation2;                             // 0x1390(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_Scale;                                 // 0x139C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_MakeVector_ReturnValue3;                         // 0x13A0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData26[0x4];                                       // 0x13AC(0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAtLocation_ReturnValue2;             // 0x13B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UAudioComponent*                             CallFunc_PlaySoundAttached_ReturnValue2;                  // 0x13B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_Location;                              // 0x13C0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    K2Node_CustomEvent_Rotation;                              // 0x13CC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAtLocation_ReturnValue3;             // 0x13D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UAudioComponent*                             CallFunc_PlaySoundAttached_ReturnValue3;                  // 0x13E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue;                // 0x13E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsFirstPerson_ReturnValue;                       // 0x13F0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData27[0x7];                                       // 0x13F1(0x0007) MISSED OFFSET
	TArray<unsigned char>                              CallFunc_GetSaddleData_Bytes;                             // 0x13F8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FCustomItemByteArray                        K2Node_MakeStruct_CustomItemByteArray2;                   // 0x1408(0x0010) (Transient, DuplicateTransient)
	TArray<struct FCustomItemByteArray>                K2Node_MakeArray_Array7;                                  // 0x1418(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FCustomItemByteArrays                       K2Node_MakeStruct_CustomItemByteArrays;                   // 0x1428(0x0010) (Transient, DuplicateTransient)
	TArray<float>                                      CallFunc_Get_Character_StatsAsFloats_Stats;               // 0x1438(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue2;               // 0x1448(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             CallFunc_Subtract_DoubleDouble_ReturnValue;               // 0x1450(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TArray<double>                                     K2Node_MakeArray_Array8;                                  // 0x1458(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FCustomItemDoubles                          K2Node_MakeStruct_CustomItemDoubles;                      // 0x1468(0x0010) (Transient, DuplicateTransient)
	struct FCustomItemData                             K2Node_MakeStruct_CustomItemData;                         // 0x1478(0x0078) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapEmptyCryopod.WeapEmptyCryopod_C");
		return ptr;
	}


	void Get_Character_StatsAsFloats(class APrimalDinoCharacter* Character, TArray<float>* Stats);
	void ReportSuccess();
	void GetSaddleData(TArray<unsigned char>* Bytes);
	void ReceiveBeginPlay();
	void STATIC_UpdateContainsFX(bool ForceOff);
	void BPFiredWeapon();
	void CanCapture(class APrimalDinoCharacter* Dino, bool* Capture);
	bool BPTryFireWeapon();
	void BPStartEquippedNotify();
	void UserConstructionScript();
	void Capture();
	void Ingest();
	void StartIngestion();
	void ClientPlayAnimation(bool IncludeInstigator, class UAnimMontage* TPV, class UAnimMontage* FPV);
	void Reload();
	void StartCaptureLoop(class APrimalDinoCharacter* CapturingDino);
	void EndCaptureLoop();
	void CaptureSuccess(const struct FVector& Location, const struct FRotator& Rotation, float Radius);
	void DeploySuccess(const struct FVector& Location, const struct FRotator& Rotation, float Scale);
	void DeployFailure(const struct FVector& Location, const struct FRotator& Rotation);
	void ExecuteUbergraph_WeapEmptyCryopod(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DesertKaiju_FirstFlockChar_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C
// 0x058F (0x2717 - 0x2188)
class ADesertKaiju_FirstFlockChar_BP_C : public ADino_Character_BP_C
{
public:
	class USphereComponent*                            FlockHitTarget;                                           // 0x2188(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        FlockLocTargetDebugProxy;                                 // 0x2190(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            FlockLocTarget;                                           // 0x2198(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             FlockRootComp;                                            // 0x21A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDinoCharacterStatusComponent_BP_DKFlock_C*  DinoCharacterStatus_BP_DKFlock_C1;                        // 0x21A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class APrimalDinoAIController*                     MyPrimalDinoAIController;                                 // 0x21B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ADesertKaiju_Character_BP_C*                 DesertKaijuOwner;                                         // 0x21B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                FlockSize;                                                // 0x21C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FlockInterpSpeedMin;                                      // 0x21C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FlockInterpSpeedMax;                                      // 0x21C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x21CC(0x0004) MISSED OFFSET
	TArray<struct FBoid>                               FlockData;                                                // 0x21D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UStaticMeshComponent*>                FlockComps;                                               // 0x21E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                FlockShape;                                               // 0x21F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    FlockRotation;                                            // 0x21F4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FlockRadius;                                              // 0x2200(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                FlockRandomSeed;                                          // 0x2204(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    FlockDynamicMaterial;                                     // 0x2208(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Attacking;                                                // 0x2210(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x2211(0x0003) MISSED OFFSET
	float                                              FlockRadiusCombined;                                      // 0x2214(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    FlockLeaderDynamicMaterial;                               // 0x2218(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<int>                                        FlockGroupA;                                              // 0x2220(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                FlockGroupA_Shape;                                        // 0x2230(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x2234(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    FlockGroupA_Material;                                     // 0x2238(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<int>                                        FlockGroupB;                                              // 0x2240(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                FlockGroupB_Shape;                                        // 0x2250(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x2254(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    FlockGroupB_Material;                                     // 0x2258(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<int>                                        FlockGroupC;                                              // 0x2260(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                FlockGroupC_Shape;                                        // 0x2270(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x2274(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    FlockGroupC_Material;                                     // 0x2278(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<int>                                        FlockGroupD;                                              // 0x2280(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                FlockGroupD_Shape;                                        // 0x2290(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x2294(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    FlockGroupD_Material;                                     // 0x2298(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Debug_ShowFlockGroups;                                    // 0x22A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Debug_Boids;                                              // 0x22A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0xE];                                       // 0x22A2(0x000E) MISSED OFFSET
	struct UObject_FTransform                          SmoothedActorTransform;                                   // 0x22B0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class UStaticMesh*                                 BoidStaticMesh;                                           // 0x22E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBoidBehavior                               NormalBehavior;                                           // 0x22E8(0x0040) (Edit, BlueprintVisible)
	struct FBoidBehavior                               AttackBehavior;                                           // 0x2328(0x0040) (Edit, BlueprintVisible)
	struct FFlockPersistentData                        FlockPersistentData;                                      // 0x2368(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance)
	double                                             LastFlockTraceTime;                                       // 0x23A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastDebugDrawTime;                                        // 0x23A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NumLeaderBoids;                                           // 0x23B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinDinoHealthPercentForBoidDestruction;                   // 0x23B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NumSpawnBoids;                                            // 0x23B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x23BC(0x0004) MISSED OFFSET
	double                                             LastBoidDestructionCleanupTime;                           // 0x23C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HideLeaderBoids;                                          // 0x23C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x23C9(0x0003) MISSED OFFSET
	float                                              FlockAttackDamage;                                        // 0x23CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FlockAttackDamageVsPlayers;                               // 0x23D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FlockAttackDamageVsDinos;                                 // 0x23D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	double                                             SpawnTime;                                                // 0x23D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             DeathTime;                                                // 0x23E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FlockAttackDmgMultiplierVsCorruptDinos;                   // 0x23E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x23EC(0x0004) MISSED OFFSET
	double                                             LastOwnerKaijuCheckTime;                                  // 0x23F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NextOwnerKaijuCheckInterval;                              // 0x23F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    CallFunc_RandomRotator_ReturnValue;                       // 0x23FC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_BPGetCurrentAttackIndex_ReturnValue;             // 0x2408(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchInteger_CmpSuccess;                          // 0x240C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_IntInt_ReturnValue;                   // 0x240D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData10[0x2];                                       // 0x240E(0x0002) MISSED OFFSET
	class AController*                                 CallFunc_GetController_ReturnValue;                       // 0x2410(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class ADesertKaijuFlock_AIController_BP_C*         K2Node_DynamicCast_AsDesertKaijuFlock_AIController_BP_C;  // 0x2418(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x2420(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData11[0x7];                                       // 0x2421(0x0007) MISSED OFFSET
	class UBlackboardComponent*                        CallFunc_GetBlackboard_ReturnValue;                       // 0x2428(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_IntInt_ReturnValue2;                  // 0x2430(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x2431(0x0003) MISSED OFFSET
	struct FName                                       CallFunc_MakeLiteralName_ReturnValue;                     // 0x2434(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_MakeLiteralFloat_ReturnValue;                    // 0x243C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct UObject_FTransform                          CallFunc_GetTransform_ReturnValue;                        // 0x2440(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_RandomInteger_ReturnValue;                       // 0x2470(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_RandomFloatInRange_ReturnValue;                  // 0x2474(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                K2Node_CustomEvent_NewShape;                              // 0x2478(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    K2Node_CustomEvent_Rotation;                              // 0x247C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       CallFunc_MakeLiteralName_ReturnValue2;                    // 0x2488(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AController*                                 CallFunc_GetController_ReturnValue2;                      // 0x2490(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalDinoAIController*                     K2Node_DynamicCast_AsPrimalDinoAIController;              // 0x2498(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x24A0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData13[0x7];                                       // 0x24A1(0x0007) MISSED OFFSET
	class UBlackboardComponent*                        CallFunc_GetBlackboard_ReturnValue2;                      // 0x24A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UObject*                                     CallFunc_GetValueAsObject_ReturnValue;                    // 0x24B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class ADesertKaiju_Character_BP_C*                 K2Node_DynamicCast_AsDesertKaiju_Character_BP_C;          // 0x24B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast3_CastSuccess;                          // 0x24C0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x24C1(0x0003) MISSED OFFSET
	int                                                Temp_int_Loop_Counter_Variable;                           // 0x24C4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue;                          // 0x24C8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData15[0x4];                                       // 0x24CC(0x0004) MISSED OFFSET
	class AActor*                                      K2Node_CustomEvent_KaijuOwner;                            // 0x24D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class ADesertKaiju_Character_BP_C*                 K2Node_DynamicCast_AsDesertKaiju_Character_BP_C2;         // 0x24D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast4_CastSuccess;                          // 0x24E0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData16[0x7];                                       // 0x24E1(0x0007) MISSED OFFSET
	class AActor*                                      K2Node_CustomEvent_DamagedActor;                          // 0x24E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_HitFromDirection;                      // 0x24F0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData17[0x4];                                       // 0x24FC(0x0004) MISSED OFFSET
	struct FHitResult                                  K2Node_CustomEvent_HitInfo;                               // 0x2500(0x0088) (Transient, DuplicateTransient)
	class UClass*                                      K2Node_CustomEvent_DmgTypeClass;                          // 0x2588(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalDinoCharacter*                        K2Node_DynamicCast_AsPrimalDinoCharacter;                 // 0x2590(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast5_CastSuccess;                          // 0x2598(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData18[0x3];                                       // 0x2599(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue;                 // 0x259C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue;                    // 0x25A8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData19[0x4];                                       // 0x25B4(0x0004) MISSED OFFSET
	struct FHitResult                                  CallFunc_MakeHitResult_ReturnValue;                       // 0x25B8(0x0088) (Transient, DuplicateTransient)
	class AShooterCharacter*                           K2Node_DynamicCast_AsShooterCharacter;                    // 0x2640(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast6_CastSuccess;                          // 0x2648(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData20[0x3];                                       // 0x2649(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue2;                // 0x264C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalCharacter*                            K2Node_DynamicCast_AsPrimalCharacter;                     // 0x2658(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast7_CastSuccess;                          // 0x2660(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData21[0x7];                                       // 0x2661(0x0007) MISSED OFFSET
	class AController*                                 CallFunc_GetController_ReturnValue3;                      // 0x2668(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue3;                // 0x2670(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue4;                // 0x267C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Subtract_VectorVector_ReturnValue;               // 0x2688(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Normal_ReturnValue;                              // 0x2694(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_X;                                   // 0x26A0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Y;                                   // 0x26A4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Z;                                   // 0x26A8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_MakeVector_ReturnValue;                          // 0x26AC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Multiply_VectorFloat_ReturnValue;                // 0x26B8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData22[0x4];                                       // 0x26C4(0x0004) MISSED OFFSET
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue;                // 0x26C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue;                 // 0x26D0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue;                        // 0x26D4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_CanRunCosmeticEvents_OutNetworkMode;             // 0x26D8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData23[0x7];                                       // 0x26D9(0x0007) MISSED OFFSET
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue2;               // 0x26E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum_CmpSuccess;                             // 0x26E8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData24[0x3];                                       // 0x26E9(0x0003) MISSED OFFSET
	int                                                CallFunc_Array_Length_ReturnValue2;                       // 0x26EC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue;                         // 0x26F0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData25[0x7];                                       // 0x26F1(0x0007) MISSED OFFSET
	class UStaticMeshComponent*                        CallFunc_Array_Get_Item;                                  // 0x26F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Loop_Counter_Variable2;                          // 0x2700(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_CanRunCosmeticEvents_OutNetworkMode2;            // 0x2704(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue2;                        // 0x2705(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum2_CmpSuccess;                            // 0x2706(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData26[0x1];                                       // 0x2707(0x0001) MISSED OFFSET
	class UStaticMeshComponent*                        CallFunc_Array_Get_Item2;                                 // 0x2708(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue2;                         // 0x2710(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsVisible_ReturnValue;                           // 0x2714(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsSimulatingPhysics_ReturnValue;                 // 0x2715(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x2716(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C");
		return ptr;
	}


	bool BPCanCryo(class AShooterPlayerController** ForPC);
	void BPOnLethalDamage(float* KillingDamage, class AController** Killer, class AActor** DamageCauser, struct FDamageEvent* DamageEvent, bool* bPreventDeath);
	void OwnerKaijuCheck();
	void BPTimerServer();
	void GetFlockGroupMaterial(int Group, class UMaterialInstanceDynamic** Material);
	void TickFlockGroup(int Shape, float DeltaTime, int groupIndex, TArray<int>* Group, struct FBoidBehavior* Behavior);
	void GetFlockAvoidanceArea(TArray<struct FAvoidanceArea>* Return);
	void DistanceToKaiju(float* Distance);
	float BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo);
	void BPDinoPostBeginPlay();
	void STATIC_ReceiveTick(float* DeltaSeconds);
	void BP_OnSetDeath();
	float BlueprintAdjustOutputDamage(int* AttackIndex, float* OriginalDamageAmount, class AActor** HitActor, class UClass** OutDamageType, float* OutDamageImpulse);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void MulticastUpdateShape(int NewShape, const struct FRotator& Rotation);
	void Multi_UpdateAttackShape();
	void DelayedTurnBoolOff();
	void MultiUpdateKaijuOwner(class AActor* KaijuOwner);
	void Delayed_DealDamage(class AActor* DamagedActor, const struct FVector& HitFromDirection, const struct FHitResult& HitInfo, class UClass* DmgTypeClass);
	void CleanupBoids();
	void MultiOnLethalDamage();
	void ExecuteUbergraph_DesertKaiju_FirstFlockChar_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

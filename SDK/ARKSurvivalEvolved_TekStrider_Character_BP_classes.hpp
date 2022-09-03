#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TekStrider_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TekStrider_Character_BP.TekStrider_Character_BP_C
// 0x1040 (0x32C8 - 0x2288)
class ATekStrider_Character_BP_C : public ADino_Character_BP_C
{
public:
	class UBoxComponent*                               PlatformSaddleBuildArea;                                  // 0x2288(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Hack_Fail_VFX;                                            // 0x2290(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Scene3;                                                   // 0x2298(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Hack_Success_VFX;                                         // 0x22A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Scene2;                                                   // 0x22A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Completed_Hack_VFX;                                       // 0x22B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Scene1;                                                   // 0x22B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             attached_transmitter_location;                            // 0x22C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             tek_bed_location;                                         // 0x22C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      InvisibleSaddle;                                          // 0x22D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      platform_skeletal_mesh;                                   // 0x22D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Transmitter_Is_Active_VFX;                                // 0x22E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Transmitter_Activate_VFX;                                 // 0x22E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    resource_suck_vfx_trees;                                  // 0x22F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    resource_suck_vfx_rocks;                                  // 0x22F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem11;                                         // 0x2300(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            HackingSpot19;                                            // 0x2308(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem10;                                         // 0x2310(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            HackingSpot18;                                            // 0x2318(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem12;                                         // 0x2320(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            HackingSpot17;                                            // 0x2328(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem8;                                          // 0x2330(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            HackingSpot16;                                            // 0x2338(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem7;                                          // 0x2340(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            HackingSpot15;                                            // 0x2348(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem9;                                          // 0x2350(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            HackingSpot14;                                            // 0x2358(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem6;                                          // 0x2360(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            HackingSpot13;                                            // 0x2368(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem5;                                          // 0x2370(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            HackingSpot12;                                            // 0x2378(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem4;                                          // 0x2380(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            HackingSpot11;                                            // 0x2388(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem3;                                          // 0x2390(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            HackingSpot10;                                            // 0x2398(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem2;                                          // 0x23A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            HackingSpot09;                                            // 0x23A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem1;                                          // 0x23B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            HackingSpot08;                                            // 0x23B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    hack_interact_light_7;                                    // 0x23C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            Hack_Interact_Sphere_7;                                   // 0x23C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    hack_interact_light_6;                                    // 0x23D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            Hack_Interact_Sphere_6;                                   // 0x23D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    hack_interact_light_5;                                    // 0x23E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            Hack_Interact_Sphere_5;                                   // 0x23E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    hack_interact_light_4;                                    // 0x23F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            Hack_Interact_Sphere_4;                                   // 0x23F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    hack_interact_light_3;                                    // 0x2400(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            Hack_Interact_Sphere_3;                                   // 0x2408(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    hack_interact_light_2;                                    // 0x2410(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            Hack_Interact_Sphere_2;                                   // 0x2418(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    hack_interact_light_1;                                    // 0x2420(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            Hack_Interact_Sphere_1;                                   // 0x2428(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    hack_interact_light_0;                                    // 0x2430(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            Hack_Interact_Sphere_0;                                   // 0x2438(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      BedSaddle;                                                // 0x2440(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDinoCharacterStatusComponent_BP_TekStrider_C* DinoCharacterStatus_BP_TekStrider_C1;                     // 0x2448(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Timeline_0_NewTrack_0_CDCDF48B4DA72C7C4AF2CB84FF8CED2D;   // 0x2450(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_CDCDF48B4DA72C7C4AF2CB84FF8CED2D;   // 0x2454(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x2455(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x2458(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HasAttachmentThatRequiresAiming_;                         // 0x2460(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x2461(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnStructurePlacedOnSaddle;                                // 0x2468(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class UClass*                                      chargeManagerBuffClass;                                   // 0x2478(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class APrimalBuff*                                 chargeManagerBuff;                                        // 0x2480(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               isReceiver;                                               // 0x2488(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x2489(0x0003) MISSED OFFSET
	float                                              currentChargeAmount;                                      // 0x248C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              currentChargeLossPerSecond;                               // 0x2490(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAutoChargeActive;                                        // 0x2494(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x2495(0x0003) MISSED OFFSET
	float                                              currentMaxCharge;                                         // 0x2498(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x249C(0x0004) MISSED OFFSET
	class APrimalCharacter*                            MountedCharcterRef;                                       // 0x24A0(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	double                                             ClientLastTimeOfTimerTick;                                // 0x24A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastTimePlayedRecievedChargeAnim;                         // 0x24B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastTimePlayedRecievedMaxChargeAnim;                      // 0x24B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastTimeRecievedCharge;                                   // 0x24C0(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TamedEmitterChargeConsumed;                               // 0x24C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PassiveChargeToGainPerSecond;                             // 0x24CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UnTamedPassiveChargeToGainPerSecond;                      // 0x24D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ChargeRegenMultiplier;                                    // 0x24D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BaseChargeRadius;                                         // 0x24D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExpectedExtraMaxDamageAsPercent;                          // 0x24DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxPossibleRange;                                         // 0x24E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               emitterIsActive;                                          // 0x24E4(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x24E5(0x0003) MISSED OFFSET
	float                                              emitterChargeConsumedPerSecond;                           // 0x24E8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              chargeEmittedPerSecond;                                   // 0x24EC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UntamedEmitterChargeConsumed;                             // 0x24F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCanPlayFullChargeAnim;                                   // 0x24F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bForceActivateAtMaxCharge;                                // 0x24F5(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x24F6(0x0002) MISSED OFFSET
	float                                              TimeCanPlayRecieveChargeAnimSinceLastRecievingCharge;     // 0x24F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCanPlayRecChargeAnim;                                    // 0x24FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x24FD(0x0003) MISSED OFFSET
	double                                             TimeOfLastTimerTick;                                      // 0x2500(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                ChargeColor;                                              // 0x2508(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseChargeColor;                                          // 0x2518(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHideChargeFloatingHUD;                                   // 0x2519(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x6];                                       // 0x251A(0x0006) MISSED OFFSET
	class AActor*                                      Bed_Ref;                                                  // 0x2520(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FHUDElement                                 ChargeAmountHUDElementTemplate;                           // 0x2528(0x0150) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              Overwritten_Max_Charge_Amount;                            // 0x2678(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ChargeAddedToBatteryPerSec;                               // 0x267C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              rider_move_right_val;                                     // 0x2680(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Rider_Move_Forward_Val;                                   // 0x2684(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<float>                                      Number_of_Attachments_chance_array;                       // 0x2688(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              Head_Attachment_Classes;                                  // 0x2698(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      Head_Attachment_Weights;                                  // 0x26A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              Chest_Attachment_Classes;                                 // 0x26B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      Chest_Attachment_Weights;                                 // 0x26C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               set_head_attachment;                                      // 0x26D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               set_chest_attachment;                                     // 0x26D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x6];                                       // 0x26DA(0x0006) MISSED OFFSET
	class UClass*                                      PlatformSaddle;                                           // 0x26E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               has_spawned_platform_saddle;                              // 0x26E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugCheatUnlimitedCharge;                                // 0x26E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               is_holding_crouch;                                        // 0x26EA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Should_Charge_Batteries_In_Inventory;                     // 0x26EB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x26EC(0x0004) MISSED OFFSET
	class AActor*                                      transmitter_ref;                                          // 0x26F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      attached_bed_class;                                       // 0x26F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      attached_transmitter_class;                               // 0x2700(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Is_Set_To_Drain_Batteries;                                // 0x2708(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               Should_Drain_Batteries_In_Inventory;                      // 0x2709(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData11[0x2];                                       // 0x270A(0x0002) MISSED OFFSET
	float                                              Charge_Drained_From_Bettery_Per_Sec;                      // 0x270C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Charge_Batteries_Passively_at_Full_Charge;                // 0x2710(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData12[0x7];                                       // 0x2711(0x0007) MISSED OFFSET
	class FString                                      Multiuse_Copy_Battery_Charge_Text;                        // 0x2718(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      multiuse_disable_passive_charging_text;                   // 0x2728(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      multiuse_enable_passive_charging_text;                    // 0x2738(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      multiuse_change_to_battery_charging_mode_text;            // 0x2748(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      multiuse_drain_from_batteries_charging_mode_text;         // 0x2758(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      multiuse_disable_battery_drain_text;                      // 0x2768(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      multiuse_enable_battery_drain_text;                       // 0x2778(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      multiuse_disable_battery_charging_text;                   // 0x2788(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      multiuse_enable_battery_charging_text;                    // 0x2798(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      multiuse_no_battery_charge_text;                          // 0x27A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      multiuse_no_batteries_text;                               // 0x27B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               Should_Tame_Regrow_Foliage;                               // 0x27C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData13[0x7];                                       // 0x27C9(0x0007) MISSED OFFSET
	class FString                                      multiuse_enable_regrow_foliage_text;                      // 0x27D0(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance)
	class FString                                      multiuse_disable_regrow_foliage_text;                     // 0x27E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               has_set_up_inv;                                           // 0x27F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x27F1(0x0003) MISSED OFFSET
	int                                                chest_attachment_index;                                   // 0x27F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	int                                                head_attachment_index;                                    // 0x27F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData15[0x4];                                       // 0x27FC(0x0004) MISSED OFFSET
	class UClass*                                      no_fall_damage_when_walking_off;                          // 0x2800(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             lastTimeInitiatedTaming;                                  // 0x2808(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      DrumWeapon;                                               // 0x2810(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugBypassMissionCountHackingRestriction;                // 0x2818(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0x3];                                       // 0x2819(0x0003) MISSED OFFSET
	int                                                Current_Completed_Missions;                               // 0x281C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                total_number_of_missions;                                 // 0x2820(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData17[0x4];                                       // 0x2824(0x0004) MISSED OFFSET
	class FString                                      Missions_string;                                          // 0x2828(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      begin_hacking_string;                                     // 0x2838(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      Wander_Distance_string;                                   // 0x2848(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector                                     last_tame_location;                                       // 0x2858(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	float                                              needed_distance_from_last_tame_location;                  // 0x2864(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AController*                                 tamer_controller_ref;                                     // 0x2868(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              affinityPerHackFixedAmount;                               // 0x2870(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData18[0x4];                                       // 0x2874(0x0004) MISSED OFFSET
	class UParticleSystem*                             non_attached_particle_on_hacking_hit_success;             // 0x2878(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             non_attached_particle_on_hacking_hit_fail;                // 0x2880(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       particle_on_hacking_hit_fail_socket;                      // 0x2888(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       particle_on_hacking_hit_success_socket;                   // 0x2890(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Fallback_Taming_Time_Restriction;                         // 0x2898(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData19[0x4];                                       // 0x289C(0x0004) MISSED OFFSET
	class UClass*                                      hacking_buff;                                             // 0x28A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             non_attached_particle_on_completing_a_hacking_attempt;    // 0x28A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class FString                                      Tooltip_mission_string;                                   // 0x28B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                left_click_attack_index;                                  // 0x28C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              failed_hack_Damage_Radius;                                // 0x28C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              fail_hack_base_damage;                                    // 0x28C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              failed_hack_impulse;                                      // 0x28CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      failed_hack_damage_type;                                  // 0x28D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Current_Hack_Spot_Index;                                  // 0x28D8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData20[0x4];                                       // 0x28DC(0x0004) MISSED OFFSET
	TArray<class USceneComponent*>                     Hacking_Interaction_Components;                           // 0x28E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UParticleSystemComponent*>            Hacking_Interaction_Components_Lights;                    // 0x28F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              Hacking_Interaction_Spot_ViewDot;                         // 0x2900(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              view_distance_requirement_to_be_considered__looking_at_;  // 0x2904(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     hacking_interaction_spot_location_floating_hud_offset;    // 0x2908(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     last_floating_hud_loc;                                    // 0x2914(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<int>                                        Hacking_interaction_components_preset_order;              // 0x2920(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<bool>                                       hacking_interaction_component_has_light;                  // 0x2930(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              distance_to_show_hack_spots;                              // 0x2940(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData21[0x4];                                       // 0x2944(0x0004) MISSED OFFSET
	class FString                                      Saved_Hacking_Pattern;                                    // 0x2948(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame)
	struct FLinearColor                                Can_Hack_Particle_Color;                                  // 0x2958(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                Cannot_Hack_Color;                                        // 0x2968(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Uses_Randomized_Hacking_Pattern;                          // 0x2978(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData22[0x7];                                       // 0x2979(0x0007) MISSED OFFSET
	class FString                                      find_flashing_lights_string;                              // 0x2980(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UParticleSystem*                             hacking_particle_template;                                // 0x2990(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              cached_out_updated_last_hack_attempt_distance;            // 0x2998(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              checked_current_tame_travel_distance;                     // 0x299C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class FString>                              Taming_Locations_Strings;                                 // 0x29A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               Indicate_on_Multiuse_the_physical_Location_of_the_hack_spot;// 0x29B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               must_be_close_to_hack_points_to_initiate_hack;            // 0x29B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData23[0x6];                                       // 0x29B2(0x0006) MISSED OFFSET
	class FString                                      mutagel_string;                                           // 0x29B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      initiate_hacking_string;                                  // 0x29C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      hacking_progress_bar_string;                              // 0x29D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                amount_of_mutagel_in_inventory;                           // 0x29E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                required_mutagel_count_to_tame;                           // 0x29EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 Required_Mutagel_Per_Level_Curve;                         // 0x29F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               use_curve_for_finding_mutagel_amount,_if_false_use_multiplier_and_power;// 0x29F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData24[0x3];                                       // 0x29F9(0x0003) MISSED OFFSET
	float                                              required_mutagel_multiplier;                              // 0x29FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              required_mutagel_power;                                   // 0x2A00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData25[0x4];                                       // 0x2A04(0x0004) MISSED OFFSET
	class UPrimalItem*                                 last_saved_final_slot_item;                               // 0x2A08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               is_mid_attack_anim;                                       // 0x2A10(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData26[0x3];                                       // 0x2A11(0x0003) MISSED OFFSET
	int                                                invalid_use_int__to_stop_multiuse_;                       // 0x2A14(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               is_moving;                                                // 0x2A18(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData27[0x3];                                       // 0x2A19(0x0003) MISSED OFFSET
	float                                              regular_blend_out_time;                                   // 0x2A1C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      StriderDestructionEmitter;                                // 0x2A20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSkipDestructionEmitter;                                  // 0x2A28(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseUnboardEjectMode;                                      // 0x2A29(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData28[0x6];                                       // 0x2A2A(0x0006) MISSED OFFSET
	class UClass*                                      BuffToGiveRiderOnStriderDeath;                            // 0x2A30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsDying;                                                  // 0x2A38(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsDoneDying;                                              // 0x2A39(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData29[0x6];                                       // 0x2A3A(0x0006) MISSED OFFSET
	class AActor*                                      Murderer;                                                 // 0x2A40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              MinPercentOfMaxHealthToPlayHurtAnim;                      // 0x2A48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Current_Harvest_Count;                                    // 0x2A4C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	int                                                Min_Harvest_Count_before_poop;                            // 0x2A50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Max_Harvest_Count_before_poop;                            // 0x2A54(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Min_Possible_Dropped_Element_Count;                       // 0x2A58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Level_88_Dropped_Element_Count;                           // 0x2A5C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     last_resource_sucking_location;                           // 0x2A60(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData30[0x4];                                       // 0x2A6C(0x0004) MISSED OFFSET
	class UAnimMontage*                                Death_Falling_Anim_Montage;                               // 0x2A70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      full_body_vfx_for_hacking_success;                        // 0x2A78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      Hacking_Progress_VFX_buff;                                // 0x2A80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       Progress_VFX_Param_Name;                                  // 0x2A88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            dynamic_mats;                                             // 0x2A90(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	double                                             LastTimeHackPointSpawnedToHack;                           // 0x2AA0(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HackStartDelayTamingEffectivenessMult_min;                // 0x2AA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Affinity_Percent_Lost_On_Hack_Fail__of_current_affinity_; // 0x2AAC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Affinity_Percent_Lost_On_Hack_Fail__of_total_required_affinity_;// 0x2AB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Enable_Harvest_Stone;                                     // 0x2AB4(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               Enable_Harvest_Thatch;                                    // 0x2AB5(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               Enable_Harvest_Wood;                                      // 0x2AB6(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               Enable_Harvest_Metal;                                     // 0x2AB7(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	TEnumAsByte<EPrimalCharacterStatusValue>           Charge_Capacity_stat;                                     // 0x2AB8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData31[0x3];                                       // 0x2AB9(0x0003) MISSED OFFSET
	float                                              Charge_Emission_Range;                                    // 0x2ABC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Min_Possible_Charge_Regen_Rate;                           // 0x2AC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Charge_Regen_Rate_at_level_88;                            // 0x2AC4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Charge_Regen_Max_Clamp;                                   // 0x2AC8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               debug_output_stuff;                                       // 0x2ACC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData32[0x3];                                       // 0x2ACD(0x0003) MISSED OFFSET
	int                                                wild_try_shoot_lazers_attack_index;                       // 0x2AD0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ai_request_stomp_attack_index;                            // 0x2AD4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      Wild_Inventory_Class;                                     // 0x2AD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                wild_try_shoot_cannon_attack_index;                       // 0x2AE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                wild_try_shoot_silencer_attack_index;                     // 0x2AE4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                wild_try_toggle_directionalshield_attack_index;           // 0x2AE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                wild_try_toggle_omnishield_attack_index;                  // 0x2AEC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                wild_try_shoot_radar_attack_index;                        // 0x2AF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                wild_try_shoot_harvester_attack_index;                    // 0x2AF4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                saved_radar_filter;                                       // 0x2AF8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	float                                              affinityPerHackPercent;                                   // 0x2AFC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDebug_DediStorageItemTransfer;                           // 0x2B00(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDebug_LinkedDediStorageReplication;                      // 0x2B01(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData33[0x6];                                       // 0x2B02(0x0006) MISSED OFFSET
	class UClass*                                      DediStorageBoxClass;                                      // 0x2B08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABP_DedicatedStorage_C*                      CurrentLinkedDediStorage;                                 // 0x2B10(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SaveGame, IsPlainOldData)
	float                                              HackStartDelayTamingEffectivenessMult_lvl88;              // 0x2B18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              grace_period_before_time_penalty_kicks_in_for_taming__includes_approx_12s_hack_time;// 0x2B1C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FName>                               ColorNames;                                               // 0x2B20(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               UsingColorNames;                                          // 0x2B30(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               UsingColorizedColor;                                      // 0x2B40(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                MultiUseCategory_DebugAttachments;                        // 0x2B50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData34[0x4];                                       // 0x2B54(0x0004) MISSED OFFSET
	TArray<class ABP_DedicatedStorage_C*>              CurrentNearbyUsableDediStorages;                          // 0x2B58(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class ABP_DedicatedStorage_C*>              CurrentNearbyUsableDediStorages_Cleaned;                  // 0x2B68(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               bAutoTransferToLinkedDediStorageActive;                   // 0x2B78(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData35[0x7];                                       // 0x2B79(0x0007) MISSED OFFSET
	TArray<struct FName>                               DediStorageTransferItemTagBlacklist;                      // 0x2B80(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                MultiUseCategory_DediStorageDeposit;                      // 0x2B90(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                MultiUseCategory_Color_DediStorageItemTransfer;           // 0x2B94(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MultiUseIndex_SendResourcesToNearbyDediStorage;           // 0x2BA4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                MultiUseCategory_Color_SelectLinkedDediStorage;           // 0x2BA8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                MultiUseIndex_Color_CurrentLinkedDediStorage_Enabled;     // 0x2BB8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                MultiUseIndex_Color_CurrentLinkedDediStorage_Disabled;    // 0x2BC8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MultiUseCategory_SelectLinkedDediStorage;                 // 0x2BD8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MultiUseIndex_ToggleDediStorageAutoItemTransfer;          // 0x2BDC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MultiUseIndex_UnlinkFromDediStorage;                      // 0x2BE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       RequestLinkToDediStorageCommandName;                      // 0x2BE4(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SearchForDediStorageRadius;                               // 0x2BEC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      DediStorageInventoryClass;                                // 0x2BF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               has_set_initial_attachments;                              // 0x2BF8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData36[0x3];                                       // 0x2BF9(0x0003) MISSED OFFSET
	float                                              percent_of_current_affinity_to_consider_when_decreasing_hack_amount;// 0x2BFC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class FString                                      grace_period_string;                                      // 0x2C00(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      time_remaining_string;                                    // 0x2C10(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      affinity_to_gain_string;                                  // 0x2C20(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              client_copy_of_taming_speed_modifier;                     // 0x2C30(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShouldRefreshColorization;                                // 0x2C34(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData37[0x3];                                       // 0x2C35(0x0003) MISSED OFFSET
	double                                             Last_Time_Set_Isdying;                                    // 0x2C38(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	float                                              StriderDeathDropInventoryLifetime;                        // 0x2C40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                taming_feed_multiuse_index;                               // 0x2C44(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AController*                                 MurdererInstigator;                                       // 0x2C48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasValidLinkedDediStorage;                               // 0x2C50(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData38[0x3];                                       // 0x2C51(0x0003) MISSED OFFSET
	struct FVector                                     LinkedDediStorageLocation;                                // 0x2C54(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	class FString                                      LinkedDediStorageTitle;                                   // 0x2C60(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance)
	int                                                LinkedDediStorageItemCount;                               // 0x2C70(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData39[0x4];                                       // 0x2C74(0x0004) MISSED OFFSET
	class UClass*                                      LinkedDediStorageItemClass;                               // 0x2C78(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsLinkedDediStorageStasised;                             // 0x2C80(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData40[0x7];                                       // 0x2C81(0x0007) MISSED OFFSET
	double                                             LastRequestFixLinkedDediStorageRefTime;                   // 0x2C88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              RequestFixLinkedDediStorageRefInterval;                   // 0x2C90(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               is_transmitter_active;                                    // 0x2C94(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData41[0x3];                                       // 0x2C95(0x0003) MISSED OFFSET
	double                                             Last_Time_Container_Activated;                            // 0x2C98(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              deactivate_transmitter_toggle_vfx_after_this_duration;    // 0x2CA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               has_tried_spaning_bed_initially;                          // 0x2CA4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData42[0x3];                                       // 0x2CA5(0x0003) MISSED OFFSET
	float                                              Onesided_Shield_Durability_At_Lvl_0;                      // 0x2CA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Onesided_Shield_Durability_At_Lvl_88;                     // 0x2CAC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Omni_Shield_Durability_At_Lvl_0;                          // 0x2CB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Omni_Shield_Durability_At_Lvl_88;                         // 0x2CB4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              base_health_value_for_shield_calc;                        // 0x2CB8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              approx_88_stat_value_for_health_shield_calc;              // 0x2CBC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Onesided_Shield_Durability_MAX;                           // 0x2CC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Omni_Shield_Durability_MAX;                               // 0x2CC4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              timeout_check_rate_for_detecting_if_right_click_is_still_held;// 0x2CC8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                mission_count_required_for_taming_lvl_0;                  // 0x2CCC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                mission_count_required_for_taming_lvl_150;                // 0x2CD0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               use_fallback_taming_timer;                                // 0x2CD4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Use_total_distance_traveled_calculation_for_determining_taming_availability;// 0x2CD5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData43[0x2];                                       // 0x2CD6(0x0002) MISSED OFFSET
	class FString                                      unclaim_string;                                           // 0x2CD8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               Has_Saddle_Structures;                                    // 0x2CE8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData44[0x3];                                       // 0x2CE9(0x0003) MISSED OFFSET
	int                                                SavedCompletedMissionsRequired;                           // 0x2CEC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               Ai_can_use_attachments;                                   // 0x2CF0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData45[0x3];                                       // 0x2CF1(0x0003) MISSED OFFSET
	float                                              how_much_closer_do_you_need_to_be_to_stomp;               // 0x2CF4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  ResourceSuckSound;                                        // 0x2CF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Cheats_Enabled;                                           // 0x2D00(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData46[0x3];                                       // 0x2D01(0x0003) MISSED OFFSET
	int                                                DediStorageMultiUseMaxNumEntriesPerFolder;                // 0x2D04(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MultiUse_DediStorageListBase;                             // 0x2D08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                MultiUseIndex_Color_ShowMoreDediStorages;                 // 0x2D0C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              max_taming_ineffectiveness_drop_ammount;                  // 0x2D1C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class FString                                      Missions_string_singular;                                 // 0x2D20(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                MultiUseCategory_MaxNumNearbyDediStorageFolders;          // 0x2D30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData47[0x4];                                       // 0x2D34(0x0004) MISSED OFFSET
	class FString                                      non_console_mssions_multiuse_string;                      // 0x2D38(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      FirePressedString;                                        // 0x2D48(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      CrouchPressedString;                                      // 0x2D58(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      CrouchTogglePressedString;                                // 0x2D68(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      CrouchReleasedString;                                     // 0x2D78(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      CrouchToggleReleasedString;                               // 0x2D88(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      TargetingPressedString;                                   // 0x2D98(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      TargetingPressed_Controller_GamepadString;                // 0x2DA8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      TargetingReleasedString;                                  // 0x2DB8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      TargetingReleased_Controller_GamepadString;               // 0x2DC8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               has_deleted_extra_beds_once;                              // 0x2DD8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               has_deleted_extra_beds_twice;                             // 0x2DD9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x2DDA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_FloatFloat_ReturnValue;               // 0x2DDB(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_BoolBool_ReturnValue;                 // 0x2DDC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<E_ChargeVariableNames>                 K2Node_Event_variableType7;                               // 0x2DDD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData48[0x2];                                       // 0x2DDE(0x0002) MISSED OFFSET
	float                                              K2Node_Event_fValue4;                                     // 0x2DE0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<E_ChargeVariableNames>                 K2Node_Event_variableType6;                               // 0x2DE4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData49[0x3];                                       // 0x2DE5(0x0003) MISSED OFFSET
	double                                             K2Node_Event_dValue4;                                     // 0x2DE8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<E_ChargeVariableNames>                 K2Node_Event_variableType5;                               // 0x2DF0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData50[0x3];                                       // 0x2DF1(0x0003) MISSED OFFSET
	int                                                K2Node_Event_iValue4;                                     // 0x2DF4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<E_ChargeVariableNames>                 K2Node_Event_variableType4;                               // 0x2DF8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData51[0x3];                                       // 0x2DF9(0x0003) MISSED OFFSET
	int                                                K2Node_Event_iValue3;                                     // 0x2DFC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class ABuff_TekStrider_Attachment_Base_C*          K2Node_CustomEvent_Buff2;                                 // 0x2E00(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class ABuff_TekStrider_Attachment_Base_C*          K2Node_CustomEvent_Buff;                                  // 0x2E08(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TArray<class ABuff_TekStrider_Attachment_Base_C*>  CallFunc_GetAttachmentBuffs_Buffs;                        // 0x2E10(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                CallFunc_Array_Length_ReturnValue;                        // 0x2E20(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<E_ChargeVariableNames>                 K2Node_Event_variableType8;                               // 0x2E24(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Event_bBValue4;                                    // 0x2E25(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<E_ChargeVariableNames>                 K2Node_Event_variableType9;                               // 0x2E26(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData52[0x1];                                       // 0x2E27(0x0001) MISSED OFFSET
	double                                             K2Node_Event_dValue5;                                     // 0x2E28(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<E_ChargeVariableNames>                 K2Node_Event_variableType10;                              // 0x2E30(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData53[0x3];                                       // 0x2E31(0x0003) MISSED OFFSET
	float                                              K2Node_Event_fValue5;                                     // 0x2E34(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<E_ChargeVariableNames>                 K2Node_Event_variableType11;                              // 0x2E38(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Event_bBValue5;                                    // 0x2E39(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData54[0x6];                                       // 0x2E3A(0x0006) MISSED OFFSET
	class ABuff_TekStrider_Attachment_Base_C*          CallFunc_GetAttachmentBuff_Buff;                          // 0x2E40(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Loop_Counter_Variable;                           // 0x2E48(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue;                          // 0x2E4C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue2;                            // 0x2E50(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_IsTribute_;                            // 0x2E51(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_True_if_break_was_hit_Variable;                 // 0x2E52(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x2E53(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue3;                            // 0x2E54(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<E_ChargeVariableNames>                 K2Node_CustomEvent_variableType2;                         // 0x2E55(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_bBValue2;                              // 0x2E56(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData55[0x1];                                       // 0x2E57(0x0001) MISSED OFFSET
	float                                              K2Node_CustomEvent_fValue2;                               // 0x2E58(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData56[0x4];                                       // 0x2E5C(0x0004) MISSED OFFSET
	double                                             K2Node_CustomEvent_dValue2;                               // 0x2E60(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<E_ChargeVariableNames>                 K2Node_CustomEvent_variableType;                          // 0x2E68(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_bBValue;                               // 0x2E69(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData57[0x2];                                       // 0x2E6A(0x0002) MISSED OFFSET
	float                                              K2Node_CustomEvent_fValue;                                // 0x2E6C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             K2Node_CustomEvent_dValue;                                // 0x2E70(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class ABuff_ChargeEmitter_C*                       K2Node_DynamicCast_AsBuff_ChargeEmitter_C;                // 0x2E78(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x2E80(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData58[0x7];                                       // 0x2E81(0x0007) MISSED OFFSET
	class ABuff_ChargeManager_C*                       K2Node_DynamicCast_AsBuff_ChargeManager_C;                // 0x2E88(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x2E90(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData59[0x7];                                       // 0x2E91(0x0007) MISSED OFFSET
	class APrimalCharacter*                            K2Node_CustomEvent_DiedCharacter;                         // 0x2E98(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x2EA0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<E_ChargeVariableNames>                 K2Node_Event_variableType3;                               // 0x2EA1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Event_bBValue3;                                    // 0x2EA2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData60[0x1];                                       // 0x2EA3(0x0001) MISSED OFFSET
	float                                              K2Node_Event_fValue3;                                     // 0x2EA4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             K2Node_Event_dValue3;                                     // 0x2EA8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                K2Node_Event_iValue2;                                     // 0x2EB0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<E_ChargeVariableNames>                 K2Node_Event_variableType2;                               // 0x2EB4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Event_bBValue2;                                    // 0x2EB5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData61[0x2];                                       // 0x2EB6(0x0002) MISSED OFFSET
	float                                              K2Node_Event_fValue2;                                     // 0x2EB8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData62[0x4];                                       // 0x2EBC(0x0004) MISSED OFFSET
	double                                             K2Node_Event_dValue2;                                     // 0x2EC0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                K2Node_Event_iVariable;                                   // 0x2EC8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<E_ChargeVariableNames>                 K2Node_Event_variableType;                                // 0x2ECC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Event_multicast;                                   // 0x2ECD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData63[0x2];                                       // 0x2ECE(0x0002) MISSED OFFSET
	float                                              K2Node_Event_fValue;                                      // 0x2ED0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData64[0x4];                                       // 0x2ED4(0x0004) MISSED OFFSET
	double                                             K2Node_Event_dValue;                                      // 0x2ED8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Event_bBValue;                                     // 0x2EE0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Event_triggerEvent;                                // 0x2EE1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Event_multicastEvent;                              // 0x2EE2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData65[0x1];                                       // 0x2EE3(0x0001) MISSED OFFSET
	int                                                K2Node_Event_iValue;                                      // 0x2EE4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_BoolBool_ReturnValue2;                // 0x2EE8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_BoolBool_ReturnValue3;                // 0x2EE9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_FloatFloat_ReturnValue2;              // 0x2EEA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_FloatFloat_ReturnValue3;              // 0x2EEB(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_FloatFloat_ReturnValue4;              // 0x2EEC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_FloatFloat_ReturnValue5;              // 0x2EED(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum_CmpSuccess;                             // 0x2EEE(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData66[0x1];                                       // 0x2EEF(0x0001) MISSED OFFSET
	class UObject*                                     CallFunc_GetClassDefaultObject_ReturnValue;               // 0x2EF0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue2;                           // 0x2EF8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData67[0x7];                                       // 0x2EF9(0x0007) MISSED OFFSET
	class UChargeFunctions_FakeLibrary_C*              K2Node_DynamicCast_AsChargeFunctions_FakeLibrary_C;       // 0x2F00(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast3_CastSuccess;                          // 0x2F08(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x2F09(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BPIsTamed_ReturnValue;                           // 0x2F0A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue;                           // 0x2F0B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData68[0x4];                                       // 0x2F0C(0x0004) MISSED OFFSET
	class APrimalBuff*                                 CallFunc_GetBuff_ReturnValue;                             // 0x2F10(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue3;                           // 0x2F18(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData69[0x7];                                       // 0x2F19(0x0007) MISSED OFFSET
	class ABuff_ChargeEmitter_C*                       K2Node_DynamicCast_AsBuff_ChargeEmitter_C2;               // 0x2F20(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast4_CastSuccess;                          // 0x2F28(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData70[0x3];                                       // 0x2F29(0x0003) MISSED OFFSET
	int                                                Temp_int_Loop_Counter_Variable2;                          // 0x2F2C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue2;                         // 0x2F30(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue2;                       // 0x2F34(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_IsRunningOnServer_OutNetworkMode;                // 0x2F38(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum2_CmpSuccess;                            // 0x2F39(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData71[0x2];                                       // 0x2F3A(0x0002) MISSED OFFSET
	int                                                CallFunc_Array_Length_ReturnValue3;                       // 0x2F3C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FPrimalSaddleStructure                      CallFunc_Array_Get_Item;                                  // 0x2F40(0x0028) (Transient, DuplicateTransient)
	bool                                               CallFunc_Less_IntInt_ReturnValue;                         // 0x2F68(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue2;                         // 0x2F69(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData72[0x6];                                       // 0x2F6A(0x0006) MISSED OFFSET
	class ATekTransmitter_Strider_C*                   K2Node_DynamicCast_AsTekTransmitter_Strider_C;            // 0x2F70(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast5_CastSuccess;                          // 0x2F78(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue4;                            // 0x2F79(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_True_if_break_was_hit_Variable2;                // 0x2F7A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x2F7B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Loop_Counter_Variable3;                          // 0x2F7C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BPIsTamed_ReturnValue2;                          // 0x2F80(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData73[0x3];                                       // 0x2F81(0x0003) MISSED OFFSET
	int                                                CallFunc_Add_IntInt_ReturnValue3;                         // 0x2F84(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_last_tame_location;                    // 0x2F88(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_last_hack_spot;                        // 0x2F94(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAtLocation_ReturnValue;              // 0x2FA0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x2FA8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData74[0x7];                                       // 0x2FA9(0x0007) MISSED OFFSET
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAttached_ReturnValue;                // 0x2FB0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Loop_Counter_Variable4;                          // 0x2FB8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue2;                  // 0x2FBC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue2;                        // 0x2FBD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue3;                         // 0x2FBE(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData75[0x1];                                       // 0x2FBF(0x0001) MISSED OFFSET
	struct FPrimalSaddleStructure                      CallFunc_Array_Get_Item2;                                 // 0x2FC0(0x0028) (Transient, DuplicateTransient)
	int                                                CallFunc_Add_IntInt_ReturnValue4;                         // 0x2FE8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData76[0x4];                                       // 0x2FEC(0x0004) MISSED OFFSET
	class ATekBed_Strider_C*                           K2Node_DynamicCast_AsTekBed_Strider_C;                    // 0x2FF0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast6_CastSuccess;                          // 0x2FF8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue3;                  // 0x2FF9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData77[0x6];                                       // 0x2FFA(0x0006) MISSED OFFSET
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAtLocation_ReturnValue2;             // 0x3000(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue4;                       // 0x3008(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue4;                  // 0x300C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue5;                            // 0x300D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData78[0x2];                                       // 0x300E(0x0002) MISSED OFFSET
	class APawn*                                       CallFunc_K2_GetPawn_ReturnValue;                          // 0x3010(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_Visible;                               // 0x3018(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue3;                        // 0x3019(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData79[0x2];                                       // 0x301A(0x0002) MISSED OFFSET
	float                                              CallFunc_SelectFloat_ReturnValue;                         // 0x301C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_HasAuthority_ReturnValue;                        // 0x3020(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_CanRunCosmeticEvents_OutNetworkMode;             // 0x3021(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum3_CmpSuccess;                            // 0x3022(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_NewParam;                              // 0x3023(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData80[0x4];                                       // 0x3024(0x0004) MISSED OFFSET
	class APlayerController*                           CallFunc_GetOwnerController_ReturnValue;                  // 0x3028(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APlayerController*                           CallFunc_GetOwnerController_ReturnValue2;                 // 0x3030(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BPPreventFirstPerson_ReturnValue;                // 0x3038(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue5;                  // 0x3039(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ObjectObject_ReturnValue;               // 0x303A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData81[0x1];                                       // 0x303B(0x0001) MISSED OFFSET
	float                                              CallFunc_PlayAnimEx_ReturnValue;                          // 0x303C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue;                  // 0x3040(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData82[0x7];                                       // 0x3041(0x0007) MISSED OFFSET
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue;                // 0x3048(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_SelectFloat_ReturnValue2;                        // 0x3050(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData83[0x4];                                       // 0x3054(0x0004) MISSED OFFSET
	double                                             CallFunc_Add_DoubleFloat_ReturnValue;                     // 0x3058(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_Loc2;                                  // 0x3060(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_Loc;                                   // 0x306C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_True_if_break_was_hit_Variable3;                // 0x3078(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue4;                        // 0x3079(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData84[0x2];                                       // 0x307A(0x0002) MISSED OFFSET
	float                                              K2Node_CustomEvent_Percent;                               // 0x307C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             K2Node_CustomEvent_time_activated;                        // 0x3080(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Get_Charge_Capacity_ReturnValue;                 // 0x3088(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue;                 // 0x308C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Get_Charge_Capacity_ReturnValue2;                // 0x3090(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FMax_ReturnValue;                                // 0x3094(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsWildSlow_ReturnValue;                          // 0x3098(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData85[0x7];                                       // 0x3099(0x0007) MISSED OFFSET
	class ABP_DedicatedStorage_C*                      K2Node_CustomEvent_ForStorage;                            // 0x30A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_bBind;                                 // 0x30A8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue6;                            // 0x30A9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData86[0x2];                                       // 0x30AA(0x0002) MISSED OFFSET
	int                                                CallFunc_Array_Length_ReturnValue5;                       // 0x30AC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UMaterialInstanceDynamic*                    CallFunc_Array_Get_Item3;                                 // 0x30B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue3;                        // 0x30B8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData87[0x3];                                       // 0x30B9(0x0003) MISSED OFFSET
	int                                                CallFunc_Array_Length_ReturnValue6;                       // 0x30BC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue7;                       // 0x30C0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData88[0x4];                                       // 0x30C4(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    CallFunc_Array_Get_Item4;                                 // 0x30C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue4;                        // 0x30D0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData89[0x3];                                       // 0x30D1(0x0003) MISSED OFFSET
	int                                                Temp_int_Loop_Counter_Variable5;                          // 0x30D4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue6;                  // 0x30D8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue5;                        // 0x30D9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue4;                         // 0x30DA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData90[0x5];                                       // 0x30DB(0x0005) MISSED OFFSET
	class ABuff_TekStrider_Attachment_Base_C*          CallFunc_Array_Get_Item5;                                 // 0x30E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue5;                         // 0x30E8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue7;                  // 0x30EC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue8;                  // 0x30ED(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue9;                  // 0x30EE(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_IsRunningOnServer_OutNetworkMode2;               // 0x30EF(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum4_CmpSuccess;                            // 0x30F0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData91[0x7];                                       // 0x30F1(0x0007) MISSED OFFSET
	double                                             CallFunc_GetNetworkTimeInSeconds_ReturnValue;             // 0x30F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_IsRunningOnServer_OutNetworkMode3;               // 0x3100(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData92[0x3];                                       // 0x3101(0x0003) MISSED OFFSET
	int                                                Temp_int_Loop_Counter_Variable6;                          // 0x3104(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum5_CmpSuccess;                            // 0x3108(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue6;                        // 0x3109(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData93[0x6];                                       // 0x310A(0x0006) MISSED OFFSET
	class UParticleSystemComponent*                    CallFunc_Array_Get_Item6;                                 // 0x3110(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue6;                         // 0x3118(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue10;                 // 0x311C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData94[0x3];                                       // 0x311D(0x0003) MISSED OFFSET
	struct FRotator                                    CallFunc_K2_GetComponentRotation_ReturnValue;             // 0x3120(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_K2_GetComponentRotation_ReturnValue2;            // 0x312C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetWorldLocation_ReturnValue;                    // 0x3138(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetWorldLocation_ReturnValue2;                   // 0x3144(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Loop_Counter_Variable7;                          // 0x3150(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue7;                        // 0x3154(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData95[0x3];                                       // 0x3155(0x0003) MISSED OFFSET
	class UMaterialInstanceDynamic*                    CallFunc_Array_Get_Item7;                                 // 0x3158(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue7;                         // 0x3160(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData96[0x4];                                       // 0x3164(0x0004) MISSED OFFSET
	class ABP_DedicatedStorage_C*                      K2Node_CustomEvent_LinkedStorage;                         // 0x3168(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_IsRunningOnServer_OutNetworkMode4;               // 0x3170(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ObjectObject_ReturnValue2;              // 0x3171(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum6_CmpSuccess;                            // 0x3172(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_IsRunningOnServer_OutNetworkMode5;               // 0x3173(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum7_CmpSuccess;                            // 0x3174(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ObjectObject_ReturnValue3;              // 0x3175(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData97[0x2];                                       // 0x3176(0x0002) MISSED OFFSET
	struct FVector                                     CallFunc_GetSocketLocation_ReturnValue;                   // 0x3178(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData98[0xC];                                       // 0x3184(0x000C) MISSED OFFSET
	struct UObject_FTransform                          CallFunc_K2_GetComponentToWorld_ReturnValue;              // 0x3190(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakTransform_Location;                         // 0x31C0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_BreakTransform_Rotation;                         // 0x31CC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakTransform_Scale;                            // 0x31D8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData99[0xC];                                       // 0x31E4(0x000C) MISSED OFFSET
	struct UObject_FTransform                          CallFunc_MakeTransform_ReturnValue;                       // 0x31F0(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      CallFunc_BeginSpawningActorFromClass_ReturnValue;         // 0x3220(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      CallFunc_FinishSpawningActor_ReturnValue;                 // 0x3228(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_K2_IsTimerActive_ReturnValue;                    // 0x3230(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_K2_IsTimerActive_ReturnValue2;                   // 0x3231(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData100[0x6];                                      // 0x3232(0x0006) MISSED OFFSET
	class USceneComponent*                             CallFunc_K2_GetRootComponent_ReturnValue;                 // 0x3238(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UAudioComponent*                             CallFunc_PlaySoundAttached_ReturnValue;                   // 0x3240(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate;                     // 0x3248(0x0014) (ZeroConstructor, Transient, DuplicateTransient)
	struct FName                                       K2Node_CustomEvent_EventCustomName;                       // 0x3258(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class FString                                      K2Node_CustomEvent_EventCustomString;                     // 0x3260(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class AActor*                                      K2Node_CustomEvent_InstigatorActor;                       // 0x3270(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class FString                                      CallFunc_Split_LeftS;                                     // 0x3278(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class FString                                      CallFunc_Split_RightS;                                    // 0x3288(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_Split_ReturnValue;                               // 0x3298(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_NameName_ReturnValue;                 // 0x3299(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_StrStr_ReturnValue;                   // 0x329A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_StrStr_ReturnValue2;                  // 0x329B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate2;                    // 0x329C(0x0014) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                CallFunc_Array_Add_NewItem_RefProperty;                   // 0x32AC(0x0004) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm, IsPlainOldData)
	int                                                CallFunc_Array_Add_NewItem2_RefProperty;                  // 0x32B0(0x0004) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm, IsPlainOldData)
	bool                                               CallFunc_Array_Add_NewItem3_RefProperty;                  // 0x32B4(0x0001) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm, IsPlainOldData)
	bool                                               CallFunc_Array_Add_NewItem4_RefProperty;                  // 0x32B5(0x0001) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm, IsPlainOldData)
	unsigned char                                      UnknownData101[0x2];                                      // 0x32B6(0x0002) MISSED OFFSET
	TArray<class AActor*>                              CallFunc_SphereOverlapActors_NEW_ActorsToIgnore_RefProperty;// 0x32B8(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TekStrider_Character_BP.TekStrider_Character_BP_C");
		return ptr;
	}


	void Get_Charge_Variable_Interface(TEnumAsByte<E_ChargeVariableNames> variableType, float* fValue, double* dValue, bool* bBValue, int* iValue);
	void GetNumBatteries(int* numBatteries);
	void STATIC_BPOnDinoCheat(struct FName* CheatName, bool* bSetValue, float* Value);
	void Restrict_Transmitter_VFX();
	void BP_OnStartCarried(class APrimalDinoCharacter** aDino);
	bool BPCanCryo(class AShooterPlayerController** ForPC);
	void Get_Number_Of_Missions_Required_To_Tame_This_Strider_Scaled_By_Level(int* OutputPin);
	void release_right_click();
	void Timeout_Check_for_Still_Holding_Right_Click();
	void update_shield_item_durability_based_on_health();
	void Deactivate_Transmitter_Vfx_on_Timer();
	void Triggered_Lethal_Dmg();
	void ResetLinkedDediStorageRepVars();
	class FString MakeDediStorageTitleString(const class FString& BoxName, class UClass* ItemType, class AShooterPlayerController* ForShooterPC, int ItemCount, float DistanceToBox);
	void UpdateLinkedDediStorageRepVars();
	void ConstructLinkedDediStorageTitle(class AShooterPlayerController* ForShooterPC, class FString* Title);
	void Has_Mutagel_in_Last_Slot(class APlayerController* PC, bool* HasMutagelInLastSlot);
	void Force_Destroy_Strider();
	float affinity_per_hack_calculation(float Taming_speed_multiplier, bool for_detecting_affinity, bool* in_grace_period, float* time_until_grace_period_ends, float* time_until_no_more_affinity, float* affinity_gained_before_taming_mult);
	float amount_of_affinity_gained_as_appropriate_to_the_dino_level();
	void RefreshNearbyDediStorageArrays();
	void CanTransferAnyItemsToNearbyDediStorages(bool* bResult);
	void CanTransferItemToDediStorage(class UPrimalItem* CheckItem, class ABP_DedicatedStorage_C* CheckStorage, bool bCheckForBlacklist, bool* bResult);
	void CanUseLinkedDediStorageLogic(bool* bResult);
	void GetLinkedDediStorageFloatingHudTitle(class AShooterPlayerController* ForShooterPC, class FString* TitleString, struct FLinearColor* TitleColor);
	void GetNameStringForDediStorage(class ABP_DedicatedStorage_C* ForStorage, class AShooterPlayerController* ForShooterPC, bool bAppendDistance, class FString* NameString);
	void ValidateLinkedDediStorage(bool* bIsValid);
	void TryTransferItemsToLinkedDediStorage(bool* bSuccess);
	void RemoveIncompatibleDediStoragesFromArray(TArray<class ABP_DedicatedStorage_C*>* FromArray);
	void TryTransferItemsToNearbyDediStorages(class AShooterPlayerController* ForShooterPC, bool* bSuccess);
	void IsBlacklistedItemClass(class UClass* CheckItemClass, bool* bResult);
	void IsDediStorageUsable(class ABP_DedicatedStorage_C* CheckStorage, bool* bResult);
	void FindNearbyUsableDediStorageBoxes(bool bSortByDistance, bool bRemoveIncompatibleStorages, bool bRemoveLinkedStorage, bool* bFoundAny, TArray<class ABP_DedicatedStorage_C*>* FoundBoxes);
	void TryDoDediStorageHarvestTransferMultiUse(class APlayerController* ForPC, int UseIndex, bool* bSuccess);
	void ClientDoDediStorageHarvestTransferMultiUse(class APlayerController* ForPC, int ClientUseIndex, bool* bSuccess);
	void STATIC_GetDediStorageHarvestTransferMultiUseEntries(class AShooterPlayerController* ForShooterPC, TArray<struct FMultiUseEntry>* AppendToEntries);
	bool BPClientHandleNetExecCommand(struct FName* CommandName, class APlayerController** ForPC, struct FBPNetExecParams* ExecParams);
	void BPOnRefreshColorization(TArray<struct FLinearColor>* Colors);
	void ClearLinkedDediStorage();
	void BP_OnUncryo(class AShooterPlayerController** ForPC);
	void BP_OnCryo(class AShooterPlayerController** ForPC);
	void SetLinkedDediStorage(class ABP_DedicatedStorage_C* NewLinkedStorage);
	void Change_Filter_to_Only_Dinos();
	void Change_Filter_to_Only_Humans();
	void Change_Filter_to_Both_Dinos_And_Humans();
	void Detect_Quicktap_Right_Click();
	void spawn_tamed_inventory();
	void spawn_wild_inventory();
	void determine_and_request_appropriate_melee_attack();
	float STATIC_BlueprintGetAttackWeight(int* AttackIndex, float* inputWeight, float* Distance, float* attackRangeOffset, class AActor** OtherTarget);
	void STATIC_combined_can_attack(int Attack_index, float Dist, float attack_range_offset, bool* can_attack);
	bool BlueprintCanRiderAttack(int* AttackIndex);
	bool BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget);
	void print_string_manual(const class FString& String);
	void BPNotifyClearRider(class AShooterCharacter** RiderClearing);
	void BPNotifySetRider(class AShooterCharacter** RiderSetting);
	float Get_Charge_Capacity();
	void toggle_transmitter_vfx(bool Activate, double time_activated);
	void update_tame_percent_on_material(float Percent);
	void set_up_dynamic_mats();
	void Focus_Suck_Location_at_Target();
	bool BPHandlePoop();
	bool BPPreventFirstPerson();
	bool BPPreventInputType(TEnumAsByte<EPrimalCharacterInputType>* inputType);
	class UAnimMontage* BPOverrideHurtAnim(float* DamageTaken, class APawn** PawnInstigator, class AActor** DamageCauser, bool* bIsLocalPath, bool* bIsPointDamage, struct FVector* PointDamageLocation, struct FVector* PointDamageHitNormal, struct FDamageEvent* DamageEvent);
	float BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo);
	void BPOnLethalDamage(float* KillingDamage, class AController** Killer, class AActor** DamageCauser, struct FDamageEvent* DamageEvent, bool* bPreventDeath);
	void Reset_Blend_Time_After_Timer();
	void set_blend_time(float InputPin);
	void BlueprintAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject);
	void STATIC_tick_events();
	float BP_GetCustomModifier_MaxSpeed();
	void Detect_Double_Tap_Right_Click();
	void Detect_Double_Tap_Crouch();
	void Get_Current_Inventory_Mutagel_Count(class UObject* PC, int* current_amount);
	void Get_Required_Mutagel_Count(int* needed_amount);
	void Use_Mutagel_And_Begin_Hacking(class APlayerController* PC);
	bool completed_enough_missions();
	bool backup_timer_has_expired_to_bypass_the_wander_distance_if_needed();
	bool has_wandered_far_enough_to_be_able_to_hack_again(float* remaining_distance);
	bool Is_Able_To_Initiate_A_Hack_Attempt(class APlayerController* PC);
	void Has_Mutagel_Ready();
	bool Has_Required_Mutagel(class UObject* player_controller, int* Mutagel_Player_Has, int* Mutagel_Required);
	void spawn_targeted_hacking_particle(const struct FVector& hacking_loc, class UObject* Player);
	void Detect_If_Able_To_Be_Hacked__For_blinking_lights_only(bool* can_hack, bool* should_be_visible);
	void (float _1, float _2, float* Result);
	void advance_hacking_point();
	void set_up_hacking_interaction_points();
	float BP_GetCustomModifier_RotationRate();
	void STATIC_Is_Looking_At_Specific_Hack_Interaction_Point(class AShooterCharacter* Player, bool* Is_Looking_at, struct FVector* Hack_Interaction_Spot_World_Loc);
	void activate_current_Hack_Interaction_Spot();
	void ReceiveTick(float* DeltaSeconds);
	struct FVector BPOverrideFloatingHUDLocation();
	void Throttled_Request_Mission_Count(class AShooterCharacter* Player);
	bool BPDinoTooltipCustomTamingProgressBar(bool* overrideTamingProgressBarIfActive, float* progressPercent, class FString* Label);
	void on_hacking_hit_success();
	void on_hacking_hit_fail();
	void ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser);
	void hacking_success();
	void Sync_Mission_Complete_Status(class AShooterCharacter* Player);
	void Restrict_Sync_Mission_Complete_Status();
	void BPNotifyToggleHUD(bool* bHudHidden);
	void On_Passenger_Weapon_Changed(class AShooterWeapon* newWeapon);
	void BPNotifyAddPassenger(class APrimalCharacter** PassengerChar, int* SeatIndex);
	void BPNotifyClearPassenger(class APrimalCharacter** PassengerChar, int* SeatIndex);
	void BP_OnBasedPawnRemovedNotify(class AActor** RemovedActor);
	int BPOverrideGetAttackAnimationIndex(int* AttackIndex, TArray<class UAnimMontage*>* AnimationArray);
	void Spawn_Tek_Transmitter(const struct FVector& NewParam, const struct FRotator& NewParam1);
	void BPClientDoMultiUse(class APlayerController** ForPC, int* ClientUseIndex);
	bool BPTryMultiUse(class APlayerController** ForPC, int* UseIndex);
	TArray<struct FMultiUseEntry> BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
	void Spawn_Bed(const struct FVector& NewParam, const struct FRotator& NewParam1);
	bool STATIC_BPServerHandleNetExecCommand(class APlayerController** FromPC, struct FName* CommandName, struct FBPNetExecParams* ExecParams);
	void InterceptInputEvent(class FString* InputName);
	void spawn_platform_saddle();
	void Spawn_Attachments(int Manually_Set_Head, int Manually_Set_Chest);
	void Reset_Moveright();
	void Reset_Moveforward();
	bool BP_InterceptMoveForward(float* AxisValue);
	bool BP_InterceptMoveRight(float* AxisValue);
	void STATIC_BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements);
	void BPChangedActorTeam();
	void BPTimerNonDedicated();
	void BlueprintDrawFloatingHUD(class AShooterHUD** HUD, float* CenterX, float* CenterY, float* DrawScale);
	void BPTimerServer();
	void Update_Max_Charge();
	void STATIC_BPNotifyLevelUp(int* ExtraCharacterLevel);
	void Unstasis_Logic();
	void BPSetupTamed(bool* bWasJustTamed);
	void OnRep_bAutoChargeActive();
	void Get_Actual_Radius(float* Radius);
	void Get_Passive_Charge_Gain(float* Charge_Gain);
	void Update_Charge_Radius();
	void Auto_Charge_Notify();
	void Init();
	void Initialize_Charge_Buff();
	void Create_Charge_Buff();
	void Destroy_Charge_Buff();
	void On_Charge_Event();
	void Create_Charge_Manager();
	void GetAttachmentBuffs(TArray<class ABuff_TekStrider_Attachment_Base_C*>* Buffs);
	float BPGetCrosshairAlpha();
	void BPDoAttack(int* AttackIndex);
	void GetAttachmentBuff(TEnumAsByte<EPrimalEquipmentType> AttachmentType, class ABuff_TekStrider_Attachment_Base_C** Buff);
	void BPNotifyInventoryItemChange(bool* bIsItemAdd, class UPrimalItem** theItem, bool* bEquipItem);
	void BPNotifyStructurePlacedNearby(class APrimalStructure** NewStructure);
	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Charge_Variable_Event_Boolean_MulticastInterface(TEnumAsByte<E_ChargeVariableNames> variableType, bool bBValue);
	void Charge_Variable_Event_Float_Multicast_Interface(TEnumAsByte<E_ChargeVariableNames> variableType, float fValue);
	void Charge_Variable_Event_Double_MulticastInterface(TEnumAsByte<E_ChargeVariableNames> variableType, double dValue);
	void Charge_Variable_Event_Boolean_Interface(TEnumAsByte<E_ChargeVariableNames> variableType, bool bBValue);
	void ChargeVariableEventFloatInterface(TEnumAsByte<E_ChargeVariableNames> variableType, float fValue);
	void ChargeVariableEventDoubleInterface(TEnumAsByte<E_ChargeVariableNames> variableType, double dValue);
	void ChargeVariableEventIntInterface(TEnumAsByte<E_ChargeVariableNames> variableType, int iValue);
	void ChargeVariableEventIntMulticastInterface(TEnumAsByte<E_ChargeVariableNames> variableType, int iValue);
	void OnAttachmentBuffAdded(class ABuff_TekStrider_Attachment_Base_C* Buff);
	void OnAttachmentBuffRemoved(class ABuff_TekStrider_Attachment_Base_C* Buff);
	void BP_OnJumpPressed();
	void SetInventoryTributeStatus(bool IsTribute_);
	void BPUnstasis();
	void ReceiveBeginPlay();
	void ChargeVariableEvent(TEnumAsByte<E_ChargeVariableNames> variableType, bool bBValue, float fValue, double dValue);
	void ChargeVariableEvent_Multicast(TEnumAsByte<E_ChargeVariableNames> variableType, bool bBValue, float fValue, double dValue);
	void CheckForBatteriesAndUpdate_Multicast();
	void OnDied_Event(class APrimalCharacter* DiedCharacter);
	void CreateChargeBuff_Multicast();
	void DestroyChargeBuff_Multicast();
	void Charge_Variable_Event_Interface(TEnumAsByte<E_ChargeVariableNames> variableType, bool bBValue, float fValue, double dValue, int iValue);
	void Charge_Variable_Event_Trigger_Multicast_Interface(TEnumAsByte<E_ChargeVariableNames> variableType, bool bBValue, float fValue, double dValue, int iVariable);
	void Interface_Check_for_Batteries_and_Update_Multicast();
	void Set_Charge_Variable_Interface(TEnumAsByte<E_ChargeVariableNames> variableType, bool multicast, float fValue, double dValue, bool bBValue, bool triggerEvent, bool multicastEvent, int iValue);
	void RandomizeUntamedStart();
	void NetUpdateCharge();
	void BPDinoPostBeginPlay();
	void fade_in_platform();
	void Multicast_Start_Taming();
	void multicast_on_hack_hit_success(const struct FVector& last_tame_location);
	void multicast_on_hack_hit_fail();
	void multicast_on_hack_complete(const struct FVector& last_hack_spot);
	void multicast_on_complete_tame();
	void set_strider_ref_for_hacking_vfx();
	void immediately_set_platform_visible(bool Visible);
	void MultiOnStriderDestroyed();
	void EnableInputMulti(bool NewParam);
	void GetReadyToDieMulti();
	void GetReadyToDieSkip();
	void multicast_play_resource_suck_vfx_on_rocks(const struct FVector& Loc);
	void multicast_play_resource_suck_vfx_on_trees(const struct FVector& Loc);
	void multicast_update_tame_percent_on_body(float Percent);
	void multicast_activate_transmitter_vfx(double time_activated);
	void multicast_deactivate_transmitter_vfx();
	void SetupEventBindingsForDediStorage(class ABP_DedicatedStorage_C* ForStorage, bool bBind);
	void OnLinkedDediStorageDestroyed();
	void Multi_RefreshLinkedDediStorageRef(class ABP_DedicatedStorage_C* LinkedStorage);
	void Server_RequestFixLinkedDediStorageRef();
	void OnActorCustomEvent_Event(const struct FName& EventCustomName, const class FString& EventCustomString, class AActor* InstigatorActor);
	void ExecuteUbergraph_TekStrider_Character_BP(int EntryPoint);
	void OnStructurePlacedOnSaddle__DelegateSignature(class APrimalStructure* Structure);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

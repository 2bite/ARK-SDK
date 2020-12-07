#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Dragon_Character_BP_Boss_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Dragon_Character_BP_Boss.Dragon_Character_BP_Boss_C
// 0x01E7 (0x236F - 0x2188)
class ADragon_Character_BP_Boss_C : public ADino_Character_BP_C
{
public:
	class UDinoCharacterStatusComponent_BP_DragonBoss_C* DinoCharacterStatus_BP_DragonBoss_C1;                     // 0x2188(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDinoCharacterStatusComponent_BP_Dragon_C*   DinoCharacterStatus_BP_Dragon_C1;                         // 0x2190(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bWasTamed;                                                // 0x2198(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x2199(0x0003) MISSED OFFSET
	float                                              FallingPeriod;                                            // 0x219C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinimumHealthRequiredForFlight;                           // 0x21A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasFlownSinceSpawn;                                      // 0x21A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x21A5(0x0003) MISSED OFFSET
	int                                                DifficultyIndex;                                          // 0x21A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x21AC(0x0004) MISSED OFFSET
	TArray<struct FLinearColor>                        healthBarColorsByDifficulty;                              // 0x21B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x21C0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue2;                           // 0x21C1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x21C2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x21C3(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_GreaterEqual_IntInt_ReturnValue;                 // 0x21C4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue2;                         // 0x21C5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x21C6(0x0002) MISSED OFFSET
	class AGameMode*                                   CallFunc_GetGameMode_ReturnValue;                         // 0x21C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterGameMode*                            K2Node_DynamicCast_AsShooterGameMode;                     // 0x21D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x21D8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x21D9(0x0007) MISSED OFFSET
	class FString                                      CallFunc_Concat_StrStr_ReturnValue;                       // 0x21E0(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              K2Node_Event_DeltaSeconds;                                // 0x21F0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x21F4(0x0004) MISSED OFFSET
	class FString                                      CallFunc_Concat_StrStr_ReturnValue2;                      // 0x21F8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                            K2Node_DynamicCast_AsSphereComponent;                     // 0x2208(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x2210(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsAlive_ReturnValue;                             // 0x2211(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BPIsTamed_ReturnValue;                           // 0x2212(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x2213(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue3;                         // 0x2214(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue;                 // 0x2215(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x2216(0x0002) MISSED OFFSET
	float                                              CallFunc_Add_FloatFloat_ReturnValue;                      // 0x2218(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue;                  // 0x221C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x221D(0x0003) MISSED OFFSET
	class UPrimalAIState*                              CallFunc_GetActiveState_ReturnValue;                      // 0x2220(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue;                        // 0x2228(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x222C(0x0004) MISSED OFFSET
	struct FDinoAttackInfo                             CallFunc_Array_Get_Item;                                  // 0x2230(0x0130) (Transient, DuplicateTransient)
	bool                                               CallFunc_Greater_IntInt_ReturnValue;                      // 0x2360(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ObjectObject_ReturnValue;             // 0x2361(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x2];                                       // 0x2362(0x0002) MISSED OFFSET
	float                                              CallFunc_GetMaxHealth_ReturnValue;                        // 0x2364(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue;                   // 0x2368(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_LessEqual_FloatFloat_ReturnValue;                // 0x236C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue3;                        // 0x236D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue4;                         // 0x236E(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Dragon_Character_BP_Boss.Dragon_Character_BP_Boss_C");
		return ptr;
	}


	struct FVector BPGetHealthBarColor();
	void BPSentKilledNotification(class AShooterPlayerController** ToPC);
	void STATIC_Force_to_WanderOnLand();
	void ForceToFlying();
	bool BlueprintOverrideWantsToRun(bool* bInputWantsToRun);
	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Dragon_Character_BP_Boss(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

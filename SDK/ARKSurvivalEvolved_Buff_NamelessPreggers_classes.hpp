#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_NamelessPreggers_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_NamelessPreggers.Buff_NamelessPreggers_C
// 0x01C8 (0x0B40 - 0x0978)
class ABuff_NamelessPreggers_C : public ABuff_Base_SuperDisease_C
{
public:
	float                                              TimeLeft;                                                 // 0x0978(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               bSpawnedBaby;                                             // 0x097C(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x097D(0x0003) MISSED OFFSET
	struct FVector                                     XenoSpawnLocOffset;                                       // 0x0980(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     XenoSpawnAddVelocity;                                     // 0x098C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ChestBoneTimerCount;                                      // 0x0998(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     MaxBoneScale_Chest1_Male;                                 // 0x099C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     MaxBoneTranslation_Chest1_Male;                           // 0x09A8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       Chest1BoneNameMale;                                       // 0x09B4(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     MaxBoneScale_Chest1_Female;                               // 0x09BC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     MaxBoneTranslation_Chest1_Female;                         // 0x09C8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       Chest1BoneNameFemale;                                     // 0x09D4(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     MaxBoneScale_Chest2_Male;                                 // 0x09DC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     MaxBoneTranslation_Chest2_Male;                           // 0x09E8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       Chest2BoneNameMale;                                       // 0x09F4(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     MaxBoneScale_Chest2_Female;                               // 0x09FC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     MaxBoneTranslation_Chest2_Female;                         // 0x0A08(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       Chest2BoneNameFemale;                                     // 0x0A14(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0A1C(0x0004) MISSED OFFSET
	struct FARKDinoData                                QueenDinoData;                                            // 0x0A20(0x0040) (Edit, BlueprintVisible, DisableEditOnInstance, SaveGame)
	float                                              TotalExperienceGained;                                    // 0x0A60(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	float                                              ExperienceGainMultiplier;                                 // 0x0A64(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class APrimalDinoCharacter*                        OffspringChar;                                            // 0x0A68(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              OffspringExperiencePerLevel;                              // 0x0A70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseSpawnFromDinoData;                                    // 0x0A74(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0A75(0x0003) MISSED OFFSET
	float                                              MaxExperienceGained;                                      // 0x0A78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0A7C(0x0004) MISSED OFFSET
	class UClass*                                      DinoSpawnClass;                                           // 0x0A80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bShouldFreezePregnancy;                                   // 0x0A88(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0A89(0x0007) MISSED OFFSET
	class FString                                      HomeMap;                                                  // 0x0A90(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      CurrentMap;                                               // 0x0AA0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance)
	int                                                CallFunc_MakeLiteralInt_ReturnValue;                      // 0x0AB0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0AB4(0x0004) MISSED OFFSET
	class AXenomorph_Character_BP_C*                   K2Node_DynamicCast_AsXenomorph_Character_BP_C;            // 0x0AB8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0AC0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0AC1(0x0007) MISSED OFFSET
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue;                // 0x0AC8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Variable;                                        // 0x0AD0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue;                   // 0x0AD4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue;                          // 0x0AD8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_FFloor_ReturnValue;                              // 0x0ADC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_RandomIntegerInRange_ReturnValue;                // 0x0AE0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_LessEqual_IntInt_ReturnValue;                    // 0x0AE4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<EPrimalCharacterStatusValue>           K2Node_Select_ReturnValue;                                // 0x0AE5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Select_CmpSuccess;                                 // 0x0AE6(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      CallFunc_Conv_IntToByte_ReturnValue;                      // 0x0AE7(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_GetLevelUpPoints_ReturnValue;                    // 0x0AE8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      CallFunc_GetValidIndex_ReturnValue;                       // 0x0AEC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0AED(0x0003) MISSED OFFSET
	int                                                CallFunc_Add_IntInt_ReturnValue2;                         // 0x0AF0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue3;                         // 0x0AF4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Variable2;                                       // 0x0AF8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      CallFunc_Conv_IntToByte_ReturnValue2;                     // 0x0AFC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0AFD(0x0003) MISSED OFFSET
	int                                                CallFunc_Add_IntInt_ReturnValue4;                         // 0x0B00(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      CallFunc_GetValidIndex_ReturnValue2;                      // 0x0B04(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue;                         // 0x0B05(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x2];                                       // 0x0B06(0x0002) MISSED OFFSET
	class AActor*                                      CallFunc_GetOwner_ReturnValue;                            // 0x0B08(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_GetLevelUpPoints_ReturnValue2;                   // 0x0B10(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x0B14(0x0004) MISSED OFFSET
	class AShooterCharacter*                           K2Node_DynamicCast_AsShooterCharacter;                    // 0x0B18(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x0B20(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData11[0x7];                                       // 0x0B21(0x0007) MISSED OFFSET
	class FString                                      CallFunc_Conv_IntToString_ReturnValue;                    // 0x0B28(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class AController*                                 CallFunc_GetController_ReturnValue;                       // 0x0B38(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_NamelessPreggers.Buff_NamelessPreggers_C");
		return ptr;
	}


	void BPNotifyExperienceGained(float* ActualExpGained, float* ExpectedExpGain, TEnumAsByte<EXPType>* ExpTypeGained);
	void BPSetupForInstigator(class AActor** ForInstigator);
	void BPDeactivated(class AActor** ForInstigator);
	TArray<struct FBoneModifier> STATIC_BPModifyPlayerBoneModifiers(TArray<struct FBoneModifier>* InBoneModifiers);
	void HandleBuffAnimNotify(struct FName* AnimNotifyName, class FString* AnimNotifyStringData);
	void UpdateBuffPersistentData();
	void ReceiveBeginPlay();
	void BuffTickClient(float* DeltaTime);
	void STATIC_BPDrawBuffStatusHUD(class AShooterHUD** HUD, float* XPos, float* YPos, float* ScaleMult);
	void BuffTickServer(float* DeltaTime);
	void UserConstructionScript();
	void Multi_SetupBaby();
	void ExecuteUbergraph_Buff_NamelessPreggers(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

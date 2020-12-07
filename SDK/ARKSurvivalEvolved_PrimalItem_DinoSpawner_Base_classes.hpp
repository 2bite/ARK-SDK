#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_DinoSpawner_Base_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItem_DinoSpawner_Base.PrimalItem_DinoSpawner_Base_C
// 0x01F8 (0x0BE0 - 0x09E8)
class UPrimalItem_DinoSpawner_Base_C : public UPrimalItem_Base_C
{
public:
	bool                                               DebugStatConversion;                                      // 0x09E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ConvertItemStats;                                         // 0x09E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ConvertItemStatsOnlyIfMissingData;                        // 0x09EA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x09EB(0x0005) MISSED OFFSET
	TArray<struct FItemToDinoStatParams>               ItemToDinoStatMapping;                                    // 0x09F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FDinoSetup                                  DinoSetup;                                                // 0x0A00(0x00F0) (Edit, BlueprintVisible)
	struct FName                                       DinoStatsDataName;                                        // 0x0AF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<TEnumAsByte<EPrimalCharacterStatusValue>>   StatsToDisplayOnTooltip;                                  // 0x0AF8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BaselineStatValueForTooltipPercentageDisplay;             // 0x0B08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       DinoColorizationDataName;                                 // 0x0B0C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SpawningDinoAtLocation;                                   // 0x0B14(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CallFunc_GetDinoColorizationData_HasAnyColorData;         // 0x0B20(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0B21(0x0007) MISSED OFFSET
	TArray<unsigned char>                              CallFunc_GetDinoColorizationData_ColorData;               // 0x0B28(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                Temp_int_Variable;                                        // 0x0B38(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      CallFunc_Conv_IntToByte_ReturnValue;                      // 0x0B3C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0B3D(0x0003) MISSED OFFSET
	int                                                CallFunc_Add_IntInt_ReturnValue;                          // 0x0B40(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      CallFunc_GetValidIndex_ReturnValue;                       // 0x0B44(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0B45(0x0003) MISSED OFFSET
	int                                                CallFunc_GetDinoStat_NumDinoLevels;                       // 0x0B48(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_GetDinoStat_StatMapIndexUsed;                    // 0x0B4C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_GetDinoStat_Success;                             // 0x0B50(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0B51(0x0003) MISSED OFFSET
	int                                                CallFunc_Conv_ByteToInt_ReturnValue;                      // 0x0B54(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_LessEqual_IntInt_ReturnValue;                    // 0x0B58(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0B59(0x0007) MISSED OFFSET
	class AActor*                                      CallFunc_GetOwner_ReturnValue;                            // 0x0B60(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalCharacter*                            K2Node_DynamicCast_AsPrimalCharacter;                     // 0x0B68(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0B70(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0B71(0x0003) MISSED OFFSET
	struct FRotator                                    CallFunc_K2_GetActorRotation_ReturnValue;                 // 0x0B74(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AController*                                 CallFunc_GetCharacterController_ReturnValue;              // 0x0B80(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue;                 // 0x0B88(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x0B94(0x0004) MISSED OFFSET
	class AShooterPlayerController*                    K2Node_DynamicCast_AsShooterPlayerController;             // 0x0B98(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x0BA0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x0BA1(0x0007) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue;                         // 0x0BA8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_IsRunningOnServer_OutNetworkMode;                // 0x0BB0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x7];                                       // 0x0BB1(0x0007) MISSED OFFSET
	class APrimalDinoCharacter*                        CallFunc_SpawnCustomDino_ReturnValue;                     // 0x0BB8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum_CmpSuccess;                             // 0x0BC0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x0BC1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData10[0x2];                                       // 0x0BC2(0x0002) MISSED OFFSET
	int                                                CallFunc_MakeLiteralInt_ReturnValue;                      // 0x0BC4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue;                         // 0x0BC8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData11[0x7];                                       // 0x0BC9(0x0007) MISSED OFFSET
	class FString                                      CallFunc_Array_Insert_NewItem_RefProperty;                // 0x0BD0(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_DinoSpawner_Base.PrimalItem_DinoSpawner_Base_C");
		return ptr;
	}


	struct FColor BPGetCustomInventoryWidgetTextColor();
	class FString BPGetCustomInventoryWidgetText();
	void DoesClientHaveStatData(bool* HasData);
	bool BPCanUse(bool* bIgnoreCooldown);
	void GetDinoColorizationData(bool* HasAnyColorData, TArray<unsigned char>* ColorData);
	void PreDinoSpawned();
	void CopyDinoStatsFromDino(class UPrimalCharacterStatusComponent* StatusComp, TArray<int>* StatOffsets, TArray<unsigned char>* Colorization);
	void GetStatDisplayString(TEnumAsByte<EPrimalCharacterStatusValue> Stat, int Value, int StatConvertMapIndex, class FString* StatDisplay, class FString* ValueDisplay, bool* ShowInTooltip);
	void STATIC_GetDinoStat(TEnumAsByte<EPrimalCharacterStatusValue> statType, int* NumDinoLevels, int* StatMapIndexUsed, bool* Success);
	class FString STATIC_BPGetItemDescription(class FString* InDescription, bool* bGetLongDescription, class AShooterPlayerController** ForPC);
	void OnDinoSpawned(class APrimalDinoCharacter* NewDino);
	void BlueprintUsed();
	void ExecuteUbergraph_PrimalItem_DinoSpawner_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

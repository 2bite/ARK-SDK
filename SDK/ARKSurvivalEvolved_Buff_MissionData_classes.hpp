#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_MissionData_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_MissionData.Buff_MissionData_C
// 0x0760 (0x1210 - 0x0AB0)
class ABuff_MissionData_C : public APrimalBuff_MissionData
{
public:
	float                                              MissionSuccessFailAlertDuration;                          // 0x0AB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AddedToMissionAlertDuration;                              // 0x0AB4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       MissionFormatLineText;                                    // 0x0AB8(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate;                     // 0x0AE0(0x0014) (ZeroConstructor, Transient, DuplicateTransient)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate2;                    // 0x0AF0(0x0014) (ZeroConstructor, Transient, DuplicateTransient)
	struct FFormatTextArgument                         K2Node_MakeStruct_FormatTextArgument;                     // 0x0B00(0x0050) (Transient, DuplicateTransient)
	bool                                               CallFunc_HasAuthority_ReturnValue;                        // 0x0B50(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0B51(0x0007) MISSED OFFSET
	class APrimalBuff_MissionData*                     K2Node_CustomEvent_MissionDataBuff2;                      // 0x0B58(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AMissionType*                                K2Node_CustomEvent_Mission2;                              // 0x0B60(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_bSuccess;                              // 0x0B68(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<EMissionAlertType>                     K2Node_Select_ReturnValue;                                // 0x0B69(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Select_CmpSuccess;                                 // 0x0B6A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x0B6B(0x0005) MISSED OFFSET
	class APlayerController*                           CallFunc_GetOwnerController_ReturnValue;                  // 0x0B70(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class USoundBase*                                  K2Node_Select_ReturnValue2;                               // 0x0B78(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Select2_CmpSuccess;                                // 0x0B80(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0B81(0x0007) MISSED OFFSET
	class AShooterPlayerController*                    K2Node_DynamicCast_AsShooterPlayerController;             // 0x0B88(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0B90(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0B91(0x0007) MISSED OFFSET
	TScriptInterface<class UMissionRace_Interface_C>   K2Node_DynamicCast_AsMissionRace_Interface_C;             // 0x0B98(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x0BA8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0BA9(0x0007) MISSED OFFSET
	TScriptInterface<class UMissionRace_Interface_C>   K2Node_DynamicCast_AsMissionRace_Interface_C2;            // 0x0BB0(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast3_CastSuccess;                          // 0x0BC0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0BC1(0x0007) MISSED OFFSET
	TArray<struct FRacePlayerData>                     CallFunc_GetRaceData_RaceData;                            // 0x0BC8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_DoesImplementInterface_ReturnValue;              // 0x0BD8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0BD9(0x0003) MISSED OFFSET
	int                                                CallFunc_RacePlayerData_IndexOfController_ReturnValue;    // 0x0BDC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_RacePlayerData_NumCheckpoints_ReturnValue;       // 0x0BE0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_GetPlayerRanking_Ranking;                        // 0x0BE4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Subtract_IntInt_ReturnValue;                     // 0x0BE8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_RacePlayerData_GetCheckpointData_bCheckpointReached;// 0x0BEC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0BED(0x0003) MISSED OFFSET
	float                                              CallFunc_RacePlayerData_GetCheckpointData_CheckpointTime; // 0x0BF0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue;                          // 0x0BF4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FText                                       CallFunc_Conv_FloatToText_ReturnValue;                    // 0x0BF8(0x0028) (Transient, DuplicateTransient)
	struct FText                                       CallFunc_Conv_IntToText_ReturnValue;                      // 0x0C20(0x0028) (Transient, DuplicateTransient)
	struct FFormatTextArgument                         K2Node_MakeStruct_FormatTextArgument2;                    // 0x0C48(0x0050) (Transient, DuplicateTransient)
	struct FFormatTextArgument                         K2Node_MakeStruct_FormatTextArgument3;                    // 0x0C98(0x0050) (Transient, DuplicateTransient)
	TArray<struct FFormatTextArgument>                 K2Node_MakeArray_Array;                                   // 0x0CE8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FText                                       CallFunc_Conv_StringToText_ReturnValue;                   // 0x0CF8(0x0028) (Transient, DuplicateTransient)
	struct FText                                       CallFunc_Format_ReturnValue;                              // 0x0D20(0x0028) (Transient, DuplicateTransient)
	struct FFormatTextArgument                         K2Node_MakeStruct_FormatTextArgument4;                    // 0x0D48(0x0050) (Transient, DuplicateTransient)
	struct FText                                       K2Node_Select_ReturnValue3;                               // 0x0D98(0x0028) (Transient, DuplicateTransient)
	bool                                               K2Node_Select3_CmpSuccess;                                // 0x0DC0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x0DC1(0x0007) MISSED OFFSET
	struct FFormatTextArgument                         K2Node_MakeStruct_FormatTextArgument5;                    // 0x0DC8(0x0050) (Transient, DuplicateTransient)
	struct FText                                       CallFunc_Conv_StringToText_ReturnValue2;                  // 0x0E18(0x0028) (Transient, DuplicateTransient)
	struct FFormatTextArgument                         K2Node_MakeStruct_FormatTextArgument6;                    // 0x0E40(0x0050) (Transient, DuplicateTransient)
	int                                                CallFunc_Len_ReturnValue;                                 // 0x0E90(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x0E94(0x0004) MISSED OFFSET
	struct FText                                       CallFunc_Conv_StringToText_ReturnValue3;                  // 0x0E98(0x0028) (Transient, DuplicateTransient)
	bool                                               CallFunc_EqualEqual_IntInt_ReturnValue;                   // 0x0EC0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData10[0x7];                                       // 0x0EC1(0x0007) MISSED OFFSET
	struct FFormatTextArgument                         K2Node_MakeStruct_FormatTextArgument7;                    // 0x0EC8(0x0050) (Transient, DuplicateTransient)
	TArray<struct FFormatTextArgument>                 K2Node_MakeArray_Array2;                                  // 0x0F18(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                CallFunc_Len_ReturnValue2;                                // 0x0F28(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x0F2C(0x0004) MISSED OFFSET
	struct FText                                       CallFunc_Conv_StringToText_ReturnValue4;                  // 0x0F30(0x0028) (Transient, DuplicateTransient)
	bool                                               CallFunc_EqualEqual_IntInt_ReturnValue2;                  // 0x0F58(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData12[0x7];                                       // 0x0F59(0x0007) MISSED OFFSET
	struct FFormatTextArgument                         K2Node_MakeStruct_FormatTextArgument8;                    // 0x0F60(0x0050) (Transient, DuplicateTransient)
	bool                                               CallFunc_BooleanOR_ReturnValue;                           // 0x0FB0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData13[0x7];                                       // 0x0FB1(0x0007) MISSED OFFSET
	TArray<struct FFormatTextArgument>                 K2Node_MakeArray_Array3;                                  // 0x0FB8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<struct FMissionAlertEntry>                  K2Node_MakeArray_Array4;                                  // 0x0FC8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FText                                       CallFunc_Format_ReturnValue2;                             // 0x0FD8(0x0028) (Transient, DuplicateTransient)
	struct FText                                       CallFunc_Format_ReturnValue3;                             // 0x1000(0x0028) (Transient, DuplicateTransient)
	class FString                                      CallFunc_Conv_TextToString_ReturnValue;                   // 0x1028(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class FString                                      CallFunc_Conv_TextToString_ReturnValue2;                  // 0x1038(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class APrimalBuff_MissionData*                     K2Node_CustomEvent_MissionDataBuff;                       // 0x1048(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AMissionType*                                K2Node_CustomEvent_Mission;                               // 0x1050(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class FString                                      K2Node_Select_ReturnValue4;                               // 0x1058(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               K2Node_Select4_CmpSuccess;                                // 0x1068(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x1069(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData14[0x6];                                       // 0x106A(0x0006) MISSED OFFSET
	struct FText                                       CallFunc_Conv_StringToText_ReturnValue5;                  // 0x1070(0x0028) (Transient, DuplicateTransient)
	struct FFormatTextArgument                         K2Node_MakeStruct_FormatTextArgument9;                    // 0x1098(0x0050) (Transient, DuplicateTransient)
	struct FText                                       CallFunc_Conv_StringToText_ReturnValue6;                  // 0x10E8(0x0028) (Transient, DuplicateTransient)
	TArray<struct FFormatTextArgument>                 K2Node_MakeArray_Array5;                                  // 0x1110(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FFormatTextArgument                         K2Node_MakeStruct_FormatTextArgument10;                   // 0x1120(0x0050) (Transient, DuplicateTransient)
	struct FText                                       CallFunc_Format_ReturnValue4;                             // 0x1170(0x0028) (Transient, DuplicateTransient)
	TArray<struct FFormatTextArgument>                 K2Node_MakeArray_Array6;                                  // 0x1198(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class FString                                      CallFunc_Conv_TextToString_ReturnValue3;                  // 0x11A8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<struct FMissionAlertEntry>                  K2Node_MakeArray_Array7;                                  // 0x11B8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FText                                       CallFunc_Format_ReturnValue5;                             // 0x11C8(0x0028) (Transient, DuplicateTransient)
	class AShooterCharacter*                           K2Node_DynamicCast_AsShooterCharacter;                    // 0x11F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast4_CastSuccess;                          // 0x11F8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData15[0x7];                                       // 0x11F9(0x0007) MISSED OFFSET
	class FString                                      CallFunc_Conv_TextToString_ReturnValue4;                  // 0x1200(0x0010) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_MissionData.Buff_MissionData_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnPlayerRemovedFromMissionEvent(class APrimalBuff_MissionData* MissionDataBuff, class AMissionType* Mission, bool bSuccess);
	void OnPlayerAddedToMissionEvent(class APrimalBuff_MissionData* MissionDataBuff, class AMissionType* Mission);
	void ExecuteUbergraph_Buff_MissionData(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

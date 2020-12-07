#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_Spawner_HoverSkiff_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItem_Spawner_HoverSkiff.PrimalItem_Spawner_HoverSkiff_C
// 0x0108 (0x0CE8 - 0x0BE0)
class UPrimalItem_Spawner_HoverSkiff_C : public UPrimalItem_DinoSpawner_Base_C
{
public:
	int                                                NumSpawnAttempts;                                         // 0x0BE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0BE4(0x0004) MISSED OFFSET
	class AShooterCharacter*                           CraftingShooterChar;                                      // 0x0BE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct UObject_FTransform                          SpawnTransform;                                           // 0x0BF0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class FString                                      SkiffSpawnString;                                         // 0x0C20(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              CallFunc_RandomFloatInRange_ReturnValue;                  // 0x0C30(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_MakeRot_ReturnValue;                             // 0x0C34(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Variable;                                        // 0x0C40(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      CallFunc_Conv_IntToByte_ReturnValue;                      // 0x0C44(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0C45(0x0003) MISSED OFFSET
	int                                                CallFunc_Add_IntInt_ReturnValue;                          // 0x0C48(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      CallFunc_GetValidIndex_ReturnValue;                       // 0x0C4C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0C4D(0x0003) MISSED OFFSET
	int                                                CallFunc_Conv_ByteToInt_ReturnValue;                      // 0x0C50(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_GetDinoStat_NumDinoLevels;                       // 0x0C54(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_GetDinoStat_StatMapIndexUsed;                    // 0x0C58(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_GetDinoStat_Success;                             // 0x0C5C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_LessEqual_IntInt_ReturnValue;                    // 0x0C5D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_GetDinoColorizationData_HasAnyColorData;         // 0x0C5E(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x0C5F(0x0001) MISSED OFFSET
	TArray<unsigned char>                              CallFunc_GetDinoColorizationData_ColorData;               // 0x0C60(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                CallFunc_MakeLiteralInt_ReturnValue;                      // 0x0C70(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue;                         // 0x0C74(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x0C75(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_IsRunningOnServer_OutNetworkMode;                // 0x0C76(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum_CmpSuccess;                             // 0x0C77(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakTransform_Location;                         // 0x0C78(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_BreakTransform_Rotation;                         // 0x0C84(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakTransform_Scale;                            // 0x0C90(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0C9C(0x0004) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue;                         // 0x0CA0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AController*                                 CallFunc_GetCharacterController_ReturnValue;              // 0x0CA8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterPlayerController*                    K2Node_DynamicCast_AsShooterPlayerController;             // 0x0CB0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0CB8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0CB9(0x0007) MISSED OFFSET
	class AActor*                                      CallFunc_GetOwner_ReturnValue;                            // 0x0CC0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AGameState*                                  CallFunc_GetGameState_ReturnValue;                        // 0x0CC8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalDinoCharacter*                        CallFunc_SpawnCustomDino_ReturnValue;                     // 0x0CD0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue2;                            // 0x0CD8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0CD9(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue;                 // 0x0CDC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_Spawner_HoverSkiff.PrimalItem_Spawner_HoverSkiff_C");
		return ptr;
	}


	class FString BPAllowCrafting(class AShooterPlayerController** ForPC);
	void STATIC_GetValidSpawnTransform(struct UObject_FTransform* SpawnTransform, bool* SpawnValid);
	void BPCrafted();
	void SpawnCraftedSkiff();
	void ExecuteUbergraph_PrimalItem_Spawner_HoverSkiff(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Base_Pipe_Flex_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Base_Pipe_Flex.Base_Pipe_Flex_C
// 0x0128 (0x0C30 - 0x0B08)
class ABase_Pipe_Flex_C : public ABase_Pipe_C
{
public:
	float                                              RefreshConnectionsCooldown;                               // 0x0B08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0B0C(0x0004) MISSED OFFSET
	TArray<class USplineMeshComponent*>                SplineMeshes;                                             // 0x0B10(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector>                             ConnectionPoints;                                         // 0x0B20(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame)
	struct FVector                                     ConnectionCenterPoint;                                    // 0x0B30(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0B3C(0x0004) MISSED OFFSET
	class UClass*                                      SearchNearbyPipeType;                                     // 0x0B40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DebugMode;                                                // 0x0B48(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0B49(0x0007) MISSED OFFSET
	double                                             LastRefreshTime_Server;                                   // 0x0B50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue;                        // 0x0B58(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x0B5C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_IntInt_ReturnValue;                   // 0x0B5D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x0B5E(0x0002) MISSED OFFSET
	TArray<class APrimalStructure*>                    CallFunc_SP_GetNearbyStructuresForFlexibleConnection_ReturnValue;// 0x0B60(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<struct FVector>                             CallFunc_SP_GetCentralPointForFlexibleConnection_ConnectionPoints;// 0x0B70(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                                     CallFunc_SP_GetCentralPointForFlexibleConnection_CentralPoint;// 0x0B80(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0B8C(0x0004) MISSED OFFSET
	class APrimalStructure*                            K2Node_Event_DestroyedStructure;                          // 0x0B90(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue;                 // 0x0B98(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_CanRunCosmeticEvents_OutNetworkMode;             // 0x0BA4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum_CmpSuccess;                             // 0x0BA5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x0BA6(0x0002) MISSED OFFSET
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue2;                // 0x0BA8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_IsRunningOnServer_OutNetworkMode;                // 0x0BB4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_IsRunningOnServer_OutNetworkMode2;               // 0x0BB5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum2_CmpSuccess;                            // 0x0BB6(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum3_CmpSuccess;                            // 0x0BB7(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Event_bPipeHasWaterOrPower;                        // 0x0BB8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0BB9(0x0007) MISSED OFFSET
	TArray<class APrimalStructure*>                    CallFunc_SP_GetNearbyStructuresForFlexibleConnection_ReturnValue2;// 0x0BC0(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<struct FVector>                             CallFunc_SP_GetCentralPointForFlexibleConnection_ConnectionPoints2;// 0x0BD0(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                                     CallFunc_SP_GetCentralPointForFlexibleConnection_CentralPoint2;// 0x0BE0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue2;                       // 0x0BEC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue3;                       // 0x0BF0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_IntInt_ReturnValue;                      // 0x0BF4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_IntInt_ReturnValue2;                  // 0x0BF5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0xA];                                       // 0x0BF6(0x000A) MISSED OFFSET
	struct UObject_FTransform                          CallFunc_AddComponent_RelativeTransform_AddComponentDefaultTransform;// 0x0C00(0x0030) (Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Base_Pipe_Flex.Base_Pipe_Flex_C");
		return ptr;
	}


	void ResetRefreshConnectionsCooldown(class APlayerController* ForPC);
	void IsAllowedToRefreshConnections(class APlayerController* ForPC, bool* Allowed);
	TArray<struct FMultiUseEntry> STATIC_BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
	bool BPTryMultiUse(class APlayerController** ForPC, int* UseIndex);
	void UpdateWaterStatus();
	void LinkPipes(TArray<class APrimalStructure*>* ConnectedPipes);
	class FString BPOverrideCantBuildReasonString(int* CantBuildReason);
	void AddSplineMeshComponents(bool UsePreviewMaterial);
	int BPIsAllowedToBuild(int* CurrentAllowedReason, struct FPlacementData* OutPlacementData);
	void UserConstructionScript();
	void UpdateSplineMeshesEvent();
	void ReceiveBeginPlay();
	void BPOnLinkedStructureDestroyed(class APrimalStructure** DestroyedStructure);
	void RefreshConnections();
	void BPOnWaterStateChange(bool* bPipeHasWaterOrPower);
	void ExecuteUbergraph_Base_Pipe_Flex(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

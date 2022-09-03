#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BP_Wire_Flex_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Wire_Flex.BP_Wire_Flex_C
// 0x0168 (0x0C70 - 0x0B08)
class ABP_Wire_Flex_C : public ABase_Wire_C
{
public:
	float                                              RefreshCooldown;                                          // 0x0B08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0B0C(0x0004) MISSED OFFSET
	TArray<class USplineMeshComponent*>                SplineMeshes;                                             // 0x0B10(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector>                             ConnectionPoints;                                         // 0x0B20(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame)
	struct FVector                                     ConnectionCenterPoint;                                    // 0x0B30(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               DebugMode;                                                // 0x0B3C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0B3D(0x0003) MISSED OFFSET
	class UClass*                                      SearchNearbyWireType;                                     // 0x0B40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_IsRunningOnServer_OutNetworkMode;                // 0x0B48(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum_CmpSuccess;                             // 0x0B49(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x0B4A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0B4B(0x0001) MISSED OFFSET
	int                                                CallFunc_Array_Length_ReturnValue;                        // 0x0B4C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_IntInt_ReturnValue;                   // 0x0B50(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0B51(0x0007) MISSED OFFSET
	TArray<class APrimalStructure*>                    CallFunc_SP_GetNearbyStructuresForFlexibleConnection_ReturnValue;// 0x0B58(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<class APrimalStructure*>                    CallFunc_SP_GetNearbyStructuresForFlexibleConnection_ReturnValue2;// 0x0B68(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                CallFunc_Array_Length_ReturnValue2;                       // 0x0B78(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_IntInt_ReturnValue;                      // 0x0B7C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0B7D(0x0003) MISSED OFFSET
	TArray<struct FVector>                             CallFunc_SP_GetCentralPointForFlexibleConnection_ConnectionPoints;// 0x0B80(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                                     CallFunc_SP_GetCentralPointForFlexibleConnection_CentralPoint;// 0x0B90(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue;                 // 0x0B9C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue2;                // 0x0BA8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_CanRunCosmeticEvents_OutNetworkMode;             // 0x0BB4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0BB5(0x0003) MISSED OFFSET
	class APrimalStructure*                            K2Node_Event_DestroyedStructure;                          // 0x0BB8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum2_CmpSuccess;                            // 0x0BC0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_IsRunningOnServer_OutNetworkMode2;               // 0x0BC1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum3_CmpSuccess;                            // 0x0BC2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x0BC3(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_IsRunningOnServer_OutNetworkMode3;               // 0x0BC4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum4_CmpSuccess;                            // 0x0BC5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x0BC6(0x0002) MISSED OFFSET
	TArray<struct FVector>                             CallFunc_SP_GetCentralPointForFlexibleConnection_ConnectionPoints2;// 0x0BC8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                                     CallFunc_SP_GetCentralPointForFlexibleConnection_CentralPoint2;// 0x0BD8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue3;                       // 0x0BE4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_IntInt_ReturnValue2;                  // 0x0BE8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_CanRunCosmeticEvents_OutNetworkMode2;            // 0x0BE9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum5_CmpSuccess;                            // 0x0BEA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Event_bPipeHasWaterOrPower;                        // 0x0BEB(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Loop_Counter_Variable;                           // 0x0BEC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APlayerController*                           K2Node_Event_ForPC;                                       // 0x0BF0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      K2Node_Event_DamageCauser;                                // 0x0BF8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue;                          // 0x0C00(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x0C04(0x0004) MISSED OFFSET
	TArray<class APrimalStructure*>                    CallFunc_BPGetAllLinkedStructures_OutLinkedStructures;    // 0x0C08(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class APrimalStructure*                            CallFunc_Array_Get_Item;                                  // 0x0C18(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue4;                       // 0x0C20(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x0C24(0x0004) MISSED OFFSET
	class APrimalStructureWaterPipe*                   K2Node_DynamicCast_AsPrimalStructureWaterPipe;            // 0x0C28(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0C30(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue;                         // 0x0C31(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData09[0xE];                                       // 0x0C32(0x000E) MISSED OFFSET
	struct UObject_FTransform                          CallFunc_AddComponent_RelativeTransform_AddComponentDefaultTransform;// 0x0C40(0x0030) (Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Wire_Flex.BP_Wire_Flex_C");
		return ptr;
	}


	void IsAllowedToRefreshConnections(class APlayerController* ForPC, bool* Allowed);
	bool BPTryMultiUse(class APlayerController** ForPC, int* UseIndex);
	TArray<struct FMultiUseEntry> BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
	void LinkWires(TArray<class APrimalStructure*>* Connections);
	void AddSplineMeshComponents(bool UsePreviewMaterial);
	class FString BPOverrideCantBuildReasonString(int* CantBuildReason);
	int BPIsAllowedToBuild(int* CurrentAllowedReason, struct FPlacementData* OutPlacementData);
	void UserConstructionScript();
	void UpdateSplineMeshesEvent();
	void ReceiveBeginPlay();
	void BPOnLinkedStructureDestroyed(class APrimalStructure** DestroyedStructure);
	void RefreshConnections();
	void MultiUpdatePipeMaterials();
	void BPOnWaterStateChange(bool* bPipeHasWaterOrPower);
	void BPOnDemolish(class APlayerController** ForPC, class AActor** DamageCauser);
	void ExecuteUbergraph_BP_Wire_Flex(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

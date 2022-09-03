#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Structure_TaxidermyBase_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Structure_TaxidermyBase.Structure_TaxidermyBase_C
// 0x0101 (0x0F11 - 0x0E10)
class AStructure_TaxidermyBase_C : public AStructureItemContainerBaseBP_C
{
public:
	class UStaticMeshComponent*                        Pedestal;                                                 // 0x0E10(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPrimalInventoryBP_TaxidermyBase_C*          PrimalInventoryBP_TaxidermyBase_C1;                       // 0x0E18(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPrimalItem_TaxidermyDermis_C*               CurrentSnapshot;                                          // 0x0E20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
	int                                                SnapshotPoseIndex;                                        // 0x0E28(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData)
	float                                              SnapshotExtent;                                           // 0x0E2C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SnapshotOffset;                                           // 0x0E30(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PedestalScale;                                            // 0x0E3C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowDefaultAndCaptureSnapshotRemoval;                   // 0x0E40(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowCharacterCapture;                                   // 0x0E41(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSpawnDefaultSnapshot;                                    // 0x0E42(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseDefaultSnapshotMaterial;                              // 0x0E43(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               bRemoveHairOnDefaultSnapshots;                            // 0x0E44(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsSnapshotACapture;                                      // 0x0E45(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               bSnapshotGender;                                          // 0x0E46(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0E47(0x0001) MISSED OFFSET
	float                                              TextRendererFillTime;                                     // 0x0E48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TempCounter;                                              // 0x0E4C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CheatInventorySize;                                       // 0x0E50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSnapshotCollisionOn;                                     // 0x0E54(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0E55(0x0003) MISSED OFFSET
	class UMaterialInterface*                          DefaultSnapshotMaterial;                                  // 0x0E58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      DefaultSnapShotFemaleClass;                               // 0x0E60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      DefaultSnapShotMaleClass;                                 // 0x0E68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct UObject_FTransform                          NameRenderTransform;                                      // 0x0E70(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class UTextRenderComponent*                        NameRenderComponent;                                      // 0x0EA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class FString                                      OverwriteSnapshotMaleString;                              // 0x0EA8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      OverwriteSnapshotFemaleString;                            // 0x0EB8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              NameWorldSize;                                            // 0x0EC8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SecondsToWaitBeforeTakingnextSnapshot;                    // 0x0ECC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastSnapshotTakenTime;                                    // 0x0ED0(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CallFunc_HasAuthority_ReturnValue;                        // 0x0ED8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0ED9(0x0003) MISSED OFFSET
	int                                                CallFunc_Add_IntInt_ReturnValue;                          // 0x0EDC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APlayerController*                           K2Node_CustomEvent_PC;                                    // 0x0EE0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_UseDefaultSnapshotMaterial;            // 0x0EE8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_CaptureCharacter;                      // 0x0EE9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_NonCaptureGenderIsMale;                // 0x0EEA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_KeepPreviousSnapshot;                  // 0x0EEB(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x0EEC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0EED(0x0003) MISSED OFFSET
	int                                                CallFunc_Len_ReturnValue;                                 // 0x0EF0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0EF4(0x0004) MISSED OFFSET
	class FString                                      CallFunc_Left_ReturnValue;                                // 0x0EF8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              CallFunc_Conv_IntToFloat_ReturnValue;                     // 0x0F08(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue;                   // 0x0F0C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_StrStr_ReturnValue;                     // 0x0F10(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Structure_TaxidermyBase.Structure_TaxidermyBase_C");
		return ptr;
	}


	void UpdateDinoMatOverrides();
	void OnContainerRenamed();
	void Construct_Name_Renderer_Component();
	void RemoveHairMeshes();
	void OnRep_SnapshotPoseIndex();
	void CreateDefaultSnapshot(class APlayerController* PC);
	void BPClientDoMultiUse(class APlayerController** ForPC, int* ClientUseIndex);
	void SetTextRendererColor();
	void STATIC_CreateSnapshot(class APlayerController* PC, bool Use_Default_Snapshot_Mat, bool Capture_Character, bool Non_Capture_Gender_Is_Male, bool KeepPreviousSnapshot);
	void BPPlacedStructure(class APlayerController** ForPC);
	void ApplyEquippedSnapshot();
	bool BPTryMultiUse(class APlayerController** ForPC, int* UseIndex);
	TArray<struct FMultiUseEntry> STATIC_BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
	void RemoveSnapshot();
	void ApplySnapshot(class UPrimalItem* Snapshot);
	void BPNotifyInventoryItemChange(bool* bIsItemAdd, class UPrimalItem** theItem, bool* bEquipItem);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void SetRendererText();
	void Multi_CreateSnapshot(class APlayerController* PC, bool UseDefaultSnapshotMaterial, bool CaptureCharacter, bool NonCaptureGenderIsMale, bool KeepPreviousSnapshot);
	void ExecuteUbergraph_Structure_TaxidermyBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

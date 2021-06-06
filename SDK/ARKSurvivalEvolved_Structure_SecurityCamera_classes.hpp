#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Structure_SecurityCamera_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Structure_SecurityCamera.Structure_SecurityCamera_C
// 0x015A (0x0F6A - 0x0E10)
class AStructure_SecurityCamera_C : public AStructureItemContainerBaseBP_C
{
public:
	class UParticleSystemComponent*                    ConnectionFX;                                             // 0x0E10(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             CameraViewPos;                                            // 0x0E18(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             CameraBasePos;                                            // 0x0E20(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UArrowComponent*                             Arrow2;                                                   // 0x0E28(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UArrowComponent*                             Arrow1;                                                   // 0x0E30(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ActiveFX;                                                 // 0x0E38(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        CameraMesh;                                               // 0x0E40(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             CameraMount;                                              // 0x0E48(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxDistanceFromConsole;                                   // 0x0E50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0E54(0x0004) MISSED OFFSET
	class FString                                      NoConsoleErrorString;                                     // 0x0E58(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      TooFarErrorString;                                        // 0x0E68(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class APrimalStructure*                            LinkedConsole;                                            // 0x0E78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               CameraActive;                                             // 0x0E80(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0E81(0x0007) MISSED OFFSET
	double                                             LastUpdateTime;                                           // 0x0E88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    desiredRotation;                                          // 0x0E90(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               CameraPlaced;                                             // 0x0E9C(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               LocalActive;                                              // 0x0E9D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0E9E(0x0002) MISSED OFFSET
	struct FVector                                     ConsoleLocation;                                          // 0x0EA0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0EAC(0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    BeamToConsole;                                            // 0x0EB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxPlacementBeamLength;                                   // 0x0EB8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0EBC(0x0004) MISSED OFFSET
	class UPrimalItem*                                 AssociatedItem;                                           // 0x0EC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class FString                                      ConsoleLimitErrorString;                                  // 0x0EC8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      ConsoleName;                                              // 0x0ED8(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame)
	struct FVector                                     TargetRelativePosition;                                   // 0x0EE8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EverActive;                                               // 0x0EF4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0EF5(0x0003) MISSED OFFSET
	class UAudioComponent*                             CallFunc_PlaySoundAttached_ReturnValue;                   // 0x0EF8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalStructure*                            K2Node_Event_NewStructure;                                // 0x0F00(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalStructure*                            K2Node_Event_CameraToRemove;                              // 0x0F08(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                K2Node_Event_CameraIndex;                                 // 0x0F10(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    K2Node_Event_NewRotation;                                 // 0x0F14(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_IntInt_ReturnValue;                      // 0x0F20(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0F21(0x0003) MISSED OFFSET
	struct FRotator                                    K2Node_CustomEvent_NewParam;                              // 0x0F24(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterCharacter*                           CallFunc_GetOwnerPlayer_ReturnValue;                      // 0x0F30(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APlayerController*                           CallFunc_GetOwnerController_ReturnValue;                  // 0x0F38(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_RandomFloatInRange_ReturnValue;                  // 0x0F40(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x0F44(0x0004) MISSED OFFSET
	class AShooterPlayerController*                    K2Node_DynamicCast_AsShooterPlayerController;             // 0x0F48(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0F50(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x0F51(0x0007) MISSED OFFSET
	class FString                                      K2Node_Event_Name;                                        // 0x0F58(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_CanRunCosmeticEvents_OutNetworkMode;             // 0x0F68(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum_CmpSuccess;                             // 0x0F69(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Structure_SecurityCamera.Structure_SecurityCamera_C");
		return ptr;
	}


	void GetConsoleData(float* ID, class FString* Name, bool* CanAddCamera);
	void CanAddCamera(bool* Allowed);
	void GetConsoleID(float* ID);
	void GetCameraData(TArray<class APrimalStructure*>* Cameras, int* index);
	void GetCameraLocation(struct FVector* CameraViewPoint, struct FRotator* CameraRotation);
	void UpdateEffects();
	class FString BPOverrideDescriptiveName();
	void ClientUpdatePosition();
	void BlueprintDrawHUD(class AShooterHUD** HUD, float* CenterX, float* CenterY);
	void GetConsoleFromID(float ID, class APrimalStructure** LinkedConsole);
	int BPIsAllowedToBuild(int* CurrentAllowedReason, struct FPlacementData* OutPlacementData);
	class UStaticMeshComponent* GetAdditionalComponentForDyePreview();
	void GetCorrectedRotation(struct FRotator* CameraRotation);
	void PlacementTick();
	void ReceiveBeginPlay();
	void BPUnstasis();
	void UpdateCameraPosition(bool Animated);
	void BPPostInitializeComponents();
	void InitializeRotation();
	void BPPlacedStructure(class APlayerController** ForPC);
	void PerformanceThrottledTick();
	void OnRep_CameraActive();
	void BPHandleStructureEnabled(bool* bEnabled);
	bool BPPreventStasis();
	void OnContainerRenamed();
	void ReceiveDestroyed();
	void BPOnStructurePickup(class APlayerController** PlayerController, class UClass** ItemType, class UPrimalItem** NewlyPickedUpItem, bool* bIsQuickPickup);
	void RetrieveLinkedConsoleFromItem(class UPrimalItem* Item, float* LinkedConsole, struct FVector* Location, class FString* CameraName, bool* CanAdd, class FString* ConsoleName);
	void BPGetInfoFromConsumedItemForPlacedStructure(class UPrimalItem** ItemToConsumed);
	class FString BPOverrideCantBuildReasonString(int* CantBuildReason);
	int BPCheckItemRequiementsToBuild(class UPrimalItem** ItemToConsumed);
	void UserConstructionScript();
	void AddNewCamera(class APrimalStructure* NewStructure);
	void RemoveCamera(class APrimalStructure* CameraToRemove);
	void SetCurrentCamera(int CameraIndex);
	void UpdateCameraRotation(const struct FRotator& NewRotation);
	void ClientSetRotation(const struct FRotator& NewParam);
	void ServerInitializeRotation();
	void VerifyConsoleData();
	void UpdateConsoleName(const class FString& Name);
	void ActivateCamera();
	void ClientCameraActivated();
	void ExecuteUbergraph_Structure_SecurityCamera(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

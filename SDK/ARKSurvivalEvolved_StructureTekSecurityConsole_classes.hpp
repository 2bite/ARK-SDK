#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StructureTekSecurityConsole_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass StructureTekSecurityConsole.StructureTekSecurityConsole_C
// 0x0109 (0x0F19 - 0x0E10)
class AStructureTekSecurityConsole_C : public AStructureItemContainerBaseBP_C
{
public:
	class UParticleSystemComponent*                    HolographicControls;                                      // 0x0E10(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPrimalInventoryBP_TekSecurityConsole_C*     PrimalInventoryBP_TekSecurityConsole_C1;                  // 0x0E18(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class APrimalStructure*>                    LinkedCameras_Server;                                     // 0x0E20(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SaveGame)
	int                                                CameraIndex;                                              // 0x0E30(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0E34(0x0004) MISSED OFFSET
	class ARemoteCamera_Character_BP_C*                SpawnedCameraCharacter;                                   // 0x0E38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FRemoteCameraData>                   LinkedCameraData_Client;                                  // 0x0E40(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame)
	bool                                               CameraActive;                                             // 0x0E50(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0E51(0x0003) MISSED OFFSET
	float                                              MaxCameraDistance;                                        // 0x0E54(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ConsoleID;                                                // 0x0E58(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	int                                                MaxLinkedCameras;                                         // 0x0E5C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class FString                                      DefaultCameraName;                                        // 0x0E60(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                K2Node_Event_CameraIndex;                                 // 0x0E70(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0E74(0x0004) MISSED OFFSET
	TScriptInterface<class USecurityConsoleInterface_C> K2Node_DynamicCast_AsSecurityConsoleInterface_C;          // 0x0E78(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0E88(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x0E89(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x0E8A(0x0002) MISSED OFFSET
	struct FRotator                                    K2Node_Event_NewRotation;                                 // 0x0E8C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class FString                                      K2Node_Event_Name;                                        // 0x0E98(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class APrimalStructure*                            K2Node_Event_NewStructure;                                // 0x0EA8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalStructure*                            K2Node_Event_CameraToRemove;                              // 0x0EB0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                K2Node_CustomEvent_Index2;                                // 0x0EB8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0EBC(0x0004) MISSED OFFSET
	class FString                                      K2Node_CustomEvent_Name;                                  // 0x0EC0(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                                     K2Node_CustomEvent_Position;                              // 0x0ED0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                K2Node_CustomEvent_Index;                                 // 0x0EDC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRemoteCameraData                           K2Node_MakeStruct_RemoteCameraData;                       // 0x0EE0(0x0020) (Transient, DuplicateTransient)
	int                                                CallFunc_Array_Length_ReturnValue;                        // 0x0F00(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_LessEqual_IntInt_ReturnValue;                    // 0x0F04(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue2;                            // 0x0F05(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x0F06(0x0002) MISSED OFFSET
	TScriptInterface<class USecurityConsoleInterface_C> K2Node_DynamicCast_AsSecurityConsoleInterface_C2;         // 0x0F08(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x0F18(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StructureTekSecurityConsole.StructureTekSecurityConsole_C");
		return ptr;
	}


	void GetConsoleData(float* ID, class FString* Name, bool* CanAddCamera);
	void CanAddCamera(bool* Allowed);
	void GetConsoleID(float* ID);
	void GetCameraData(TArray<class APrimalStructure*>* Cameras, int* index);
	void GetCameraLocation(struct FVector* CameraViewPoint, struct FRotator* CameraRotation);
	class FString STATIC_GetCameraName(int index, struct FRemoteCameraData* RemoteCameraData);
	void OnContainerRenamed();
	void BPContainerActivated();
	bool CanCameraBeAdded();
	void VerifyCameraList();
	void BPPlacedStructure(class APlayerController** ForPC);
	void OnStructurePlacementRefreshed();
	void VerifyActiveCamera();
	void ReceiveDestroyed();
	void BPUnstasis();
	void RemoveLinkedCamera(class APrimalStructure* Camera);
	void ReceiveBeginPlay();
	void STATIC_AddCamera(class APrimalStructure* NewCamera);
	bool BPPreventStasis();
	void BPContainerDeactivated();
	void BPClientDoMultiUse(class APlayerController** ForPC, int* ClientUseIndex);
	TArray<struct FMultiUseEntry> BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
	bool BPTryMultiUse(class APlayerController** ForPC, int* UseIndex);
	void UserConstructionScript();
	void SetCurrentCamera(int CameraIndex);
	void UpdateCameraRotation(const struct FRotator& NewRotation);
	void UpdateConsoleName(const class FString& Name);
	void ActivateCamera();
	void AddNewCamera(class APrimalStructure* NewStructure);
	void RemoveCamera(class APrimalStructure* CameraToRemove);
	void ClientAddCamera(int index, const class FString& Name, const struct FVector& Position);
	void ClientRemoveCamera(int index);
	void ExecuteUbergraph_StructureTekSecurityConsole(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

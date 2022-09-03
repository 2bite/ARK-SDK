#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_SecurityCamera_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_SecurityCamera.PrimalItemStructure_SecurityCamera_C
// 0x0008 (0x0AF0 - 0x0AE8)
class UPrimalItemStructure_SecurityCamera_C : public UPrimalItemStructureGeneric_C
{
public:
	struct FName                                       CustomItemDataName;                                       // 0x0AE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_SecurityCamera.PrimalItemStructure_SecurityCamera_C");
		return ptr;
	}


	void GetCameraLocation(struct FVector* CameraViewPoint, struct FRotator* CameraRotation);
	void GetCameraData(TArray<class APrimalStructure*>* Cameras, int* index);
	void GetConsoleID(float* ID);
	void CanAddCamera(bool* Allowed);
	void GetConsoleData(float* ID, class FString* Name, bool* CanAddCamera);
	void SetConsoleDataByID(float ConsoleID);
	void STATIC_SetCameraName(const class FString& Name);
	void STATIC_RetrieveConsoleData(float* outConsoleID, struct FVector* OutLocation, bool* outAllowedToAdd, class FString* outCameraName, class FString* outConsoleName);
	void Set_Console_Data(class APrimalStructure* Console, bool* Changed);
	void GetConsoleFromID(float ID, class APrimalStructure** LinkedConsole);
	void BPServerVerifyStructurePlacementData();
	void VerifyConsoleData();
	class FString BPGetItemName(class FString* ItemNameIn, class AShooterPlayerController** ForPC);
	class UTexture2D* BPGetItemIcon(class AShooterPlayerController** ForPC);
	class FString BPGetItemDescription(class FString* InDescription, bool* bGetLongDescription, class AShooterPlayerController** ForPC);
	void ExecuteUbergraph_PrimalItemStructure_SecurityCamera(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

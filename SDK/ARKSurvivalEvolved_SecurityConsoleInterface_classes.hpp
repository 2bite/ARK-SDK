#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SecurityConsoleInterface_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SecurityConsoleInterface.SecurityConsoleInterface_C
// 0x0000 (0x0028 - 0x0028)
class USecurityConsoleInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SecurityConsoleInterface.SecurityConsoleInterface_C");
		return ptr;
	}


	void ActivateCamera();
	void UpdateConsoleName(const class FString& Name);
	void GetConsoleData(float* ID, class FString* Name, bool* CanAddCamera);
	void CanAddCamera(bool* Allowed);
	void GetConsoleID(float* ID);
	void UpdateCameraRotation(const struct FRotator& NewRotation);
	void GetCameraData(TArray<class APrimalStructure*>* Cameras, int* index);
	void SetCurrentCamera(int CameraIndex);
	void GetCameraLocation(struct FVector* CameraViewPoint, struct FRotator* CameraRotation);
	void RemoveCamera(class APrimalStructure* CameraToRemove);
	void AddNewCamera(class APrimalStructure* NewStructure);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Cruise_Missile_MaintainCameraClient_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_Cruise_Missile_MaintainCameraClient.Buff_Cruise_Missile_MaintainCameraClient_C
// 0x0058 (0x09A8 - 0x0950)
class ABuff_Cruise_Missile_MaintainCameraClient_C : public ABuff_Base_C
{
public:
	struct FVector                                     Camera_Location;                                          // 0x0950(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    Camera_Rotation;                                          // 0x095C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Initial_Missile_Location;                                 // 0x0968(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0974(0x0004) MISSED OFFSET
	class USoundBase*                                  explosion_sfx;                                            // 0x0978(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      Server_Buff;                                              // 0x0980(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class AActor*>                              CallFunc_LineTraceSingle_NEW_ActorsToIgnore_RefProperty;  // 0x0988(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)
	TArray<class AActor*>                              CallFunc_LineTraceSingle_NEW_ActorsToIgnore2_RefProperty; // 0x0998(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Cruise_Missile_MaintainCameraClient.Buff_Cruise_Missile_MaintainCameraClient_C");
		return ptr;
	}


	void BPHandleOnStartFire(bool* bFromGamepad);
	bool BPPreventFirstPerson();
	void STATIC_BPOverrideCameraViewTarget(struct FName* CurrentCameraMode, struct FVector* DesiredCameraLocation, struct FRotator* DesiredCameraRotation, float* DesiredFOV, bool* bOverrideCameraLocation, struct FVector* CameraLocation, bool* bOverrideCameraRotation, struct FRotator* CameraRotation, bool* bOverrideCameraFOV, float* CameraFOV);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_Cruise_Missile_MaintainCameraClient(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

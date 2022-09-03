#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Cruise_Missile_MaintainCameraServer_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_Cruise_Missile_MaintainCameraServer.Buff_Cruise_Missile_MaintainCameraServer_C
// 0x0018 (0x0990 - 0x0978)
class ABuff_Cruise_Missile_MaintainCameraServer_C : public ABuff_Base_C
{
public:
	struct FVector                                     Camera_Location;                                          // 0x0978(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    Camera_Rotation;                                          // 0x0984(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Cruise_Missile_MaintainCameraServer.Buff_Cruise_Missile_MaintainCameraServer_C");
		return ptr;
	}


	bool BPServerHandleNetExecCommand(class APlayerController** FromPC, struct FName* CommandName, struct FBPNetExecParams* ExecParams);
	void BPHandleOnStartFire(bool* bFromGamepad);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_Cruise_Missile_MaintainCameraServer(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

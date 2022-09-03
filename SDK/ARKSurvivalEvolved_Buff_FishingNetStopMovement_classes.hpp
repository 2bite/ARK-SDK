#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_FishingNetStopMovement_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_FishingNetStopMovement.Buff_FishingNetStopMovement_C
// 0x0018 (0x0990 - 0x0978)
class ABuff_FishingNetStopMovement_C : public APrimalBuff
{
public:
	struct FRotator                                    clamp_rotation_center;                                    // 0x0978(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Clamped_Yaw_Angle;                                        // 0x0984(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Special_Clamped_Yaw_Max;                                  // 0x0988(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Special_Clamped_Yaw_Min;                                  // 0x098C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_FishingNetStopMovement.Buff_FishingNetStopMovement_C");
		return ptr;
	}


	void BPHandleOnStopFire(bool* bFromGamepad);
	void ReceiveBeginPlay();
	void BuffTickClient(float* DeltaTime);
	bool BPPreventInstigatorMovementMode(TEnumAsByte<EMovementMode>* NewMovementMode, unsigned char* NewCustomMode);
	void BuffTickServer(float* DeltaTime);
	void BPHandleOnStartFire(bool* bFromGamepad);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_FishingNetStopMovement(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

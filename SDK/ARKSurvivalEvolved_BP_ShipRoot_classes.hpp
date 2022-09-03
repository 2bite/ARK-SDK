#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BP_ShipRoot_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ShipRoot.BP_ShipRoot_C
// 0x005A (0x04C2 - 0x0468)
class ABP_ShipRoot_C : public AActor
{
public:
	class UStaticMeshComponent*                        Root;                                                     // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Scene1;                                                   // 0x0470(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ADayCycleManager_Gen2_C*                     DayCycle;                                                 // 0x0478(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               BufferForTrailerOverride;                                 // 0x0480(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0481(0x0003) MISSED OFFSET
	float                                              WarpTimeMPC;                                              // 0x0484(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WarpMPC;                                                  // 0x0488(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x048C(0x0004) MISSED OFFSET
	TArray<class AMatineeActor*>                       Matinees;                                                 // 0x0490(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	float                                              ShipSails;                                                // 0x04A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate;                     // 0x04A4(0x0014) (ZeroConstructor, Transient, DuplicateTransient)
	struct FRotator                                    CallFunc_MakeRot_ReturnValue;                             // 0x04B4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_SetActorRotation_ReturnValue;                    // 0x04C0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x04C1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ShipRoot.BP_ShipRoot_C");
		return ptr;
	}


	void GetMatineeLengthsAndPlayRates(struct FVector2D* WarmUp, struct FVector2D* Loop, struct FVector2D* Cooldown);
	void BindDCM();
	void UserConstructionScript();
	void BindMatineeUpdateFromDCM();
	void OnDCMUpdated();
	void ReceiveBeginPlay();
	void RecieveMatineeUpdated();
	void ExecuteUbergraph_BP_ShipRoot(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

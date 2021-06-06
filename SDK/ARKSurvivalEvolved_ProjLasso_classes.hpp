#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjLasso_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ProjLasso.ProjLasso_C
// 0x0034 (0x06D4 - 0x06A0)
class AProjLasso_C : public APrimalProjectileGrapplingHook
{
public:
	struct FVector                                     ExtraVelocity;                                            // 0x06A0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAttached;                                                // 0x06AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSetVelocityRot;                                          // 0x06AD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x06AE(0x0002) MISSED OFFSET
	struct FRotator                                    PreviousWorldRotation;                                    // 0x06B0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     AttachmentOffset;                                         // 0x06BC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     GrapHookAttachmentOffset;                                 // 0x06C8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ProjLasso.ProjLasso_C");
		return ptr;
	}


	void ReceiveTick(float* DeltaSeconds);
	void ReceiveBeginPlay();
	void BPInitializedVelocity(float* CustomSpeed, struct FVector* InVelocity);
	void UserConstructionScript();
	void ExecuteUbergraph_ProjLasso(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

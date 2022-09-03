#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_IsBeingCarried_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_IsBeingCarried.Buff_IsBeingCarried_C
// 0x000D (0x0985 - 0x0978)
class ABuff_IsBeingCarried_C : public ABuff_Base_C
{
public:
	bool                                               IsCharacterAttached;                                      // 0x0978(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0979(0x0003) MISSED OFFSET
	float                                              WeightLimit;                                              // 0x097C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CanCarryFlyer;                                            // 0x0980(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanCarryUnconscious;                                      // 0x0981(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCarryDinoDismountRider;                                  // 0x0982(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCarryDinoInsteadOfRider;                                 // 0x0983(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRequireLineOfSightToTarget;                              // 0x0984(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_IsBeingCarried.Buff_IsBeingCarried_C");
		return ptr;
	}


	void BPSetupForInstigator(class AActor** ForInstigator);
	void CanGrabWaterDino(class APrimalDinoCharacter* DinoRef, bool* Result);
	void CheckAttachmentAndEvaluate();
	void BuffTickClient(float* DeltaTime);
	void BuffTickServer(float* DeltaTime);
	bool BPCustomAllowAddBuff(class APrimalCharacter** forCharacter, class AActor** DamageCauser);
	bool BPPreventAddingOtherBuff(class UClass** anotherBuffClass);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_IsBeingCarried(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

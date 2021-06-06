#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_AttachedToBeam_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_AttachedToBeam.Buff_AttachedToBeam_C
// 0x0019 (0x0979 - 0x0960)
class ABuff_AttachedToBeam_C : public ABuff_Base_C
{
public:
	float                                              AllowedStruggleInterval;                                  // 0x0960(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0964(0x0004) MISSED OFFSET
	double                                             LastStruggleTime;                                         // 0x0968(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentStrugglePercentage;                                // 0x0970(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StruggleFailIncreasePercentage;                           // 0x0974(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x0978(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_AttachedToBeam.Buff_AttachedToBeam_C");
		return ptr;
	}


	void BuffTickServer(float* DeltaTime);
	void UpdatePreventInstigatorAttack(class AActor* ForInstigator);
	void BPSetupForInstigator(class AActor** ForInstigator);
	void DoStruggle();
	bool BPCheckPreventInput(TEnumAsByte<EPrimalCharacterInputType>* inputType);
	void UserConstructionScript();
	void Server_Struggle();
	void ExecuteUbergraph_Buff_AttachedToBeam(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

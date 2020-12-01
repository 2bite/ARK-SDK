#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_UberpounceTag_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass UberpounceTag.UberpounceTag_C
// 0x002C (0x048C - 0x0460)
class AUberpounceTag_C : public AActor
{
public:
	class UParticleSystemComponent*                    ParticleSystem;                                           // 0x0460(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               OutOfRangeTarget;                                         // 0x0468(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0469(0x0003) MISSED OFFSET
	struct FLinearColor                                TargetInRangeColor;                                       // 0x046C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                TargetOutOfRangeColor;                                    // 0x047C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass UberpounceTag.UberpounceTag_C");
		return ptr;
	}


	void ReceiveTick(float* DeltaSeconds);
	void UserConstructionScript();
	void ExecuteUbergraph_UberpounceTag(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

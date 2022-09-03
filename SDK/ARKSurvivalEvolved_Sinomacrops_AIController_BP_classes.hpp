#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Sinomacrops_AIController_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Sinomacrops_AIController_BP.Sinomacrops_AIController_BP_C
// 0x001F (0x0938 - 0x0919)
class ASinomacrops_AIController_BP_C : public ADino_AIController_BP_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0919(0x0007) MISSED OFFSET
	TArray<float>                                      FleeFromPlayersDistances;                                 // 0x0920(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              PlayerPercentOfMaxWalkForFlee;                            // 0x0930(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FleeFromTamesDistance;                                    // 0x0934(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Sinomacrops_AIController_BP.Sinomacrops_AIController_BP_C");
		return ptr;
	}


	bool STATIC_BPForceTargetDinoRider(class AShooterCharacter** playerTarget);
	void GetShouldFleeFromShooterChar(class AShooterCharacter* ShooterChar, bool* ShouldFlee);
	float BPGetTargetingDesire(class AActor** forTarget, float* ForTargetingDesireValue);
	void UserConstructionScript();
	void ExecuteUbergraph_Sinomacrops_AIController_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

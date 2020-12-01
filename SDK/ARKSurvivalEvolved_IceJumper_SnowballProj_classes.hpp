#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_IceJumper_SnowballProj_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass IceJumper_SnowballProj.IceJumper_SnowballProj_C
// 0x0010 (0x065C - 0x064C)
class AIceJumper_SnowballProj_C : public AChalicoProj_Base_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x064C(0x0004) MISSED OFFSET
	class UChildActorComponent*                        Trail;                                                    // 0x0650(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxSnowBallScale;                                         // 0x0658(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IceJumper_SnowballProj.IceJumper_SnowballProj_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_IceJumper_SnowballProj(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

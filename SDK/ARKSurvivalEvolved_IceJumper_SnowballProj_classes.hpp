#pragma once

// ARKSurvivalEvolved (329.9) SDK

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
// 0x0010 (0x0674 - 0x0664)
class AIceJumper_SnowballProj_C : public AChalicoProj_Base_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0664(0x0004) MISSED OFFSET
	class UChildActorComponent*                        Trail;                                                    // 0x0668(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxSnowBallScale;                                         // 0x0670(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

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

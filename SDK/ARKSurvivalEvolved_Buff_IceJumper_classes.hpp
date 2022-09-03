#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_IceJumper_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_IceJumper.Buff_IceJumper_C
// 0x0004 (0x097C - 0x0978)
class ABuff_IceJumper_C : public APrimalBuff
{
public:
	float                                              PrevIntensity;                                            // 0x0978(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_IceJumper.Buff_IceJumper_C");
		return ptr;
	}


	float GetBuffPostprocessIntensity();
	bool AllowPostProcessEffect();
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_IceJumper(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

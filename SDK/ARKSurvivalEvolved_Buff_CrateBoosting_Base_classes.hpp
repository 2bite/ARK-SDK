#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_CrateBoosting_Base_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_CrateBoosting_Base.Buff_CrateBoosting_Base_C
// 0x0004 (0x097C - 0x0978)
class ABuff_CrateBoosting_Base_C : public ABuff_Base_C
{
public:
	float                                              CrateQualityMultiplier;                                   // 0x0978(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_CrateBoosting_Base.Buff_CrateBoosting_Base_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_CrateBoosting_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

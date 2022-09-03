#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Base_AoE_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_Base_AoE.Buff_Base_AoE_C
// 0x0008 (0x0980 - 0x0978)
class ABuff_Base_AoE_C : public ABuff_Base_C
{
public:
	class USphereComponent*                            StasisComponent;                                          // 0x0978(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Base_AoE.Buff_Base_AoE_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_Base_AoE(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

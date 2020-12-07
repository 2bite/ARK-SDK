#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WaterTap_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WaterTap.WaterTap_C
// 0x0008 (0x0DE8 - 0x0DE0)
class AWaterTap_C : public AWaterTap_Base_C
{
public:
	class UChildActorComponent*                        ActivatedEmitter;                                         // 0x0DE0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WaterTap.WaterTap_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WaterTap(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

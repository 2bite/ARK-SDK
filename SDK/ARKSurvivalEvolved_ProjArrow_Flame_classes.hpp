#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjArrow_Flame_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ProjArrow_Flame.ProjArrow_Flame_C
// 0x0010 (0x06A0 - 0x0690)
class AProjArrow_Flame_C : public AProjArrow_C
{
public:
	class UChildActorComponent*                        ChildActor1;                                              // 0x0690(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             FireSound;                                                // 0x0698(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ProjArrow_Flame.ProjArrow_Flame_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ProjArrow_Flame(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

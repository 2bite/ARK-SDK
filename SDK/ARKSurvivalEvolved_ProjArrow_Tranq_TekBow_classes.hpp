#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjArrow_Tranq_TekBow_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ProjArrow_Tranq_TekBow.ProjArrow_Tranq_TekBow_C
// 0x0010 (0x06A0 - 0x0690)
class AProjArrow_Tranq_TekBow_C : public AProjArrow_Tranq_C
{
public:
	class UChildActorComponent*                        ChildActor1;                                              // 0x0690(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  ProjectileSound;                                          // 0x0698(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ProjArrow_Tranq_TekBow.ProjArrow_Tranq_TekBow_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ProjArrow_Tranq_TekBow(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

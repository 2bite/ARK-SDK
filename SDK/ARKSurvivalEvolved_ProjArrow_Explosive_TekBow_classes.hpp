#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjArrow_Explosive_TekBow_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ProjArrow_Explosive_TekBow.ProjArrow_Explosive_TekBow_C
// 0x0010 (0x06A8 - 0x0698)
class AProjArrow_Explosive_TekBow_C : public AProjArrow_Explosive_C
{
public:
	class UChildActorComponent*                        ChildActor1_1;                                            // 0x0698(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             Projectile_SFX_1;                                         // 0x06A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ProjArrow_Explosive_TekBow.ProjArrow_Explosive_TekBow_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ProjArrow_Explosive_TekBow(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// ARKSurvivalEvolved (332.8) SDK

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
// 0x0017 (0x0750 - 0x0739)
class AProjArrow_Explosive_TekBow_C : public AProjArrow_Explosive_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0739(0x0007) MISSED OFFSET
	class UChildActorComponent*                        ChildActor1_1;                                            // 0x0740(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             Projectile_SFX_1;                                         // 0x0748(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

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

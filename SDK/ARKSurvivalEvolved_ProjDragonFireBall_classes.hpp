#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjDragonFireBall_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ProjDragonFireBall.ProjDragonFireBall_C
// 0x0018 (0x0678 - 0x0660)
class AProjDragonFireBall_C : public AShooterProjectile
{
public:
	class UPointLightComponent*                        PointLight1;                                              // 0x0660(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             Audio1;                                                   // 0x0668(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ChildActor1;                                              // 0x0670(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ProjDragonFireBall.ProjDragonFireBall_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ProjDragonFireBall(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

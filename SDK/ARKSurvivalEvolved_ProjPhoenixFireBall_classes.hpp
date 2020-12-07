#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjPhoenixFireBall_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ProjPhoenixFireBall.ProjPhoenixFireBall_C
// 0x0010 (0x0670 - 0x0660)
class AProjPhoenixFireBall_C : public AShooterProjectile
{
public:
	class UAudioComponent*                             Audio1;                                                   // 0x0660(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ChildActor1;                                              // 0x0668(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ProjPhoenixFireBall.ProjPhoenixFireBall_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ProjPhoenixFireBall(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

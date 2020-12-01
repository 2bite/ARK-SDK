#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjEndDrone_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ProjEndDrone.ProjEndDrone_C
// 0x0008 (0x0650 - 0x0648)
class AProjEndDrone_C : public AShooterProjectile
{
public:
	class UChildActorComponent*                        ChildActor1;                                              // 0x0648(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ProjEndDrone.ProjEndDrone_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ProjEndDrone(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

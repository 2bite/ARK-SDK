#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjRocketFirework_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ProjRocketFirework.ProjRocketFirework_C
// 0x0010 (0x0668 - 0x0658)
class AProjRocketFirework_C : public AShooterProjectile
{
public:
	class UChildActorComponent*                        ChildProjectile;                                          // 0x0658(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             Audio1;                                                   // 0x0660(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ProjRocketFirework.ProjRocketFirework_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ProjRocketFirework(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

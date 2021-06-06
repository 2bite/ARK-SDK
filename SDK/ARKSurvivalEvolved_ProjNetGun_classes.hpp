#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjNetGun_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ProjNetGun.ProjNetGun_C
// 0x0010 (0x0788 - 0x0778)
class AProjNetGun_C : public APrimalProjectileNetGun
{
public:
	class UChildActorComponent*                        ChildProjectile;                                          // 0x0778(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             Audio1;                                                   // 0x0780(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ProjNetGun.ProjNetGun_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ProjNetGun(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

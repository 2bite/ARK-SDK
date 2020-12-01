#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjFireBallDodoRex_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ProjFireBallDodoRex.ProjFireBallDodoRex_C
// 0x0000 (0x0648 - 0x0648)
class AProjFireBallDodoRex_C : public AShooterProjectile
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ProjFireBallDodoRex.ProjFireBallDodoRex_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ProjFireBallDodoRex(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

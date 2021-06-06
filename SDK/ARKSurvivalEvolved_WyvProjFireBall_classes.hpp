#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WyvProjFireBall_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WyvProjFireBall.WyvProjFireBall_C
// 0x0000 (0x0660 - 0x0660)
class AWyvProjFireBall_C : public AShooterProjectile
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WyvProjFireBall.WyvProjFireBall_C");
		return ptr;
	}


	struct FName GetSocketForFinalTraceCheckFromInstigatorToDirectDamageVictim();
	void UserConstructionScript();
	void ExecuteUbergraph_WyvProjFireBall(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

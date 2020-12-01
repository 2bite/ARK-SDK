#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjGrenade_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ProjGrenade.ProjGrenade_C
// 0x0090 (0x06D8 - 0x0648)
class AProjGrenade_C : public AShooterProjectile
{
public:
	class UAudioComponent*                             Audio1;                                                   // 0x0648(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  K2Node_Event_Result;                                      // 0x0650(0x0088) (OutParm, Transient, DuplicateTransient, ReferenceParm)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ProjGrenade.ProjGrenade_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnExplode(struct FHitResult* Result);
	void ExecuteUbergraph_ProjGrenade(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
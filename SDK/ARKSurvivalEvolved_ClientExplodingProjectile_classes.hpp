#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ClientExplodingProjectile_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ClientExplodingProjectile.ClientExplodingProjectile_C
// 0x0090 (0x06F0 - 0x0660)
class AClientExplodingProjectile_C : public AShooterProjectile
{
public:
	class UAudioComponent*                             Audio1;                                                   // 0x0660(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  K2Node_Event_Result;                                      // 0x0668(0x0088) (OutParm, Transient, DuplicateTransient, ReferenceParm)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ClientExplodingProjectile.ClientExplodingProjectile_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnExplode(struct FHitResult* Result);
	void ExecuteUbergraph_ClientExplodingProjectile(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

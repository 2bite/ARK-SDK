#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjPoop_Dinopithecus_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ProjPoop_Dinopithecus.ProjPoop_Dinopithecus_C
// 0x0014 (0x0674 - 0x0660)
class AProjPoop_Dinopithecus_C : public AShooterProjectile
{
public:
	class UAudioComponent*                             Audio1;                                                   // 0x0660(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ChildProjectile;                                          // 0x0668(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              explosionScale;                                           // 0x0670(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ProjPoop_Dinopithecus.ProjPoop_Dinopithecus_C");
		return ptr;
	}


	void ReceiveTick(float* DeltaSeconds);
	bool PreventExplosionEmitter(struct FHitResult* Impact);
	void UserConstructionScript();
	void ExecuteUbergraph_ProjPoop_Dinopithecus(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

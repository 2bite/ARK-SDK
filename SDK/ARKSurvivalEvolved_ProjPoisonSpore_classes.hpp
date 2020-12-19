#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjPoisonSpore_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ProjPoisonSpore.ProjPoisonSpore_C
// 0x0011 (0x0671 - 0x0660)
class AProjPoisonSpore_C : public AShooterProjectile
{
public:
	class UChildActorComponent*                        ChildProjectile;                                          // 0x0660(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            Sphere1;                                                  // 0x0668(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               isPrimalSpore;                                            // 0x0670(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ProjPoisonSpore.ProjPoisonSpore_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ProjPoisonSpore(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

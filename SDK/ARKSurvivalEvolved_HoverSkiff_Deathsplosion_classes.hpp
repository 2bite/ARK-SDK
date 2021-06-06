#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_HoverSkiff_Deathsplosion_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass HoverSkiff_Deathsplosion.HoverSkiff_Deathsplosion_C
// 0x0010 (0x0498 - 0x0488)
class AHoverSkiff_Deathsplosion_C : public ADestructibleActor
{
public:
	class URadialForceComponent*                       ExplosionForce;                                           // 0x0488(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ExplosionParticles;                                       // 0x0490(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass HoverSkiff_Deathsplosion.HoverSkiff_Deathsplosion_C");
		return ptr;
	}


	void InitDeathsplosion(class ATekHoverSkiff_Character_BP_C* FromSkiff);
	void ReceiveDestroyed();
	void UserConstructionScript();
	void ExecuteUbergraph_HoverSkiff_Deathsplosion(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

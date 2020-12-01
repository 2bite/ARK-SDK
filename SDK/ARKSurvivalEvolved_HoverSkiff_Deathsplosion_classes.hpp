#pragma once

// ARKSurvivalEvolved (301.1) SDK

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
// 0x0010 (0x0490 - 0x0480)
class AHoverSkiff_Deathsplosion_C : public ADestructibleActor
{
public:
	class URadialForceComponent*                       ExplosionForce;                                           // 0x0480(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ExplosionParticles;                                       // 0x0488(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

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

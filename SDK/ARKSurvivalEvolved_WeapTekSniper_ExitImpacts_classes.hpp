#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapTekSniper_ExitImpacts_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapTekSniper_ExitImpacts.WeapTekSniper_ExitImpacts_C
// 0x0008 (0x0800 - 0x07F8)
class AWeapTekSniper_ExitImpacts_C : public AShooterImpactEffect
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x07F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapTekSniper_ExitImpacts.WeapTekSniper_ExitImpacts_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WeapTekSniper_ExitImpacts(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
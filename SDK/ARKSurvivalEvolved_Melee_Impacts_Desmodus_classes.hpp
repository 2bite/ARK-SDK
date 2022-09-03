#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Melee_Impacts_Desmodus_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Melee_Impacts_Desmodus.Melee_Impacts_Desmodus_C
// 0x0008 (0x0888 - 0x0880)
class AMelee_Impacts_Desmodus_C : public AShooterImpactEffect
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0880(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Melee_Impacts_Desmodus.Melee_Impacts_Desmodus_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Melee_Impacts_Desmodus(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

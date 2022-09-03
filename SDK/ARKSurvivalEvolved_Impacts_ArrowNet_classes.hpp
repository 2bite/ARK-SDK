#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Impacts_ArrowNet_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Impacts_ArrowNet.Impacts_ArrowNet_C
// 0x0008 (0x0888 - 0x0880)
class AImpacts_ArrowNet_C : public AShooterImpactEffect
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0880(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Impacts_ArrowNet.Impacts_ArrowNet_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Impacts_ArrowNet(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

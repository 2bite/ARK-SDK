#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MeleeFist_Impacts_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MeleeFist_Impacts.MeleeFist_Impacts_C
// 0x0008 (0x0888 - 0x0880)
class AMeleeFist_Impacts_C : public AShooterImpactEffect
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0880(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MeleeFist_Impacts.MeleeFist_Impacts_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_MeleeFist_Impacts(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

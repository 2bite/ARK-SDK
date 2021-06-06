#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_RockGolem_TheIslandDisguise_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass RockGolem_TheIslandDisguise.RockGolem_TheIslandDisguise_C
// 0x0010 (0x0478 - 0x0468)
class ARockGolem_TheIslandDisguise_C : public AActor
{
public:
	class UStaticMeshComponent*                        StaticMesh1;                                              // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Scene1;                                                   // 0x0470(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass RockGolem_TheIslandDisguise.RockGolem_TheIslandDisguise_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_RockGolem_TheIslandDisguise(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

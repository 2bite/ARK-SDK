#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ArtifactCrate_KingKaiju_Beta_EX_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ArtifactCrate_KingKaiju_Beta_EX.ArtifactCrate_KingKaiju_Beta_EX_C
// 0x0008 (0x0E80 - 0x0E78)
class AArtifactCrate_KingKaiju_Beta_EX_C : public AArtifactCrate_Instantaneous_Alt_C
{
public:
	class USkeletalMeshComponent*                      SkeletalMesh2;                                            // 0x0E78(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ArtifactCrate_KingKaiju_Beta_EX.ArtifactCrate_KingKaiju_Beta_EX_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ArtifactCrate_KingKaiju_Beta_EX(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ArtifactCrate_12_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ArtifactCrate_12.ArtifactCrate_11_C
// 0x0008 (0x0E98 - 0x0E90)
class AArtifactCrate_11_C : public AArtifactCrate_Instantaneous_C
{
public:
	class UParticleSystemComponent*                    ParticleSystem2;                                          // 0x0E90(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ArtifactCrate_12.ArtifactCrate_11_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ArtifactCrate_12(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

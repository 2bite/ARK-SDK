#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ArtifactCrate_10_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ArtifactCrate_10.ArtifactCrate_9_C
// 0x0008 (0x0ED8 - 0x0ED0)
class AArtifactCrate_9_C : public AArtifactCrate_Instantaneous_C
{
public:
	class UParticleSystemComponent*                    ParticleSystem2;                                          // 0x0ED0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ArtifactCrate_10.ArtifactCrate_9_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ArtifactCrate_10(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

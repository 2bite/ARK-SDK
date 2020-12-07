#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ArtifactCrate_IceKaiju_EX_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ArtifactCrate_IceKaiju_EX.ArtifactCrate_IceKaiju_EX_C
// 0x0008 (0x0EA0 - 0x0E98)
class AArtifactCrate_IceKaiju_EX_C : public AArtifactCrate_Instantaneous_Alt_C
{
public:
	class UParticleSystemComponent*                    ParticleSystem2;                                          // 0x0E98(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ArtifactCrate_IceKaiju_EX.ArtifactCrate_IceKaiju_EX_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ArtifactCrate_IceKaiju_EX(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

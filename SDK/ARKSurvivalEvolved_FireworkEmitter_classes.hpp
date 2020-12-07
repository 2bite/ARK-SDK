#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_FireworkEmitter_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass FireworkEmitter.FireworkEmitter_C
// 0x0010 (0x0528 - 0x0518)
class AFireworkEmitter_C : public APrimalEmitterSpawnable
{
public:
	class UAudioComponent*                             Audio1;                                                   // 0x0518(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem1;                                          // 0x0520(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FireworkEmitter.FireworkEmitter_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_FireworkEmitter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

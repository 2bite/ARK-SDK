#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PersistentGameplaySublevel_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PersistentGameplaySublevel.PersistentGameplaySublevel_C
// 0x0008 (0x0470 - 0x0468)
class APersistentGameplaySublevel_C : public ALevelScriptActor
{
public:
	class UParticleSystemComponent*                    UnderwaterParticles;                                      // 0x0468(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PersistentGameplaySublevel.PersistentGameplaySublevel_C");
		return ptr;
	}


	void ExecuteUbergraph_PersistentGameplaySublevel(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

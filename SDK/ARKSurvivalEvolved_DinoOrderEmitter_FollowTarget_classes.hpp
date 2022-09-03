#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoOrderEmitter_FollowTarget_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoOrderEmitter_FollowTarget.DinoOrderEmitter_FollowTarget_C
// 0x0000 (0x0518 - 0x0518)
class ADinoOrderEmitter_FollowTarget_C : public APrimalEmitterSpawnable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoOrderEmitter_FollowTarget.DinoOrderEmitter_FollowTarget_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_DinoOrderEmitter_FollowTarget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

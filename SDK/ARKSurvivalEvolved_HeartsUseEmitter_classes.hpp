#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_HeartsUseEmitter_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass HeartsUseEmitter.HeartsUseEmitter_C
// 0x0000 (0x0518 - 0x0518)
class AHeartsUseEmitter_C : public APrimalEmitterSpawnable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass HeartsUseEmitter.HeartsUseEmitter_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_HeartsUseEmitter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

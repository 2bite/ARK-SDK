#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Emitter_CanoeSplash_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Emitter_CanoeSplash.Emitter_CanoeSplash_C
// 0x0000 (0x0518 - 0x0518)
class AEmitter_CanoeSplash_C : public APrimalEmitterSpawnable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Emitter_CanoeSplash.Emitter_CanoeSplash_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Emitter_CanoeSplash(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

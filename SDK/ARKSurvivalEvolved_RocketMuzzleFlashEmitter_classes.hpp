#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_RocketMuzzleFlashEmitter_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass RocketMuzzleFlashEmitter.RocketMuzzleFlashEmitter_C
// 0x0000 (0x0518 - 0x0518)
class ARocketMuzzleFlashEmitter_C : public APrimalEmitterSpawnable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass RocketMuzzleFlashEmitter.RocketMuzzleFlashEmitter_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_RocketMuzzleFlashEmitter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MuzzleFlashEmitterLarge_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MuzzleFlashEmitterLarge.MuzzleFlashEmitterLarge_C
// 0x0000 (0x0518 - 0x0518)
class AMuzzleFlashEmitterLarge_C : public APrimalEmitterSpawnable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MuzzleFlashEmitterLarge.MuzzleFlashEmitterLarge_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_MuzzleFlashEmitterLarge(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

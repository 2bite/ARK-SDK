#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SpaceDolphinBombExplosion_Emitter_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SpaceDolphinBombExplosion_Emitter.SpaceDolphinBombExplosion_Emitter_C
// 0x0000 (0x0518 - 0x0518)
class ASpaceDolphinBombExplosion_Emitter_C : public APrimalEmitterSpawnable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SpaceDolphinBombExplosion_Emitter.SpaceDolphinBombExplosion_Emitter_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_SpaceDolphinBombExplosion_Emitter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

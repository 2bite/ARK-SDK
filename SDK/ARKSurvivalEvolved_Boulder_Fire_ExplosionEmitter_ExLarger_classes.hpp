#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Boulder_Fire_ExplosionEmitter_ExLarger_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Boulder_Fire_ExplosionEmitter_ExLarger.Boulder_Fire_ExplosionEmitter_ExLarger_C
// 0x0000 (0x0518 - 0x0518)
class ABoulder_Fire_ExplosionEmitter_ExLarger_C : public APrimalEmitterSpawnable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Boulder_Fire_ExplosionEmitter_ExLarger.Boulder_Fire_ExplosionEmitter_ExLarger_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Boulder_Fire_ExplosionEmitter_ExLarger(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

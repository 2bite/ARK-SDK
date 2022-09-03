#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_tekgeneratorEmitter_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass tekgeneratorEmitter.TekGeneratorEmitter_C
// 0x0000 (0x0518 - 0x0518)
class ATekGeneratorEmitter_C : public APrimalEmitterSpawnable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass tekgeneratorEmitter.TekGeneratorEmitter_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_TekGeneratorEmitter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

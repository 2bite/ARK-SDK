#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_UnderwaterBaseFloodedEmitter_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass UnderwaterBaseFloodedEmitter.UnderwaterBaseFloodedEmitter_C
// 0x0000 (0x0500 - 0x0500)
class AUnderwaterBaseFloodedEmitter_C : public APrimalEmitterSpawnable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass UnderwaterBaseFloodedEmitter.UnderwaterBaseFloodedEmitter_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_UnderwaterBaseFloodedEmitter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
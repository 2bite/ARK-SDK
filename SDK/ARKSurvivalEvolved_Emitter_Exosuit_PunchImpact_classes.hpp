#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Emitter_Exosuit_PunchImpact_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Emitter_Exosuit_PunchImpact.Emitter_Exosuit_PunchImpact_C
// 0x0000 (0x0518 - 0x0518)
class AEmitter_Exosuit_PunchImpact_C : public APrimalEmitterSpawnable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Emitter_Exosuit_PunchImpact.Emitter_Exosuit_PunchImpact_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Emitter_Exosuit_PunchImpact(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

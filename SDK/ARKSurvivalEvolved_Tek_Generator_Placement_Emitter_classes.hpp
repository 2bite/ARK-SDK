#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Tek_Generator_Placement_Emitter_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Tek_Generator_Placement_Emitter.Tek_Generator_Placement_Emitter_C
// 0x0000 (0x0518 - 0x0518)
class ATek_Generator_Placement_Emitter_C : public APrimalEmitterSpawnable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Tek_Generator_Placement_Emitter.Tek_Generator_Placement_Emitter_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Tek_Generator_Placement_Emitter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

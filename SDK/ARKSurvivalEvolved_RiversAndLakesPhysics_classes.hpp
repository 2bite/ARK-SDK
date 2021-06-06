#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_RiversAndLakesPhysics_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass RiversAndLakesPhysics.RiversAndLakesPhysics_C
// 0x0000 (0x0470 - 0x0470)
class ARiversAndLakesPhysics_C : public ALevelScriptActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass RiversAndLakesPhysics.RiversAndLakesPhysics_C");
		return ptr;
	}


	void ExecuteUbergraph_RiversAndLakesPhysics(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

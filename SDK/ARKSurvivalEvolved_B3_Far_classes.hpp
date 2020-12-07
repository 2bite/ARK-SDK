#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_B3_Far_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass B3_Far.B3_Far_C
// 0x0000 (0x0470 - 0x0470)
class AB3_Far_C : public ALevelScriptActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B3_Far.B3_Far_C");
		return ptr;
	}


	void ExecuteUbergraph_B3_Far(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

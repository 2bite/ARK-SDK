#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_RiversAndLakes_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass RiversAndLakes.RiversAndLakes_C
// 0x0000 (0x0470 - 0x0470)
class ARiversAndLakes_C : public ALevelScriptActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass RiversAndLakes.RiversAndLakes_C");
		return ptr;
	}


	void ExecuteUbergraph_RiversAndLakes(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

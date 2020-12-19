#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_GiantTurtle_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoEntry_GiantTurtle.DinoEntry_GiantTurtle_C
// 0x0000 (0x0080 - 0x0080)
class UDinoEntry_GiantTurtle_C : public UPrimalDinoEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoEntry_GiantTurtle.DinoEntry_GiantTurtle_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoEntry_GiantTurtle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

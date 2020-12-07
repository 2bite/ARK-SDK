#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Para_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoEntry_Para.DinoEntry_Para_C
// 0x0000 (0x0080 - 0x0080)
class UDinoEntry_Para_C : public UPrimalDinoEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoEntry_Para.DinoEntry_Para_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoEntry_Para(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

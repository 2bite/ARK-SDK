#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Megalosaurus_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoEntry_Megalosaurus.DinoEntry_Megalosaurus_C
// 0x0000 (0x0080 - 0x0080)
class UDinoEntry_Megalosaurus_C : public UPrimalDinoEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoEntry_Megalosaurus.DinoEntry_Megalosaurus_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoEntry_Megalosaurus(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

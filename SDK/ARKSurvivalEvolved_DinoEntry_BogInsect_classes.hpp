#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_BogInsect_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoEntry_BogInsect.DinoEntry_BogInsect_C
// 0x0000 (0x0080 - 0x0080)
class UDinoEntry_BogInsect_C : public UPrimalDinoEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoEntry_BogInsect.DinoEntry_BogInsect_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoEntry_BogInsect(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

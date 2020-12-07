#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_MoleRat_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoEntry_MoleRat.DinoEntry_MoleRat_C
// 0x0000 (0x0080 - 0x0080)
class UDinoEntry_MoleRat_C : public UPrimalDinoEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoEntry_MoleRat.DinoEntry_MoleRat_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoEntry_MoleRat(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

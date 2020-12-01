#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Coel_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoEntry_Coel.DinoEntry_Coel_C
// 0x0000 (0x0080 - 0x0080)
class UDinoEntry_Coel_C : public UPrimalDinoEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoEntry_Coel.DinoEntry_Coel_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoEntry_Coel(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

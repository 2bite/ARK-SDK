#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Carno_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoEntry_Carno.DinoEntry_Carno_C
// 0x0000 (0x0080 - 0x0080)
class UDinoEntry_Carno_C : public UPrimalDinoEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoEntry_Carno.DinoEntry_Carno_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoEntry_Carno(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

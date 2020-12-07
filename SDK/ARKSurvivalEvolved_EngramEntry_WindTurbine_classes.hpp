#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_WindTurbine_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EngramEntry_WindTurbine.EngramEntry_WindTurbine_C
// 0x0000 (0x0090 - 0x0090)
class UEngramEntry_WindTurbine_C : public UPrimalEngramEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EngramEntry_WindTurbine.EngramEntry_WindTurbine_C");
		return ptr;
	}


	void ExecuteUbergraph_EngramEntry_WindTurbine(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_Saddle_TerrorBird_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EngramEntry_Saddle_TerrorBird.EngramEntry_Saddle_TerrorBird_C
// 0x0000 (0x0090 - 0x0090)
class UEngramEntry_Saddle_TerrorBird_C : public UPrimalEngramEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EngramEntry_Saddle_TerrorBird.EngramEntry_Saddle_TerrorBird_C");
		return ptr;
	}


	void ExecuteUbergraph_EngramEntry_Saddle_TerrorBird(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

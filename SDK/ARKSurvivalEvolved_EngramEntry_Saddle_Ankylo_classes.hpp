#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_Saddle_Ankylo_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EngramEntry_Saddle_Ankylo.EngramEntry_Saddle_Ankylo_C
// 0x0000 (0x0090 - 0x0090)
class UEngramEntry_Saddle_Ankylo_C : public UPrimalEngramEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EngramEntry_Saddle_Ankylo.EngramEntry_Saddle_Ankylo_C");
		return ptr;
	}


	void ExecuteUbergraph_EngramEntry_Saddle_Ankylo(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

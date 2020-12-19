#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_GiantTurtleSaddle_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EngramEntry_GiantTurtleSaddle.EngramEntry_GiantTurtleSaddle_C
// 0x0000 (0x0090 - 0x0090)
class UEngramEntry_GiantTurtleSaddle_C : public UPrimalEngramEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EngramEntry_GiantTurtleSaddle.EngramEntry_GiantTurtleSaddle_C");
		return ptr;
	}


	void ExecuteUbergraph_EngramEntry_GiantTurtleSaddle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

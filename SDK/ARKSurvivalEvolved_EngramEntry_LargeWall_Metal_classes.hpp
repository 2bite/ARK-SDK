#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_LargeWall_Metal_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EngramEntry_LargeWall_Metal.EngramEntry_LargeWall_Metal_C
// 0x0000 (0x0090 - 0x0090)
class UEngramEntry_LargeWall_Metal_C : public UPrimalEngramEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EngramEntry_LargeWall_Metal.EngramEntry_LargeWall_Metal_C");
		return ptr;
	}


	void ExecuteUbergraph_EngramEntry_LargeWall_Metal(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

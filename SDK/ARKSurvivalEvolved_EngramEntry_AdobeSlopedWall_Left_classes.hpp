#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_AdobeSlopedWall_Left_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EngramEntry_AdobeSlopedWall_Left.EngramEntry_AdobeSlopedWall_Left_C
// 0x0000 (0x0090 - 0x0090)
class UEngramEntry_AdobeSlopedWall_Left_C : public UPrimalEngramEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EngramEntry_AdobeSlopedWall_Left.EngramEntry_AdobeSlopedWall_Left_C");
		return ptr;
	}


	void ExecuteUbergraph_EngramEntry_AdobeSlopedWall_Left(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
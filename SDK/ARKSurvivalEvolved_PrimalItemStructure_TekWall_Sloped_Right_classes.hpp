#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_TekWall_Sloped_Right_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_TekWall_Sloped_Right.PrimalItemStructure_TekWall_Sloped_Right_C
// 0x0000 (0x09E8 - 0x09E8)
class UPrimalItemStructure_TekWall_Sloped_Right_C : public UPrimalItemStructure_BaseWall_Sloped_Right_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_TekWall_Sloped_Right.PrimalItemStructure_TekWall_Sloped_Right_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemStructure_TekWall_Sloped_Right(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

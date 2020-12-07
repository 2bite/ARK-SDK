#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResource_TurtleShell_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemResource_TurtleShell.PrimalItemResource_TurtleShell_C
// 0x0000 (0x09E8 - 0x09E8)
class UPrimalItemResource_TurtleShell_C : public UPrimalItemResource_Keratin_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemResource_TurtleShell.PrimalItemResource_TurtleShell_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemResource_TurtleShell(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

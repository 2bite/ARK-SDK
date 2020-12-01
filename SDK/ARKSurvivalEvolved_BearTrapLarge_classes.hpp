#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BearTrapLarge_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BearTrapLarge.BearTrapLarge_C
// 0x0000 (0x0B60 - 0x0B60)
class ABearTrapLarge_C : public ABaseBearTrap_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BearTrapLarge.BearTrapLarge_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_BearTrapLarge(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// ARKSurvivalEvolved (318.14) SDK

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
// 0x0000 (0x0B68 - 0x0B68)
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

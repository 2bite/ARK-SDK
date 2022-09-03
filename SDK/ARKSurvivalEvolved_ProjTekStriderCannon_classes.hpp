#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjTekStriderCannon_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ProjTekStriderCannon.ProjTekStriderCannon_C
// 0x0000 (0x06F0 - 0x06F0)
class AProjTekStriderCannon_C : public AProjMekSiegeCannon_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ProjTekStriderCannon.ProjTekStriderCannon_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ProjTekStriderCannon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

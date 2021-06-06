#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjTekStriderCannon_STA_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ProjTekStriderCannon_STA.ProjTekStriderCannon_STA_C
// 0x0000 (0x06F0 - 0x06F0)
class AProjTekStriderCannon_STA_C : public AProjTekStriderCannon_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ProjTekStriderCannon_STA.ProjTekStriderCannon_STA_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ProjTekStriderCannon_STA(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

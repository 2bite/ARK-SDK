#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjFlare_Firework_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ProjFlare_Firework.ProjFlare_Firework_C
// 0x0000 (0x0698 - 0x0698)
class AProjFlare_Firework_C : public AProjFlare_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ProjFlare_Firework.ProjFlare_Firework_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ProjFlare_Firework(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

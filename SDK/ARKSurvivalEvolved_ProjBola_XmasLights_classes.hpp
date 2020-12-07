#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjBola_XmasLights_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ProjBola_XmasLights.ProjBola_XmasLights_C
// 0x0000 (0x06F0 - 0x06F0)
class AProjBola_XmasLights_C : public AProjBola_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ProjBola_XmasLights.ProjBola_XmasLights_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ProjBola_XmasLights(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

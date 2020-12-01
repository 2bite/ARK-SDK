#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LandscapeSublevel_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LandscapeSublevel.LandscapeSublevel_C
// 0x0008 (0x0470 - 0x0468)
class ALandscapeSublevel_C : public ALevelScriptActor
{
public:
	class ALandscape*                                  Landscape_0_ExecuteUbergraph_LandscapeSublevel_RefProperty;// 0x0468(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LandscapeSublevel.LandscapeSublevel_C");
		return ptr;
	}


	void HideLandscape();
	void ShowLandscape();
	void ExecuteUbergraph_LandscapeSublevel(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

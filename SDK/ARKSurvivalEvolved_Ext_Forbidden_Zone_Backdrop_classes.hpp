#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Ext_Forbidden_Zone_Backdrop_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ext_Forbidden_Zone_Backdrop.Ext_Forbidden_Zone_Backdrop_C
// 0x0000 (0x0470 - 0x0470)
class AExt_Forbidden_Zone_Backdrop_C : public ALevelScriptActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ext_Forbidden_Zone_Backdrop.Ext_Forbidden_Zone_Backdrop_C");
		return ptr;
	}


	void ExecuteUbergraph_Ext_Forbidden_Zone_Backdrop(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Ext_Crater_Forest_Near_3_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ext_Crater_Forest_Near_3.Ext_Crater_Forest_Near_2_C
// 0x0000 (0x0458 - 0x0458)
class AExt_Crater_Forest_Near_2_C : public ALevelScriptActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ext_Crater_Forest_Near_3.Ext_Crater_Forest_Near_2_C");
		return ptr;
	}


	void ExecuteUbergraph_Ext_Crater_Forest_Near_3(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

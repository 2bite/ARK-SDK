#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Ext_Landscape_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ext_Landscape.Ext_Landscape_C
// 0x0008 (0x0460 - 0x0458)
class AExt_Landscape_C : public ALevelScriptActor
{
public:
	class ALandscape*                                  Landscape_3_ExecuteUbergraph_Ext_Landscape_RefProperty;   // 0x0458(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ext_Landscape.Ext_Landscape_C");
		return ptr;
	}


	void HideLandscape();
	void UnHideLandscape();
	void ExecuteUbergraph_Ext_Landscape(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

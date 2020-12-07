#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Ext_Skybox_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ext_Skybox.Ext_Skybox_C
// 0x0000 (0x0470 - 0x0470)
class AExt_Skybox_C : public ALevelScriptActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ext_Skybox.Ext_Skybox_C");
		return ptr;
	}


	void ExecuteUbergraph_Ext_Skybox(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

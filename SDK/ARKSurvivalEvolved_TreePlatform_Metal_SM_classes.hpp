#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TreePlatform_Metal_SM_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TreePlatform_Metal_SM.TreePlatform_Metal_SM_C
// 0x0000 (0x0AB8 - 0x0AB8)
class ATreePlatform_Metal_SM_C : public ATreePlatform_Base_SM_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TreePlatform_Metal_SM.TreePlatform_Metal_SM_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_TreePlatform_Metal_SM(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

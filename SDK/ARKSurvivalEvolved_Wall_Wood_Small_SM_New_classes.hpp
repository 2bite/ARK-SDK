#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Wall_Wood_Small_SM_New_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Wall_Wood_Small_SM_New.Wall_Wood_Small_SM_New_C
// 0x0000 (0x0AE8 - 0x0AE8)
class AWall_Wood_Small_SM_New_C : public AWall_Base_Small_SM_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Wall_Wood_Small_SM_New.Wall_Wood_Small_SM_New_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Wall_Wood_Small_SM_New(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

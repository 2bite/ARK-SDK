#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Wall_Stone_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Wall_Stone.Wall_Stone_C
// 0x0000 (0x0AC0 - 0x0AC0)
class AWall_Stone_C : public AWall_Base_Small_SM_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Wall_Stone.Wall_Stone_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Wall_Stone(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
